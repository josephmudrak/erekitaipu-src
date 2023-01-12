#define NCURSES_WIDECHAR	1

#include <curses.h>
#include <locale.h>
#include <ncurses.h>
#include <stdlib.h>
#include <string.h>
#include <wchar.h>

#include "array.h"
#include "convert.h"
#include "kana.h"
#include "kanji.h"

int main()
{
	wint_t c;
	int dakuten;	// Can last character accept dakuten? Is it full-width?
	int pos;		// Position in kana buffer
	int gendaku;	// Same as dakuten, but generic

	int katakana	= 0;	// Hiragana or katakana?
	int jpinput		= 1;	// Japanese or alphanumeric?
	int kbdprev		= 0;	// Previous key press buffer entry
	int line		= 0;	// End of line near?

	int kbdbuf[16]		= {0};	// Keypress buffer
	int kanjibuf[16]	= {0};	// Same as kbdbuf, but with generic sounds

	int kpos			= 0;	// Position in kanji buffer
	arrayStruct cand;			// Kanji candidates
	int choice			= 0;	// Current kanji choice
	int choicePos		= 0;	// Position of current kanji choice


	setlocale(LC_ALL, "");

	initscr();				// Start curses mode
	clear();
	noecho();
	cbreak();				// Disable line buffering
	keypad(stdscr, TRUE);

	WINDOW* winCand		= newwin(1, 26, 23, 0);
	WINDOW* winBuf		= newwin(1, 23, 22, 0);
	WINDOW* winInput	= newwin(1, 1, 21, 0);
	WINDOW* winKana		= newwin(1, 1, 20, 0);

	refresh();

	while (1)
	{
		wget_wch(stdscr, &c);
		switch (c)
		{
			case '[':
				if (jpinput && pos != 0)
				{
					kbdbuf[pos - 1]	= getDakuten(kbdbuf[pos - 1]);
					kanjibuf[kpos - 1]	= toGeneric(getDakuten(
										kanjibuf[kpos - 1]));
				}
				else if (!jpinput)
				{
					printDirect(AT_SIGN);
				}
				break;

			case ']':
				if (jpinput && pos != 0)
				{
					kbdbuf[pos - 1]	= getHandakuten(kbdbuf[pos - 1]);
					kanjibuf[kpos - 1]	= toGeneric(getHandakuten(
										kanjibuf[kpos - 1]));
				}
				else if (!jpinput)
				{
					printDirect(BRACKET_LEFT);
				}
				break;

			case KEY_LEFT:	// 無変換 - No Conversion
				for (int i = 0; i <= (notNull(kbdbuf,
					(sizeof(kbdbuf) / sizeof(kbdbuf[0])) - 1)); i++)
				{
					printChar(kbdbuf[i]);
					dakuten	= kbdbuf[i];
					//printw("%d", kbdbuf[i]);
				}
				refresh();
				memset(kbdbuf, 0, sizeof(kbdbuf));	// Clear keyboard buffer
				memset(kanjibuf, 0, sizeof(kanjibuf));
				cand		= clearList(cand);
				pos			= 0;
				kpos		= 0;
				choicePos	= 0;
				break;

			case KEY_RIGHT:	// 変換 - Conversion
				if (jpinput && cand.array[choicePos] != 0 && kpos != 0)
				{
					printKanji(cand.array[choicePos]);
				}
				refresh();
				memset(kbdbuf, 0, sizeof(kbdbuf));	// Clear keyboard buffer
				memset(kanjibuf, 0, sizeof(kanjibuf));
				cand		= clearList(cand);
				pos			= 0;
				kpos		= 0;
				choicePos	= 0;
				break;

			case KEY_UP:// ひらがな/カタカナ - Hiragana/Katakana
				if (katakana)
				{
					katakana	= 0;	// Switch to hiragana
				}
				else
				{
					katakana	= 1;	// Switch to katakana
				}
				refresh();
				break;

			case KEY_DOWN:	// 英数 - Alphanumeric
				if (jpinput)
				{
					jpinput	= 0;	// Switch to alphanumeric
				}
				else
				{
					jpinput	= 1;	// Switch to Japanese
				}
				dakuten	= 0;
				refresh();
				break;

			case 9:	// Tab
				system("echo \"\t\" | paps | lpr");
				refresh();
				break;

			case 10:	// Enter (newline)
				if (jpinput && cand.array[choicePos] != 0 && kpos != 0)
				{
					printKanji(cand.array[choicePos]);
				}
				else
				{
					system("echo \"\n\" | paps | lpr");
				}
				refresh();
				memset(kbdbuf, 0, sizeof(kbdbuf));	// Clear keyboard buffer
				memset(kanjibuf, 0, sizeof(kanjibuf));
				cand		= clearList(cand);
				pos			= 0;
				kpos		= 0;
				choicePos	= 0;
				break;

			case 263:	// Backspace
				if (dakuten)	// Two backspaces required for full-width
								// characters
				{
					system("echo \"\b\b\" | paps | lpr");
				}
				else
				{
					system("echo \"\b\" | paps | lpr");
				}
				refresh();
				break;

			case ' ':
				if (!jpinput && cand.array[0] != 0)
				{
					system("echo \" \" | paps | lpr");
					refresh();
				}
				else
				{
					refresh();
					if (choicePos ==
						(sizeof(cand.array) / sizeof(cand.array[0])) - 1)
					{
						choicePos	= 0;
					}
					else
					{
						choicePos++;
					}
				}

				break;

			default:
				if (jpinput)
				{
					kbdbuf[pos]		= getBase(jpinput, katakana, (wchar_t) c,
									dakuten);
					kanjibuf[kpos]	= toGeneric(getBase(jpinput, katakana,
									(wchar_t) c, gendaku));
					cand			= selectKanji(kanjibuf);
					dakuten			= kbdbuf[pos];
					gendaku			= kanjibuf[kpos];
					refresh();
					pos++;
					kpos++;
				}
				else
				{
					printDirect(getBase(jpinput, katakana, (wchar_t) c,
					dakuten));
					refresh();
					pos			= 0;
					kpos		= 0;
					choicePos	= 0;
				}
				break;
		}
	}
	clrtoeol();
	refresh();
	endwin();				// End curses mode

	return 0;
}