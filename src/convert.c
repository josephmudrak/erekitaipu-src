#include <ncurses.h>
#include <stdlib.h>
#include <wchar.h>

#include "convert.h"
#include "kana.h"
#include "sounds.h"

int getBase(int jp, int kana, wchar_t key, int basePrev)
{
	int base;

	if (jp)
	{
		if (kana)
		{
			switch (key)	// Katakana
			{
				case '`':
					base	= KATA_RO;
					break;

				case '1':
					base	= KATA_NU;
					break;

				case '2':
					base	= KATA_FU;
					break;

				case '3':
					base	= KATA_A;
					break;
				
				case L'£':
					base	= KATA_A_SMALL;
					break;

				case '4':
					base	= KATA_U;
					break;

				case '$':
					base	= KATA_U_SMALL;
					break;

				case '5':
					base	= KATA_E;
					break;

				case '%':
					base	= KATA_E_SMALL;
					break;

				case '6':
					base	= KATA_O;
					break;

				case '^':
					base	= KATA_O_SMALL;
					break;

				case '7':
					base	= KATA_YA;
					break;

				case '&':
					base	= KATA_YA_SMALL;
					break;

				case '8':
					base	= KATA_YU;
					break;

				case '*':
					base	= KATA_YU_SMALL;
					break;

				case '9':
					base	= KATA_YO;
					break;

				case '(':
					base	= KATA_YO_SMALL;
					break;

				case '0':
					base	= KATA_WA;
					break;

				case ')':
					base	= KATA_WO;
					break;

				case '-':
					base	= KATA_HO;
					break;

				case '_':
					base	= CHOONPU;
					break;

				case '=':
					base	= KATA_HE;
					break;

				case 'q':
					base	= KATA_TA;
					break;

				case 'w':
					base	= KATA_TE;
					break;

				case 'e':
					base	= KATA_I;
					break;

				case 'E':
					base	= KATA_I_SMALL;
					break;

				case 'r':
					base	= KATA_SU;
					break;

				case 't':
					base	= KATA_KA;
					break;

				case 'y':
					base	= KATA_N;
					break;

				case 'u':
					base	= KATA_NA;
					break;

				case 'i':
					base	= KATA_NI;
					break;

				case 'o':
					base	= KATA_RA;
					break;

				case 'p':
					base	= KATA_SE;
					break;

				case '[':
					switch (basePrev)	// Dakuten
					{
						case KATA_FU:
							base	= KATA_BU;
							break;

						case KATA_HO:
							base	= KATA_BO;
							break;

						case KATA_HE:
							base	= KATA_BE;
							break;

						case KATA_TA:
							base	= KATA_DA;
							break;

						case KATA_TE:
							base	= KATA_DE;
							break;

						case KATA_SU:
							base	= KATA_SU;
							break;

						case KATA_KA:
							base	= KATA_GA;
							break;

						case KATA_SE:
							base	= KATA_ZE;
							break;

						case KATA_CHI:
							base	= KATA_JI_CHI;
							break;

						case KATA_TO:
							base	= KATA_DO;
							break;

						case KATA_SHI:
							base	= KATA_JI;
							break;

						case KATA_HA:
							base	= KATA_BA;
							break;

						case KATA_KI:
							base	= KATA_GI;
							break;

						case KATA_KU:
							base	= KATA_GU;
							break;

						case KATA_KE:
							base	= KATA_KE;
							break;

						case KATA_TSU:
							base	= KATA_ZU_TSU;
							break;

						case KATA_SA:
							base	= KATA_ZA;
							break;

						case KATA_SO:
							base	= KATA_ZO;
							break;

						case KATA_HI:
							base	= KATA_BI;
							break;

						case KATA_KO:
							base	= KATA_GO;

						default:
							base	= basePrev;	// Kana does not take dakuten
							break;
					}
					break;

				case ']':	// Handakuten
					switch (basePrev)
					{
						case KATA_FU:
							base	= KATA_PU;
							break;

						case KATA_HO:
							base	= KATA_PO;
							break;

						case KATA_HE:
							base	= KATA_PE;
							break;

						case KATA_HA:
							base	= KATA_PA;
							break;

						case KATA_HI:
							base	= KATA_PI;
							break;

						default:
							base	= basePrev;	// Kana does not take handakuten
							break;
					}
					break;

				case '{':
					base	= KAGIKAKKO_LEFT;
					break;

				case 'a':
					base	= KATA_CHI;
					break;

				case 's':
					base	= KATA_TO;
					break;

				case 'd':
					base	= KATA_SHI;
					break;

				case 'f':
					base	= KATA_HA;
					break;

				case 'g':
					base	= KATA_KI;
					break;

				case 'h':
					base	= KATA_KU;
					break;

				case 'j':
					base	= KATA_MA;
					break;

				case 'k':
					base	= KATA_NO;
					break;

				case 'l':
					base	= KATA_RI;
					break;

				case ';':
					base	= KATA_RE;
					break;
				
				case '\'':
					base	= KATA_KE;
					break;

				case '#':
					base	= KATA_MU;
					break;

				case '~':
					base	= KAGIKAKKO_RIGHT;
					break;

				case 'z':
					base	= KATA_TSU;
					break;

				case 'Z':
					base	= KATA_TSU_SMALL;
					break;

				case 'x':
					base	= KATA_SA;
					break;

				case 'c':
					base	= KATA_SO;
					break;

				case 'v':
					base	= KATA_HI;
					break;

				case 'b':
					base	= KATA_KO;
					break;

				case 'n':
					base	= KATA_MI;
					break;

				case 'm':
					base	= KATA_MO;
					break;

				case ',':
					base	= KATA_NE;
					break;

				case '<':
					base	= TOTEN;
					break;

				case '.':
					base	= KATA_RU;
					break;

				case '>':
					base	= KUTEN;
					break;

				case '/':
					base	= KATA_ME;
					break;

				case '?':
					base	= NAKAGURO;
					break;
			}
		}
		else
		{
			switch (key)	// Hiragana
			{
				case '`':
					base	= HIRA_RO;
					break;

				case '1':
					base	= HIRA_NU;
					break;

				case '2':
					base	= HIRA_FU;
					break;

				case '3':
					base	= HIRA_A;
					break;
				
				case L'£':
					base	= HIRA_A_SMALL;
					break;

				case '4':
					base	= HIRA_U;
					break;

				case '$':
					base	= HIRA_U_SMALL;
					break;

				case '5':
					base	= HIRA_E;
					break;

				case '%':
					base	= HIRA_E_SMALL;
					break;

				case '6':
					base	= HIRA_O;
					break;

				case '^':
					base	= HIRA_O_SMALL;
					break;

				case '7':
					base	= HIRA_YA;
					break;

				case '&':
					base	= HIRA_YA_SMALL;
					break;

				case '8':
					base	= HIRA_YU;
					break;

				case '*':
					base	= HIRA_YU_SMALL;
					break;

				case '9':
					base	= HIRA_YO;
					break;

				case '(':
					base	= HIRA_YO_SMALL;
					break;

				case '0':
					base	= HIRA_WA;
					break;

				case ')':
					base	= HIRA_WO;
					break;

				case '-':
					base	= HIRA_HO;
					break;

				case '_':
					base	= CHOONPU;
					break;

				case '=':
					base	= HIRA_HE;
					break;

				case 'q':
					base	= HIRA_TA;
					break;

				case 'w':
					base	= HIRA_TE;
					break;

				case 'e':
					base	= HIRA_I;
					break;

				case 'E':
					base	= HIRA_I_SMALL;
					break;

				case 'r':
					base	= HIRA_SU;
					break;

				case 't':
					base	= HIRA_KA;
					break;

				case 'y':
					base	= HIRA_N;
					break;

				case 'u':
					base	= HIRA_NA;
					break;

				case 'i':
					base	= HIRA_NI;
					break;

				case 'o':
					base	= HIRA_RA;
					break;

				case 'p':
					base	= HIRA_SE;
					break;

				case '[':
					switch (basePrev)	// Dakuten
					{
						case HIRA_FU:
							base	= HIRA_BU;
							break;

						case HIRA_HO:
							base	= HIRA_BO;
							break;

						case HIRA_HE:
							base	= HIRA_BE;
							break;

						case HIRA_TA:
							base	= HIRA_DA;
							break;

						case HIRA_TE:
							base	= HIRA_DE;
							break;

						case HIRA_SU:
							base	= HIRA_SU;
							break;

						case HIRA_KA:
							base	= HIRA_GA;
							break;

						case HIRA_SE:
							base	= HIRA_ZE;
							break;

						case HIRA_CHI:
							base	= HIRA_JI_CHI;
							break;

						case HIRA_TO:
							base	= HIRA_DO;
							break;

						case HIRA_SHI:
							base	= HIRA_JI;
							break;

						case HIRA_HA:
							base	= HIRA_BA;
							break;

						case HIRA_KI:
							base	= HIRA_GI;
							break;

						case HIRA_KU:
							base	= HIRA_GU;
							break;

						case HIRA_KE:
							base	= HIRA_KE;
							break;

						case HIRA_TSU:
							base	= HIRA_ZU_TSU;
							break;

						case HIRA_SA:
							base	= HIRA_ZA;
							break;

						case HIRA_SO:
							base	= HIRA_ZO;
							break;

						case HIRA_HI:
							base	= HIRA_BI;
							break;

						case HIRA_KO:
							base	= HIRA_GO;

						default:
							base	= basePrev;	// Kana does not take dakuten
							break;
					}
					break;

				case ']':	// Handakuten
					switch (basePrev)
					{
						case HIRA_FU:
							base	= HIRA_PU;
							break;

						case HIRA_HO:
							base	= HIRA_PO;
							break;

						case HIRA_HE:
							base	= HIRA_PE;
							break;

						case HIRA_HA:
							base	= HIRA_PA;
							break;

						case HIRA_HI:
							base	= HIRA_PI;
							break;

						default:
							base	= basePrev;	// Kana does not take handakuten
							break;
					}
					break;

				case '{':
					base	= KAGIKAKKO_LEFT;
					break;

				case 'a':
					base	= HIRA_CHI;
					break;

				case 's':
					base	= HIRA_TO;
					break;

				case 'd':
					base	= HIRA_SHI;
					break;

				case 'f':
					base	= HIRA_HA;
					break;

				case 'g':
					base	= HIRA_KI;
					break;

				case 'h':
					base	= HIRA_KU;
					break;

				case 'j':
					base	= HIRA_MA;
					break;

				case 'k':
					base	= HIRA_NO;
					break;

				case 'l':
					base	= HIRA_RI;
					break;

				case ';':
					base	= HIRA_RE;
					break;
				
				case '\'':
					base	= HIRA_KE;
					break;

				case '#':
					base	= HIRA_MU;
					break;

				case '~':
					base	= KAGIKAKKO_RIGHT;
					break;

				case 'z':
					base	= HIRA_TSU;
					break;

				case 'Z':
					base	= HIRA_TSU_SMALL;
					break;

				case 'x':
					base	= HIRA_SA;
					break;

				case 'c':
					base	= HIRA_SO;
					break;

				case 'v':
					base	= HIRA_HI;
					break;

				case 'b':
					base	= HIRA_KO;
					break;

				case 'n':
					base	= HIRA_MI;
					break;

				case 'm':
					base	= HIRA_MO;
					break;

				case ',':
					base	= HIRA_NE;
					break;

				case '<':
					base	= TOTEN;
					break;

				case '.':
					base	= HIRA_RU;
					break;

				case '>':
					base	= KUTEN;
					break;

				case '/':
					base	= HIRA_ME;
					break;

				case '?':
					base	= NAKAGURO;
					break;
			}
		}
	}
	else
	{
		switch (key)
		{
			case '`':
				base	= BACKSLASH;
				break;
			
			case L'¬':
				base	= UNDERSCORE;
				break;

			case '1':
				base	= NUMBER_ONE;
				break;

			case '!':
				base	= EXCLAM;
				break;

			case '2':
				base	= NUMBER_TWO;
				break;

			case '"':
				base	= QUOTE_DBL;
				break;

			case '3':
				base	= NUMBER_THREE;
				break;

			case L'£':
				base	= NUMBER_SIGN;
				break;

			case '4':
				base	= NUMBER_FOUR;
				break;

			case '$':
				base	= DOLLAR;
				break;

			case '5':
				base	= NUMBER_FIVE;
				break;

			case '%':
				base	= PERCENT;
				break;

			case '6':
				base	= NUMBER_SIX;
				break;

			case '^':
				base	= AMPERSAND;
				break;

			case '7':
				base	= NUMBER_SEVEN;
				break;

			case '&':
				base	= APOSTROPHE;
				break;

			case '8':
				base	= NUMBER_EIGHT;
				break;

			case '*':
				base	= PAREN_LEFT;
				break;

			case '9':
				base	= NUMBER_NINE;
				break;

			case '(':
				base	= PAREN_RIGHT;
				break;

			case '0':
				base	= NUMBER_ZERO;
				break;

			case '-':
				base	= MINUS;
				break;

			case '_':
				base	= EQUAL;
				break;

			case '=':
				base	= ASCII_CIRCUM;
				break;

			case '+':
				base	= ASCII_TILDE;
				break;

			case 'q':
				base	= LETTER_Q_SMALL;
				break;

			case 'Q':
				base	= LETTER_Q;
				break;

			case 'w':
				base	= LETTER_W_SMALL;
				break;

			case 'W':
				base	= LETTER_W;
				break;

			case 'e':
				base	= LETTER_E_SMALL;
				break;

			case 'E':
				base	= LETTER_E;
				break;

			case 'r':
				base	= LETTER_R_SMALL;
				break;

			case 'R':
				base	= LETTER_R;
				break;

			case 't':
				base	= LETTER_T_SMALL;
				break;

			case 'T':
				base	= LETTER_T;
				break;

			case 'y':
				base	= LETTER_Y_SMALL;
				break;

			case 'Y':
				base	= LETTER_Y;
				break;

			case 'u':
				base	= LETTER_U_SMALL;
				break;
			
			case 'U':
				base	= LETTER_U;
				break;

			case 'i':
				base	= LETTER_I_SMALL;
				break;

			case 'I':
				base	= LETTER_I;
				break;

			case 'o':
				base	= LETTER_O_SMALL;
				break;

			case 'O':
				base	= LETTER_O;
				break;
			
			case 'p':
				base	= LETTER_P_SMALL;
				break;

			case 'P':
				base	= LETTER_P;
				break;

			case '[':
				base	= AT_SIGN;
				break;

			case '{':
				base	= GRAVE;
				break;

			case ']':
				base	= BRACKET_LEFT;
				break;

			case '}':
				base	= BRACE_LEFT;
				break;

			case 'a':
				base	= LETTER_A_SMALL;
				break;

			case 'A':
				base	= LETTER_A;
				break;

			case 's':
				base	= LETTER_S_SMALL;
				break;

			case 'S':
				base	= LETTER_S;
				break;

			case 'd':
				base	= LETTER_D_SMALL;
				break;

			case 'D':
				base	= LETTER_D;
				break;

			case 'f':
				base	= LETTER_F_SMALL;
				break;

			case 'F':
				base	= LETTER_F;
				break;

			case 'g':
				base	= LETTER_G_SMALL;
				break;

			case 'G':
				base	= LETTER_G;
				break;

			case 'h':
				base	= LETTER_H_SMALL;
				break;

			case 'H':
				base	= LETTER_H;
				break;

			case 'j':
				base	= LETTER_J_SMALL;
				break;

			case 'J':
				base	= LETTER_J;
				break;

			case 'k':
				base	= LETTER_K_SMALL;
				break;

			case 'K':
				base	= LETTER_K;
				break;

			case 'l':
				base	= LETTER_L_SMALL;
				break;

			case 'L':
				base	= LETTER_L;
				break;

			case ';':
				base	= SEMICOLON;
				break;

			case ':':
				base	= PLUS;
				break;

			case '\'':
				base	= COLON;
				break;

			case '@':
				base	= ASTERISK;
				break;

			case '#':
				base	= BRACKET_RIGHT;
				break;

			case '~':
				base	= BRACE_RIGHT;
				break;

			case '\\':
				base	= YEN;
				break;

			case '|':
				base	= BAR;
				break;

			case 'z':
				base	= LETTER_Z_SMALL;
				break;

			case 'Z':
				base	= LETTER_Z;
				break;

			case 'x':
				base	= LETTER_X_SMALL;
				break;

			case 'X':
				base	= LETTER_X;
				break;

			case 'c':
				base	= LETTER_C_SMALL;
				break;

			case 'C':
				base	= LETTER_C;
				break;

			case 'v':
				base	= LETTER_V_SMALL;
				break;

			case 'V':
				base	= LETTER_V;
				break;

			case 'b':
				base	= LETTER_B_SMALL;
				break;

			case 'B':
				base	= LETTER_B;
				break;

			case 'n':
				base	= LETTER_N_SMALL;
				break;

			case 'N':
				base	= LETTER_N;
				break;

			case 'm':
				base	= LETTER_M_SMALL;
				break;

			case 'M':
				base	= LETTER_M;
				break;

			case ',':
				base	= COMMA;
				break;

			case '<':
				base	= LESS;
				break;

			case '.':
				base	= FULL_STOP;
				break;

			case '>':
				base	= GREATER;
				break;

			case '/':
				base	= SLASH;
				break;

			case '?':
				base	= QUESTION;
				break;

			default:
				base	= 0;
				break;
		}
	}

	return base;
}

int getDakuten(int code)
{
	int codeNew;

	switch (code)
	{
		case HIRA_KA:
			codeNew	= HIRA_GA;
			break;

		case HIRA_KI:
			codeNew	= HIRA_GI;
			break;

		case HIRA_KU:
			codeNew	= HIRA_GU;
			break;

		case HIRA_KE:
			codeNew	= HIRA_GE;
			break;

		case HIRA_KO:
			codeNew	= HIRA_GO;
			break;

		case HIRA_SA:
			codeNew	= HIRA_ZA;
			break;

		case HIRA_SHI:
			codeNew	= HIRA_JI;
			break;

		case HIRA_SU:
			codeNew	= HIRA_ZU;
			break;

		case HIRA_SE:
			codeNew	= HIRA_ZE;
			break;

		case HIRA_SO:
			codeNew	= HIRA_ZO;
			break;

		case HIRA_TA:
			codeNew	= HIRA_DA;
			break;

		case HIRA_CHI:
			codeNew	= HIRA_JI_CHI;
			break;
		
		case HIRA_TSU:
			codeNew	= HIRA_ZU_TSU;
			break;

		case HIRA_TE:
			codeNew	= HIRA_DE;
			break;

		case HIRA_TO:
			codeNew	= HIRA_DO;
			break;

		case HIRA_HA:
			codeNew	= HIRA_BA;
			break;

		case HIRA_HI:
			codeNew	= HIRA_BI;
			break;

		case HIRA_FU:
			codeNew	= HIRA_BU;
			break;

		case HIRA_HE:
			codeNew	= HIRA_BE;
			break;

		case HIRA_HO:
			codeNew	= HIRA_BO;
			break;

		case KATA_KA:
			codeNew	= KATA_GA;
			break;

		case KATA_KI:
			codeNew	= KATA_GI;
			break;

		case KATA_KU:
			codeNew	= KATA_GU;
			break;

		case KATA_KE:
			codeNew	= KATA_GE;
			break;

		case KATA_KO:
			codeNew	= KATA_GO;
			break;

		case KATA_SA:
			codeNew	= KATA_ZA;
			break;

		case KATA_SHI:
			codeNew	= KATA_JI;
			break;

		case KATA_SU:
			codeNew	= KATA_ZU;
			break;

		case KATA_SE:
			codeNew	= KATA_ZE;
			break;

		case KATA_SO:
			codeNew	= KATA_ZO;
			break;

		case KATA_TA:
			codeNew	= KATA_DA;
			break;

		case KATA_CHI:
			codeNew	= KATA_JI_CHI;
			break;
		
		case KATA_TSU:
			codeNew	= KATA_ZU_TSU;
			break;

		case KATA_TE:
			codeNew	= KATA_DE;
			break;

		case KATA_TO:
			codeNew	= KATA_DO;
			break;

		case KATA_HA:
			codeNew	= KATA_BA;
			break;

		case KATA_HI:
			codeNew	= KATA_BI;
			break;

		case KATA_FU:
			codeNew	= KATA_BU;
			break;

		case KATA_HE:
			codeNew	= KATA_BE;
			break;

		case KATA_HO:
			codeNew	= KATA_BO;
			break;

		case GEN_KA:
			codeNew	= GEN_GA;
			break;

		case GEN_KI:
			codeNew	= GEN_GI;
			break;

		case GEN_KU:
			codeNew	= GEN_GU;
			break;

		case GEN_KE:
			codeNew	= GEN_GE;
			break;

		case GEN_KO:
			codeNew	= GEN_GO;
			break;

		case GEN_SA:
			codeNew	= GEN_ZA;
			break;

		case GEN_SHI:
			codeNew	= GEN_JI;
			break;

		case GEN_SU:
			codeNew	= GEN_ZU;
			break;

		case GEN_SE:
			codeNew	= GEN_ZE;
			break;

		case GEN_SO:
			codeNew	= GEN_ZO;
			break;

		case GEN_TA:
			codeNew	= GEN_DA;
			break;

		case GEN_CHI:
			codeNew	= GEN_JI_CHI;
			break;
		
		case GEN_TSU:
			codeNew	= GEN_ZU_TSU;
			break;

		case GEN_TE:
			codeNew	= GEN_DE;
			break;

		case GEN_TO:
			codeNew	= GEN_DO;
			break;

		case GEN_HA:
			codeNew	= GEN_BA;
			break;

		case GEN_HI:
			codeNew	= GEN_BI;
			break;

		case GEN_FU:
			codeNew	= GEN_BU;
			break;

		case GEN_HE:
			codeNew	= GEN_BE;
			break;

		case GEN_HO:
			codeNew	= GEN_BO;
			break;
	}

	return codeNew;
}

int getHandakuten(int code)
{
	int codeNew;

	switch (code)
	{
		case HIRA_HA:
			codeNew	= HIRA_PA;
			break;

		case HIRA_HI:
			codeNew	= HIRA_PI;
			break;

		case HIRA_FU:
			codeNew	= HIRA_PU;
			break;

		case HIRA_HE:
			codeNew	= HIRA_PE;
			break;

		case HIRA_HO:
			codeNew	= HIRA_PO;
			break;

		case KATA_HA:
			codeNew	= KATA_PA;
			break;

		case KATA_HI:
			codeNew	= KATA_PI;
			break;

		case KATA_FU:
			codeNew	= KATA_PU;
			break;

		case KATA_HE:
			codeNew	= KATA_PE;
			break;

		case KATA_HO:
			codeNew	= KATA_PO;
			break;

		case GEN_HA:
			codeNew	= GEN_PA;
			break;

		case GEN_HI:
			codeNew	= GEN_PI;
			break;

		case GEN_FU:
			codeNew	= GEN_PU;
			break;

		case GEN_HE:
			codeNew	= GEN_PE;
			break;

		case GEN_HO:
			codeNew	= GEN_PO;
			break;
	}

	return codeNew;
}

void printChar(int code)
{
	switch (code)
	{
		case HIRA_A_SMALL:
			system("echo \"ぁ\" | paps | lpr");
			break;
		
		case HIRA_A:
			system("echo \"あ\" | paps | lpr");
			break;

		case HIRA_I_SMALL:
			system("echo \"ぃ\" | paps | lpr");
			break;

		case HIRA_I:
			system("echo \"い\" | paps | lpr");
			break;

		case HIRA_U_SMALL:
			system("echo \"ぅ\" | paps | lpr");
			break;

		case HIRA_U:
			system("echo \"う\" | paps | lpr");
			break;

		case HIRA_E_SMALL:
			system("echo \"ぇ\" | paps | lpr");
			break;

		case HIRA_E:
			system("echo \"え\" | paps | lpr");
			break;

		case HIRA_O_SMALL:
			system("echo \"ぉ\" | paps | lpr");
			break;

		case HIRA_O:
			system("echo \"お\" | paps | lpr");
			break;

		case HIRA_KA:
			system("echo \"か\" | paps | lpr");
			break;

		case HIRA_GA:
			system("echo \"が\" | paps | lpr");
			break;

		case HIRA_KI:
			system("echo \"き\" | paps | lpr");
			break;

		case HIRA_GI:
			system("echo \"ぎ\" | paps | lpr");
			break;

		case HIRA_KU:
			system("echo \"く\" | paps | lpr");
			break;

		case HIRA_GU:
			system("echo \"ぐ\" | paps | lpr");
			break;

		case HIRA_KE:
			system("echo \"け\" | paps | lpr");
			break;

		case HIRA_GE:
			system("echo \"げ\" | paps | lpr");
			break;

		case HIRA_KO:
			system("echo \"こ\" | paps | lpr");
			break;

		case HIRA_GO:
			system("echo \"ご\" | paps | lpr");
			break;

		case HIRA_SA:
			system("echo \"さ\" | paps | lpr");
			break;

		case HIRA_ZA:
			system("echo \"ざ\" | paps | lpr");
			break;

		case HIRA_SHI:
			system("echo \"し\" | paps | lpr");
			break;

		case HIRA_JI:
			system("echo \"じ\" | paps | lpr");
			break;

		case HIRA_SU:
			system("echo \"す\" | paps | lpr");
			break;

		case HIRA_ZU:
			system("echo \"ず\" | paps | lpr");
			break;

		case HIRA_SE:
			system("echo \"せ\" | paps | lpr");
			break;

		case HIRA_ZE:
			system("echo \"ぜ\" | paps | lpr");
			break;

		case HIRA_SO:
			system("echo \"そ\" | paps | lpr");
			break;

		case HIRA_ZO:
			system("echo \"ぞ\" | paps | lpr");
			break;

		case HIRA_TA:
			system("echo \"た\" | paps | lpr");
			break;

		case HIRA_DA:
			system("echo \"だ\" | paps | lpr");
			break;

		case HIRA_CHI:
			system("echo \"ち\" | paps | lpr");
			break;

		case HIRA_JI_CHI:
			system("echo \"ぢ\" | paps | lpr");
			break;

		case HIRA_TSU_SMALL:
			system("echo \"っ\" | paps | lpr");
			break;

		case HIRA_TSU:
			system("echo \"つ\" | paps | lpr");
			break;

		case HIRA_ZU_TSU:
			system("echo \"づ\" | paps | lpr");
			break;

		case HIRA_TE:
			system("echo \"て\" | paps | lpr");
			break;

		case HIRA_DE:
			system("echo \"で\" | paps | lpr");
			break;

		case HIRA_TO:
			system("echo \"と\" | paps | lpr");
			break;

		case HIRA_DO:
			system("echo \"ど\" | paps | lpr");
			break;

		case HIRA_NA:
			system("echo \"な\" | paps | lpr");
			break;

		case HIRA_NI:
			system("echo \"に\" | paps | lpr");
			break;

		case HIRA_NU:
			system("echo \"ぬ\" | paps | lpr");
			break;

		case HIRA_NE:
			system("echo \"ね\" | paps | lpr");
			break;

		case HIRA_NO:
			system("echo \"の\" | paps | lpr");
			break;

		case HIRA_HA:
			system("echo \"は\" | paps | lpr");
			break;

		case HIRA_BA:
			system("echo \"ば\" | paps | lpr");
			break;

		case HIRA_PA:
			system("echo \"ぱ\" | paps | lpr");
			break;

		case HIRA_HI:
			system("echo \"ひ\" | paps | lpr");
			break;

		case HIRA_BI:
			system("echo \"び\" | paps | lpr");
			break;

		case HIRA_PI:
			system("echo \"ぴ\" | paps | lpr");
			break;

		case HIRA_FU:
			system("echo \"ふ\" | paps | lpr");
			break;

		case HIRA_BU:
			system("echo \"ぶ\" | paps | lpr");
			break;

		case HIRA_PU:
			system("echo \"ぷ\" | paps | lpr");
			break;

		case HIRA_HE:
			system("echo \"へ\" | paps | lpr");
			break;

		case HIRA_BE:
			system("echo \"べ\" | paps | lpr");
			break;

		case HIRA_PE:
			system("echo \"ぺ\" | paps | lpr");
			break;

		case HIRA_HO:
			system("echo \"ほ\" | paps | lpr");
			break;

		case HIRA_BO:
			system("echo \"ぼ\" | paps | lpr");
			break;

		case HIRA_PO:
			system("echo \"ぽ\" | paps | lpr");
			break;

		case HIRA_MA:
			system("echo \"ま\" | paps | lpr");
			break;

		case HIRA_MI:
			system("echo \"み\" | paps | lpr");
			break;

		case HIRA_MU:
			system("echo \"む\" | paps | lpr");
			break;

		case HIRA_ME:
			system("echo \"め\" | paps | lpr");
			break;

		case HIRA_MO:
			system("echo \"も\" | paps | lpr");
			break;
		
		case HIRA_YA_SMALL:
			system("echo \"ゃ\" | paps | lpr");
			break;

		case HIRA_YA:
			system("echo \"や\" | paps | lpr");
			break;

		case HIRA_YU_SMALL:
			system("echo \"ゅ\" | paps | lpr");
			break;

		case HIRA_YU:
			system("echo \"ゆ\" | paps | lpr");
			break;

		case HIRA_YO_SMALL:
			system("echo \"ょ\" | paps | lpr");
			break;

		case HIRA_YO:
			system("echo \"よ\" | paps | lpr");
			break;

		case HIRA_RA:
			system("echo \"ら\" | paps | lpr");
			break;

		case HIRA_RI:
			system("echo \"り\" | paps | lpr");
			break;

		case HIRA_RU:
			system("echo \"る\" | paps | lpr");
			break;

		case HIRA_RE:
			system("echo \"れ\" | paps | lpr");
			break;

		case HIRA_RO:
			system("echo \"ろ\" | paps | lpr");
			break;

		case HIRA_WA:
			system("echo \"わ\" | paps | lpr");
			break;

		case HIRA_WO:
			system("echo \"を\" | paps | lpr");
			break;

		case HIRA_N:
			system("echo \"ん\" | paps | lpr");
			break;

		case KATA_A_SMALL:
			system("echo \"ァ\" | paps | lpr");
			break;
		
		case KATA_A:
			system("echo \"ア\" | paps | lpr");
			break;

		case KATA_I_SMALL:
			system("echo \"ィ\" | paps | lpr");
			break;

		case KATA_I:
			system("echo \"イ\" | paps | lpr");
			break;

		case KATA_U_SMALL:
			system("echo \"ゥ\" | paps | lpr");
			break;

		case KATA_U:
			system("echo \"ウ\" | paps | lpr");
			break;

		case KATA_E_SMALL:
			system("echo \"ェ\" | paps | lpr");
			break;

		case KATA_E:
			system("echo \"エ\" | paps | lpr");
			break;

		case KATA_O_SMALL:
			system("echo \"ォ\" | paps | lpr");
			break;

		case KATA_O:
			system("echo \"オ\" | paps | lpr");
			break;

		case KATA_KA:
			system("echo \"カ\" | paps | lpr");
			break;

		case KATA_GA:
			system("echo \"ガ\" | paps | lpr");
			break;

		case KATA_KI:
			system("echo \"キ\" | paps | lpr");
			break;

		case KATA_GI:
			system("echo \"ギ\" | paps | lpr");
			break;

		case KATA_KU:
			system("echo \"ク\" | paps | lpr");
			break;

		case KATA_GU:
			system("echo \"グ\" | paps | lpr");
			break;

		case KATA_KE:
			system("echo \"ケ\" | paps | lpr");
			break;

		case KATA_GE:
			system("echo \"ゲ\" | paps | lpr");
			break;

		case KATA_KO:
			system("echo \"コ\" | paps | lpr");
			break;

		case KATA_GO:
			system("echo \"ゴ\" | paps | lpr");
			break;

		case KATA_SA:
			system("echo \"サ\" | paps | lpr");
			break;

		case KATA_ZA:
			system("echo \"ザ\" | paps | lpr");
			break;

		case KATA_SHI:
			system("echo \"シ\" | paps | lpr");
			break;

		case KATA_JI:
			system("echo \"ジ\" | paps | lpr");
			break;

		case KATA_SU:
			system("echo \"ス\" | paps | lpr");
			break;

		case KATA_ZU:
			system("echo \"ズ\" | paps | lpr");
			break;

		case KATA_SE:
			system("echo \"セ\" | paps | lpr");
			break;

		case KATA_ZE:
			system("echo \"ゼ\" | paps | lpr");
			break;

		case KATA_SO:
			system("echo \"ソ\" | paps | lpr");
			break;

		case KATA_ZO:
			system("echo \"ゾ\" | paps | lpr");
			break;

		case KATA_TA:
			system("echo \"タ\" | paps | lpr");
			break;

		case KATA_DA:
			system("echo \"ダ\" | paps | lpr");
			break;

		case KATA_CHI:
			system("echo \"チ\" | paps | lpr");
			break;

		case KATA_JI_CHI:
			system("echo \"ヂ\" | paps | lpr");
			break;

		case KATA_TSU_SMALL:
			system("echo \"ッ\" | paps | lpr");
			break;

		case KATA_TSU:
			system("echo \"ツ\" | paps | lpr");
			break;

		case KATA_ZU_TSU:
			system("echo \"ヅ\" | paps | lpr");
			break;

		case KATA_TE:
			system("echo \"テ\" | paps | lpr");
			break;

		case KATA_DE:
			system("echo \"デ\" | paps | lpr");
			break;

		case KATA_TO:
			system("echo \"ト\" | paps | lpr");
			break;

		case KATA_DO:
			system("echo \"ド\" | paps | lpr");
			break;

		case KATA_NA:
			system("echo \"ナ\" | paps | lpr");
			break;

		case KATA_NI:
			system("echo \"ニ\" | paps | lpr");
			break;

		case KATA_NU:
			system("echo \"ヌ\" | paps | lpr");
			break;

		case KATA_NE:
			system("echo \"ネ\" | paps | lpr");
			break;

		case KATA_NO:
			system("echo \"ノ\" | paps | lpr");
			break;

		case KATA_HA:
			system("echo \"ハ\" | paps | lpr");
			break;

		case KATA_BA:
			system("echo \"バ\" | paps | lpr");
			break;

		case KATA_PA:
			system("echo \"パ\" | paps | lpr");
			break;

		case KATA_HI:
			system("echo \"ヒ\" | paps | lpr");
			break;

		case KATA_BI:
			system("echo \"ビ\" | paps | lpr");
			break;

		case KATA_PI:
			system("echo \"ピ\" | paps | lpr");
			break;

		case KATA_FU:
			system("echo \"フ\" | paps | lpr");
			break;

		case KATA_BU:
			system("echo \"ブ\" | paps | lpr");
			break;

		case KATA_PU:
			system("echo \"プ\" | paps | lpr");
			break;

		case KATA_HE:
			system("echo \"ヘ\" | paps | lpr");
			break;

		case KATA_BE:
			system("echo \"ベ\" | paps | lpr");
			break;

		case KATA_PE:
			system("echo \"ペ\" | paps | lpr");
			break;

		case KATA_HO:
			system("echo \"ホ\" | paps | lpr");
			break;

		case KATA_BO:
			system("echo \"ボ\" | paps | lpr");
			break;

		case KATA_PO:
			system("echo \"ポ\" | paps | lpr");
			break;

		case KATA_MA:
			system("echo \"マ\" | paps | lpr");
			break;

		case KATA_MI:
			system("echo \"ミ\" | paps | lpr");
			break;

		case KATA_MU:
			system("echo \"ム\" | paps | lpr");
			break;

		case KATA_ME:
			system("echo \"メ\" | paps | lpr");
			break;

		case KATA_MO:
			system("echo \"モ\" | paps | lpr");
			break;
		
		case KATA_YA_SMALL:
			system("echo \"ャ\" | paps | lpr");
			break;

		case KATA_YA:
			system("echo \"ヤ\" | paps | lpr");
			break;

		case KATA_YU_SMALL:
			system("echo \"ュ\" | paps | lpr");
			break;

		case KATA_YU:
			system("echo \"ユ\" | paps | lpr");
			break;

		case KATA_YO_SMALL:
			system("echo \"ョ\" | paps | lpr");
			break;

		case KATA_YO:
			system("echo \"ヨ\" | paps | lpr");
			break;

		case KATA_RA:
			system("echo \"ラ\" | paps | lpr");
			break;

		case KATA_RI:
			system("echo \"リ\" | paps | lpr");
			break;

		case KATA_RU:
			system("echo \"ル\" | paps | lpr");
			break;

		case KATA_RE:
			system("echo \"レ\" | paps | lpr");
			break;

		case KATA_RO:
			system("echo \"ロ\" | paps | lpr");
			break;

		case KATA_WA:
			system("echo \"ワ\" | paps | lpr");
			break;

		case KATA_WO:
			system("echo \"ヲ\" | paps | lpr");
			break;

		case KATA_N:
			system("echo \"ン\" | paps | lpr");
			break;

		case TOTEN:
			system("echo \"、\" | paps | lpr");
			break;

		case KUTEN:
			system("echo \"。\" | paps | lpr");
			break;

		case KAGIKAKKO_LEFT:
			system("echo \"「\" | paps | lpr");
			break;

		case KAGIKAKKO_RIGHT:
			system("echo \"」\" | paps | lpr");
			break;

		case NAKAGURO:
			system("echo \"・\" | paps | lpr");
			break;

		case CHOONPU:
			system("echo \"ー\" | paps | lpr");
			break;
	}
}

void printDirect(int key)
{
	switch (key)
	{
		case EXCLAM:
			system("echo \"!\" | paps | lpr");
			break;

		case QUOTE_DBL:
			system("echo \"$1\" | paps | lpr");
			break;

		case NUMBER_SIGN:
			system("echo \"#\" | paps | lpr");
			break;

		case DOLLAR:
			system("echo \"$\" | paps | lpr");
			break;

		case PERCENT:
			system("echo \"$1\" | paps | lpr");
			break;

		case AMPERSAND:
			system("echo \"&\" | paps | lpr");
			break;

		case APOSTROPHE:
			system("echo \"'\" | paps | lpr");
			break;

		case PAREN_LEFT:
			system("echo \"(\" | paps | lpr");
			break;

		case PAREN_RIGHT:
			system("echo \")\" | paps | lpr");
			break;

		case ASTERISK:
			system("echo \"*\" | paps | lpr");
			break;

		case PLUS:
			system("echo \"+\" | paps | lpr");
			break;

		case COMMA:
			system("echo \",\" | paps | lpr");
			break;

		case MINUS:
			system("echo \"-\" | paps | lpr");
			break;

		case FULL_STOP:
			system("echo \".\" | paps | lpr");
			break;

		case SLASH:
			system("echo \"/\" | paps | lpr");
			break;

		case NUMBER_ZERO:
			system("echo \"0\" | paps | lpr");
			break;

		case NUMBER_ONE:
			system("echo \"1\" | paps | lpr");
			break;

		case NUMBER_TWO:
			system("echo \"2\" | paps | lpr");
			break;

		case NUMBER_THREE:
			system("echo \"3\" | paps | lpr");
			break;

		case NUMBER_FOUR:
			system("echo \"4\" | paps | lpr");
			break;

		case NUMBER_FIVE:
			system("echo \"5\" | paps | lpr");
			break;

		case NUMBER_SIX:
			system("echo \"6\" | paps | lpr");
			break;

		case NUMBER_SEVEN:
			system("echo \"7\" | paps | lpr");
			break;

		case NUMBER_EIGHT:
			system("echo \"8\" | paps | lpr");
			break;

		case NUMBER_NINE:
			system("echo \"9\" | paps | lpr");
			break;

		case COLON:
			system("echo \":\" | paps | lpr");
			break;

		case SEMICOLON:
			system("echo \";\" | paps | lpr");
			break;

		case LESS:
			system("echo \"<\" | paps | lpr");
			break;

		case EQUAL:
			system("echo \"=\" | paps | lpr");
			break;

		case GREATER:
			system("echo \">\" | paps | lpr");
			break;

		case QUESTION:
			system("echo \"?\" | paps | lpr");
			break;

		case AT_SIGN:
			system("echo \"@\" | paps | lpr");
			break;

		case LETTER_A:
			system("echo \"A\" | paps | lpr");
			break;

		case LETTER_B:
			system("echo \"B\" | paps | lpr");
			break;

		case LETTER_C:
			system("echo \"C\" | paps | lpr");
			break;

		case LETTER_D:
			system("echo \"D\" | paps | lpr");
			break;

		case LETTER_E:
			system("echo \"E\" | paps | lpr");
			break;
		
		case LETTER_F:
			system("echo \"F\" | paps | lpr");
			break;

		case LETTER_G:
			system("echo \"G\" | paps | lpr");
			break;

		case LETTER_H:
			system("echo \"H\" | paps | lpr");
			break;
		
		case LETTER_I:
			system("echo \"I\" | paps | lpr");
			break;

		case LETTER_J:
			system("echo \"J\" | paps | lpr");
			break;

		case LETTER_K:
			system("echo \"K\" | paps | lpr");
			break;

		case LETTER_L:
			system("echo \"L\" | paps | lpr");
			break;

		case LETTER_M:
			system("echo \"M\" | paps | lpr");
			break;

		case LETTER_N:
			system("echo \"N\" | paps | lpr");
			break;

		case LETTER_O:
			system("echo \"O\" | paps | lpr");
			break;

		case LETTER_P:
			system("echo \"P\" | paps | lpr");
			break;

		case LETTER_Q:
			system("echo \"Q\" | paps | lpr");
			break;

		case LETTER_R:
			system("echo \"R\" | paps | lpr");
			break;

		case LETTER_S:
			system("echo \"S\" | paps | lpr");
			break;

		case LETTER_T:
			system("echo \"T\" | paps | lpr");
			break;

		case LETTER_U:
			system("echo \"U\" | paps | lpr");
			break;

		case LETTER_V:
			system("echo \"V\" | paps | lpr");
			break;

		case LETTER_W:
			system("echo \"W\" | paps | lpr");
			break;

		case LETTER_X:
			system("echo \"X\" | paps | lpr");
			break;

		case LETTER_Y:
			system("echo \"Y\" | paps | lpr");
			break;

		case LETTER_Z:
			system("echo \"Z\" | paps | lpr");
			break;

		case BRACKET_LEFT:
			system("echo \"[\" | paps | lpr");
			break;

		case BACKSLASH:
			system("echo \"$1\" | paps | lpr");
			break;

		case BRACKET_RIGHT:
			system("echo \"]\" | paps | lpr");
			break;

		case ASCII_CIRCUM:
			system("echo \"^\" | paps | lpr");
			break;

		case UNDERSCORE:
			system("echo \"_\" | paps | lpr");
			break;

		case GRAVE:
			system("echo \"`\" | paps | lpr");
			break;

		case LETTER_A_SMALL:
			system("echo \"a\" | paps | lpr");
			break;

		case LETTER_B_SMALL:
			system("echo \"b\" | paps | lpr");
			break;

		case LETTER_C_SMALL:
			system("echo \"c\" | paps | lpr");
			break;

		case LETTER_D_SMALL:
			system("echo \"d\" | paps | lpr");
			break;

		case LETTER_E_SMALL:
			system("echo \"e\" | paps | lpr");
			break;

		case LETTER_F_SMALL:
			system("echo \"f\" | paps | lpr");
			break;

		case LETTER_G_SMALL:
			system("echo \"g\" | paps | lpr");
			break;

		case LETTER_H_SMALL:
			system("echo \"h\" | paps | lpr");
			break;

		case LETTER_I_SMALL:
			system("echo \"i\" | paps | lpr");
			break;

		case LETTER_J_SMALL:
			system("echo \"j\" | paps | lpr");
			break;

		case LETTER_K_SMALL:
			system("echo \"k\" | paps | lpr");
			break;

		case LETTER_L_SMALL:
			system("echo \"l\" | paps | lpr");
			break;

		case LETTER_M_SMALL:
			system("echo \"m\" | paps | lpr");
			break;

		case LETTER_N_SMALL:
			system("echo \"n\" | paps | lpr");
			break;

		case LETTER_O_SMALL:
			system("echo \"o\" | paps | lpr");
			break;

		case LETTER_P_SMALL:
			system("echo \"p\" | paps | lpr");
			break;

		case LETTER_Q_SMALL:
			system("echo \"q\" | paps | lpr");
			break;

		case LETTER_R_SMALL:
			system("echo \"r\" | paps | lpr");
			break;

		case LETTER_S_SMALL:
			system("echo \"s\" | paps | lpr");
			break;

		case LETTER_T_SMALL:
			system("echo \"t\" | paps | lpr");
			break;

		case LETTER_U_SMALL:
			system("echo \"u\" | paps | lpr");
			break;

		case LETTER_V_SMALL:
			system("echo \"v\" | paps | lpr");
			break;

		case LETTER_W_SMALL:
			system("echo \"w\" | paps | lpr");
			break;

		case LETTER_X_SMALL:
			system("echo \"x\" | paps | lpr");
			break;

		case LETTER_Y_SMALL:
			system("echo \"y\" | paps | lpr");
			break;

		case LETTER_Z_SMALL:
			system("echo \"z\" | paps | lpr");
			break;

		case BRACE_LEFT:
			system("echo \"{\" | paps | lpr");
			break;

		case BAR:
			system("echo \"|\" | paps | lpr");
			break;

		case BRACE_RIGHT:
			system("echo \"}\" | paps | lpr");
			break;

		case ASCII_TILDE:
			system("echo \"~\" | paps | lpr");
			break;

		case YEN:
			system("echo \"¥\" | paps | lpr");
			break;
	}
}