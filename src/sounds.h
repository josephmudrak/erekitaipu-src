// sounds.h - generic constants for syllables
// See kana.h for kana-specific values for 無変換

/*
	These constants are used by the kanji parser and do not depend on kana mode.
	printChar() will adjust them accordingly if the user so desires by pressing
	無変換 (No Conversion)
*/

/*
	As 拗音 syllables and most other uses of small kana require two keystrokes,
	they take up two spaces in the buffer.
	e.g. きゃ: [i] = KI, [i + 1] = YA_SMALL
	
	The kanji parser will also parse them as two separate keystrokes, meaning
	suggestions will show up even when only the i kana is present.
	e.g. 出 (シュツ) will appear in the candidate list even if only しD has been
	pressed so far

	Note that kana with dakuten only take up one space in the buffer, as they
	replace the previous entry.
*/

#define GEN_A_SMALL		1
#define GEN_A			2
#define GEN_I_SMALL		3
#define GEN_I			4
#define GEN_U_SMALL		5
#define GEN_U			6
#define GEN_E_SMALL		7
#define GEN_E			8
#define GEN_O_SMALL		9
#define GEN_O			10
#define GEN_KA			11
#define GEN_GA			12
#define GEN_KI			13
#define GEN_GI			14
#define GEN_KU			15
#define GEN_GU			16
#define GEN_KE			17
#define GEN_GE			18
#define GEN_KO			19
#define GEN_GO			20
#define GEN_SA			21
#define GEN_ZA			22
#define GEN_SHI			23
#define GEN_JI			24
#define GEN_SU			25
#define GEN_ZU			26
#define GEN_SE			27
#define GEN_ZE			28
#define GEN_SO			29
#define GEN_ZO			30
#define GEN_TA			31
#define GEN_DA			32
#define GEN_CHI			33
#define GEN_JI_CHI		34
#define GEN_TSU_SMALL	35
#define GEN_TSU			36
#define GEN_ZU_TSU		37
#define GEN_TE			38
#define GEN_DE			39
#define GEN_TO			40
#define GEN_DO			41
#define GEN_NA			42
#define GEN_NI			43
#define GEN_NU			44
#define GEN_NE			45
#define GEN_NO			46
#define GEN_HA			47
#define GEN_BA			48
#define GEN_PA			49
#define GEN_HI			50
#define GEN_BI			51
#define GEN_PI			52
#define GEN_FU			53
#define GEN_BU			54
#define GEN_PU			55
#define GEN_HE			56
#define GEN_BE			57
#define GEN_PE			58
#define GEN_HO			59
#define GEN_BO			60
#define GEN_PO			61
#define GEN_MA			62
#define GEN_MI			63
#define GEN_MU			64
#define GEN_ME			65
#define GEN_MO			66
#define GEN_YA_SMALL	67
#define GEN_YA			68
#define GEN_YU_SMALL	69
#define GEN_YU			70
#define GEN_YO_SMALL	71
#define GEN_YO			72
#define GEN_RA			73
#define GEN_RI			74
#define GEN_RU			75
#define GEN_RE			76
#define GEN_RO			77
#define GEN_WA			78
#define GEN_WO			79
#define GEN_N			80