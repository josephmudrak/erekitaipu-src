#include <ncurses.h>
#include <string.h>

#include "kanji.h"
#include "sounds.h"
#include "kana.h"

arrayStruct selectKanji(int sbuf[])
{
	arrayStruct array	= {.array = 0, .size = 0};
	if (sbuf[0] == GEN_A)
	{
		if (sbuf[1]	== GEN_I)
		{
			if (sbuf[1] == GEN_DA)
			{
				static int choices[200]	= {KANJI_0270};
				array.array = choices, array.size = 200;
				return array;
			}

			static int choices[200]	= {KANJI_0002, KANJI_0003, KANJI_0004,
									KANJI_0005, KANJI_0263};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_O)
		{
			static int choices[200]	= {KANJI_0420};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_KA)
		{
			if (sbuf[2] == GEN_TSU)
			{
				if (sbuf[3] == GEN_KI)
				{
					static int choices[200]	= {KANJI_0421};
					array.array = choices, array.size = 200;
					return array;
				}

				static int choices[200]	= {KANJI_0421};
				array.array = choices, array.size = 200;
				return array;
			}

			static int choices[200]	= {KANJI_0421};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_KU)
		{
			static int choices[200]	= {KANJI_0006, KANJI_0007};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_GO)
		{
			static int choices[200]	= {KANJI_0230};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_ZA)
		{
			if (sbuf[2] == GEN_MU)
			{
				static int choices[200]	= {KANJI_0342};
				array.array = choices, array.size = 200;
				return array;
			}

			static int choices[200]	= {KANJI_0342};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_SHI)
		{
			static int choices[200]	= {KANJI_0356};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_SE)
		{
			static int choices[200]	= {KANJI_0250};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_TA)
		{
			if (sbuf[2] == GEN_I)
			{
				static int choices[200]	= {KANJI_0140};
				array.array = choices, array.size = 200;
				return array;
			}

			if (sbuf[2] == GEN_TA)
			{
				static int choices[200]	= {KANJI_0129};
				array.array = choices, array.size = 200;
				return array;
			}

			static int choices[200]	= {KANJI_0129, KANJI_0140};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_TSU)
		{
			if (sbuf[2] == GEN_KA)
			{
				static int choices[200]	= {KANJI_0009};
				array.array = choices, array.size = 200;
				return array;
			}

			static int choices[200]	= {KANJI_0008, KANJI_0009, KANJI_0612};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_TE)
		{
			static int choices[200]	= {KANJI_0010};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_TO)
		{
			static int choices[200]	= {KANJI_0579, KANJI_0675};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_NA)
		{
			static int choices[200]	= {KANJI_0507};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_NI)
		{
			static int choices[200]	= {KANJI_0469};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_BU)
		{
			static int choices[200]	= {KANJI_0303};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_MA)
		{
			static int choices[200]	= {KANJI_0061, KANJI_0249};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_ME)
		{
			static int choices[200]	= {KANJI_0061};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_YA)
		{
			if (sbuf[2] == GEN_MA)
			{
				static int choices[200]	= {KANJI_0153, KANJI_0584};
				array.array = choices, array.size = 200;
				return array;
			}

			static int choices[200]	= {KANJI_0153, KANJI_0179, KANJI_0303,
									KANJI_0584};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_RA)
		{
			if (sbuf[2] == GEN_TA)
			{
				static int choices[200]	= {KANJI_0178};
				array.array = choices, array.size = 200;
				return array;
			}

			if (sbuf[2] == GEN_WA)
			{
				static int choices[200]	= {KANJI_0551};
				array.array = choices, array.size = 200;
				return array;
			}

			static int choices[200]	= {KANJI_0011, KANJI_0178, KANJI_0551,
									KANJI_0617};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_WA)
		{
			static int choices[200]	= {KANJI_0002, KANJI_0632, KANJI_0650};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_N)
		{
			static int choices[200]	= {KANJI_0012, KANJI_0013, KANJI_0014,
									KANJI_0601};
			array.array = choices, array.size = 200;
			return array;
		}

		static int choices[200]	= {KANJI_0001, KANJI_0002, KANJI_0003,
								KANJI_0004, KANJI_0005, KANJI_0006, KANJI_0007,
								KANJI_0008, KANJI_0009, KANJI_0010, KANJI_0011,
								KANJI_0012, KANJI_0013, KANJI_0014, KANJI_0061,
								KANJI_0129, KANJI_0140, KANJI_0153, KANJI_0175,
								KANJI_0178, KANJI_0179, KANJI_0187, KANJI_0230,
								KANJI_0249, KANJI_0250, KANJI_0270, KANJI_0303,
								KANJI_0342, KANJI_0356, KANJI_0387, KANJI_0420,
								KANJI_0421, KANJI_0452, KANJI_0469, KANJI_0507,
								KANJI_0551, KANJI_0579, KANJI_0584, KANJI_0601,
								KANJI_0612, KANJI_0617, KANJI_0632, KANJI_0650,
								KANJI_0675, KANJI_0714};
		array.array = choices, array.size = 200;
		return array;
	}

	if (sbuf[0] == GEN_I)
	{
		if (sbuf[1] == GEN_E)
		{
			static int choices[200]	= {KANJI_0147};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_KI)
		{
			static int choices[200]	= {KANJI_0039};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_KU)
		{
			static int choices[200]	= {KANJI_0040, KANJI_0326};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_KO)
		{
			static int choices[200]	= {KANJI_0495};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_SA)
		{
			if (sbuf[2] == GEN_GI)
			{
				if (sbuf[3] == GEN_YO)
				{
					static int choices[200]	= {KANJI_0512};
					array.array = choices, array.size = 200;
					return array;
				}

				static int choices[200]	= {KANJI_0512};
				array.array = choices, array.size = 200;
				return array;
			}

			static int choices[200]	= {KANJI_0512};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_SO)
		{
			static int choices[200]	= {KANJI_0371};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_TA)
		{
			static int choices[200]	= {KANJI_0770};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_CHI)
		{
			static int choices[200]	= {KANJI_0041, KANJI_0042, KANJI_0765};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_TSU)
		{
			if (sbuf[2] == GEN_WA)
			{
				static int choices[200]	= {KANJI_0341};
				array.array = choices, array.size = 200;
				return array;
			}

			static int choices[200]	= {KANJI_0041, KANJI_0043, KANJI_0341,
									KANJI_0575};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_TO)
		{
			if (sbuf[2] == GEN_NA)
			{
				static int choices[200]	= {KANJI_0073};
				array.array = choices, array.size = 200;
				return array;
			}

			static int choices[200]	= {KANJI_0073, KANJI_0769};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_NU)
		{
			static int choices[200]	= {KANJI_0514};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_NO)
		{
			static int choices[200]	= {KANJI_0311};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_BA)
		{
			if (sbuf[2] == GEN_RA)
			{
				static int choices[200]	= {KANJI_0044};
				array.array = choices, array.size = 200;
				return array;
			}

			static int choices[200]	= {KANJI_0044};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_MA)
		{
			if (sbuf[2] == GEN_SHI)
			{
				static int choices[200]	= {KANJI_0177};
				array.array = choices, array.size = 200;
				return array;
			}

			static int choices[200]	= {KANJI_0177, KANJI_0668};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_MO)
		{
			static int choices[200]	= {KANJI_0045};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_YA)
		{
			static int choices[200]	= {KANJI_0532};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_RO)
		{
			static int choices[200]	= {KANJI_0698};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_WA)
		{
			static int choices[200]	= {KANJI_0295};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_N)
		{
			static int choices[200]	= {KANJI_0046, KANJI_0047, KANJI_0048,
									KANJI_0049, KANJI_0050, KANJI_0051,
									KANJI_0052, KANJI_0053, KANJI_0054,
									KANJI_0055, KANJI_0056, KANJI_0057,
									KANJI_0127};
			array.array = choices, array.size = 200;
			return array;
		}

		static int choices[200]	= {KANJI_0015, KANJI_0016, KANJI_0017,
								KANJI_0018, KANJI_0019, KANJI_0020, KANJI_0021,
								KANJI_0022, KANJI_0023, KANJI_0024, KANJI_0025,
								KANJI_0026, KANJI_0027, KANJI_0028, KANJI_0029,
								KANJI_0030, KANJI_0031, KANJI_0032, KANJI_0033,
								KANJI_0034, KANJI_0035, KANJI_0036, KANJI_0037,
								KANJI_0038, KANJI_0039, KANJI_0040, KANJI_0041,
								KANJI_0042, KANJI_0043, KANJI_0044, KANJI_0045,
								KANJI_0046, KANJI_0047, KANJI_0048, KANJI_0049,
								KANJI_0050, KANJI_0051, KANJI_0052, KANJI_0053,
								KANJI_0054, KANJI_0055, KANJI_0056, KANJI_0057,
								KANJI_0073, KANJI_0078, KANJI_0127, KANJI_0177,
								KANJI_0295, KANJI_0308, KANJI_0311, KANJI_0326,
								KANJI_0341, KANJI_0371, KANJI_0384, KANJI_0495,
								KANJI_0512, KANJI_0514, KANJI_0532, KANJI_0548,
								KANJI_0575, KANJI_0601, KANJI_0668, KANJI_0698,
								KANJI_0765, KANJI_0769, KANJI_0770};
		array.array = choices, array.size = 200;
		return array;
	}

	if (sbuf[0] == GEN_U)
	{
		if (sbuf[1] == GEN_O)
		{
			static int choices[200]	= {KANJI_0391};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_SHI)
		{
			static int choices[200]	= {KANJI_0367, KANJI_0381, KANJI_0579};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_JI)
		{
			static int choices[200]	= {KANJI_0760};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_ZU)
		{
			static int choices[200]	= {KANJI_0152};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_TA)
		{
			if (sbuf[2] == GEN_GA)
			{
				static int choices[200]	= {KANJI_0344};
				array.array = choices, array.size = 200;
				return array;
			}

			static int choices[200]	= {KANJI_0062, KANJI_0159, KANJI_0344};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_TSU)
		{
			if (sbuf[2] == GEN_WA)
			{
				static int choices[200]	= {KANJI_0334};
				array.array = choices, array.size = 200;
				return array;
			}

			static int choices[200]	= {KANJI_0028, KANJI_0063, KANJI_0071,
									KANJI_0334, KANJI_0503};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_NE)
		{
			static int choices[200]	= {KANJI_0064};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_BU)
		{
			static int choices[200]	= {KANJI_0747};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_MI)
		{
			static int choices[200]	= {KANJI_0182};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_YA)
		{
			if (sbuf[2] == GEN_U)
			{
				if (sbuf[3] == GEN_YA)
				{
					static int choices[200]	= {KANJI_0407};
					array.array = choices, array.size = 200;
					return array;
				}

				static int choices[200]	= {KANJI_0407};
				array.array = choices, array.size = 200;
				return array;
			}

			if (sbuf[2] == GEN_MA)
			{
				static int choices[200]	= {KANJI_0485};
				array.array = choices, array.size = 200;
				return array;
			}

			static int choices[200]	= {KANJI_0407, KANJI_0485};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_RA)
		{
			static int choices[200]	= {KANJI_0065, KANJI_0671};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_N)
		{
			static int choices[200]	= {KANJI_0066, KANJI_0067};
			array.array = choices, array.size = 200;
			return array;
		}

		static int choices[200]	= {KANJI_0028, KANJI_0058, KANJI_0059,
								KANJI_0060, KANJI_0061, KANJI_0062, KANJI_0063,
								KANJI_0064, KANJI_0065, KANJI_0066, KANJI_0067,
								KANJI_0071, KANJI_0152, KANJI_0159, KANJI_0182,
								KANJI_0318, KANJI_0334, KANJI_0344, KANJI_0367,
								KANJI_0381, KANJI_0391, KANJI_0407, KANJI_0485,
								KANJI_0503, KANJI_0579, KANJI_0670, KANJI_0747,
								KANJI_0760};
		array.array = choices, array.size = 200;
		return array;
	}

	if (sbuf[0] == GEN_E)
	{
		if (sbuf[1] == GEN_I)
		{
			static int choices[200]	= {KANJI_0068, KANJI_0069, KANJI_0070,
									KANJI_0071, KANJI_0072, KANJI_0073,
									KANJI_0074, KANJI_0075, KANJI_0076,
									KANJI_0077};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_KI)
		{
			static int choices[200]	= {KANJI_0078, KANJI_0079, KANJI_0080,
									KANJI_0081, KANJI_0082};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_TSU)
		{
			static int choices[200]	= {KANJI_0083, KANJI_0084, KANJI_0085,
									KANJI_0086};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_RA)
		{
			static int choices[200]	= {KANJI_0030};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_RI)
		{
			static int choices[200]	= {KANJI_0442};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_N)
		{
			static int choices[200]	= {KANJI_0087, KANJI_0088, KANJI_0089,
									KANJI_0090, KANJI_0091, KANJI_0092,
									KANJI_0093, KANJI_0094, KANJI_0095,
									KANJI_0096, KANJI_0097, KANJI_0098,
									KANJI_0099, KANJI_0100, KANJI_0101,
									KANJI_0102, KANJI_0103};
			array.array = choices, array.size = 200;
			return array;
		}

		static int choices[200]	= {KANJI_0030, KANJI_0068, KANJI_0069,
								KANJI_0070, KANJI_0071, KANJI_0072, KANJI_0073,
								KANJI_0074, KANJI_0075, KANJI_0076, KANJI_0077,
								KANJI_0078, KANJI_0079, KANJI_0080, KANJI_0081,
								KANJI_0082, KANJI_0083, KANJI_0084, KANJI_0085,
								KANJI_0086, KANJI_0087, KANJI_0088, KANJI_0089,
								KANJI_0090, KANJI_0091, KANJI_0092, KANJI_0093,
								KANJI_0094, KANJI_0095, KANJI_0096, KANJI_0097,
								KANJI_0098, KANJI_0099, KANJI_0100, KANJI_0101,
								KANJI_0102, KANJI_0103, KANJI_0173, KANJI_0175,
								KANJI_0186, KANJI_0223, KANJI_0442, KANJI_0479,
								KANJI_0600};
		array.array = choices, array.size = 200;
		return array;
	}

	if (sbuf[0] == GEN_O)
	{
		if (sbuf[1] == GEN_U)
		{
			static int choices[200]	= {KANJI_0105, KANJI_0106, KANJI_0107,
									KANJI_0108, KANJI_0109, KANJI_0110,
									KANJI_0111, KANJI_0112, KANJI_0113,
									KANJI_0114, KANJI_0115, KANJI_0116,
									KANJI_0117, KANJI_0615, KANJI_0630};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_O)
		{
			if (sbuf[2] == GEN_YA)
			{
				if (sbuf[3] == GEN_KE)
				{
					static int choices[200]	= {KANJI_0588};
					array.array = choices, array.size = 200;
					return array;
				}

				static int choices[200]	= {KANJI_0588};
				array.array = choices, array.size = 200;
				return array;
			}

			static int choices[200]	= {KANJI_0420, KANJI_0588};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_KA)
		{
			static int choices[200]	= {KANJI_0118, KANJI_0362};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_KU)
		{
			static int choices[200]	= {KANJI_0116, KANJI_0119, KANJI_0120,
									KANJI_0121, KANJI_0122, KANJI_0579};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_KO)
		{
			if (sbuf[2] == GEN_NA)
			{
				static int choices[200]	= {KANJI_0601};
				array.array = choices, array.size = 200;
				return array;
			}

			static int choices[200]	= {KANJI_0601, KANJI_0643};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_GO)
		{
			if (sbuf[2] == GEN_SO)
			{
				static int choices[200]	= {KANJI_0555};
				array.array = choices, array.size = 200;
				return array;
			}

			static int choices[200]	= {KANJI_0555};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_SHI)
		{
			static int choices[200]	= {KANJI_0411};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_SO)
		{
			if (sbuf[2] == GEN_RE)
			{
				static int choices[200]	= {KANJI_0123};
				array.array = choices, array.size = 200;
				return array;
			}

			static int choices[200]	= {KANJI_0024, KANJI_0123, KANJI_0406,
									KANJI_0411};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_DA)
		{
			static int choices[200]	= {KANJI_0130};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_DO)
		{
			if (sbuf[2] == GEN_RO)
			{
				static int choices[200]	= {KANJI_0419};
				array.array = choices, array.size = 200;
				return array;
			}

			static int choices[200]	= {KANJI_0409, KANJI_0419};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_CHI)
		{
			if (sbuf[2] == GEN_I)
			{
				static int choices[200]	= {KANJI_0258};
				array.array = choices, array.size = 200;
				return array;
			}

			static int choices[200]	= {KANJI_0258};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_TSU)
		{
			static int choices[200]	= {KANJI_0124};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_TO)
		{
			if (sbuf[2] == GEN_SHI)
			{
				if (sbuf[3] == GEN_I)
				{
					static int choices[200]	= {KANJI_0258};
					array.array = choices, array.size = 200;
					return array;
				}

				static int choices[200]	= {KANJI_0258};
				array.array = choices, array.size = 200;
				return array;
			}

			static int choices[200]	= {KANJI_0127, KANJI_0258};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_BI)
		{
			if (sbuf[2] == GEN_YA)
			{
				static int choices[200]	= {KANJI_0409};
				array.array = choices, array.size = 200;
				return array;
			}

			static int choices[200]	= {KANJI_0409};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_BO)
		{
			static int choices[200]	= {KANJI_0218};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_NI)
		{
			static int choices[200]	= {KANJI_0319};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_NO)
		{
			if (sbuf[2] == GEN_O)
			{
				if (sbuf[3] == GEN_NO)
				{
					static int choices[200]	= {KANJI_0210};
					array.array = choices, array.size = 200;
					return array;
				}

				static int choices[200]	= {KANJI_0210};
				array.array = choices, array.size = 200;
				return array;
			}

			if (sbuf[2] == GEN_RE)
			{
				static int choices[200]	= {KANJI_0556};
				array.array = choices, array.size = 200;
				return array;
			}

			static int choices[200]	= {KANJI_0210, KANJI_0556};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_YO)
		{
			static int choices[200]	= {KANJI_0069};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_RE)
		{
			static int choices[200]	= {KANJI_0125};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_RO)
		{
			if (sbuf[2] == GEN_SHI)
			{
				static int choices[200]	= {KANJI_0126};
				array.array = choices, array.size = 200;
				return array;
			}

			static int choices[200]	= {KANJI_0126, KANJI_0451};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_N)
		{
			static int choices[200]	= {KANJI_0091, KANJI_0098, KANJI_0127,
									KANJI_0128, KANJI_0129, KANJI_0130,
									KANJI_0392};
			array.array = choices, array.size = 200;
			return array;
		}

		static int choices[200]	= {KANJI_0006, KANJI_0024, KANJI_0069,
								KANJI_0091, KANJI_0098, KANJI_0104, KANJI_0105,
								KANJI_0106, KANJI_0107, KANJI_0108, KANJI_0109,
								KANJI_0110, KANJI_0111, KANJI_0112, KANJI_0113,
								KANJI_0114, KANJI_0115, KANJI_0116, KANJI_0117,
								KANJI_0118, KANJI_0119, KANJI_0120, KANJI_0121,
								KANJI_0122, KANJI_0123, KANJI_0124, KANJI_0125,
								KANJI_0126, KANJI_0127, KANJI_0128, KANJI_0129,
								KANJI_0130, KANJI_0131, KANJI_0210, KANJI_0218,
								KANJI_0258, KANJI_0317, KANJI_0319, KANJI_0362,
								KANJI_0392, KANJI_0406, KANJI_0409, KANJI_0411,
								KANJI_0419, KANJI_0420, KANJI_0451, KANJI_0555,
								KANJI_0556, KANJI_0579, KANJI_0588, KANJI_0601,
								KANJI_0615, KANJI_0625, KANJI_0630, KANJI_0643};
		array.array = choices, array.size = 200;
		return array;
	}

	if (sbuf[0] == GEN_KA)
	{
		if (sbuf[1] == GEN_I)
		{
			if (sbuf[2] == GEN_KO)
			{
				static int choices[200]	= {KANJI_0745};
				array.array = choices, array.size = 200;
				return array;
			}

			static int choices[200]	= {KANJI_0172, KANJI_0173, KANJI_0174,
									KANJI_0175, KANJI_0176, KANJI_0177,
									KANJI_0178, KANJI_0179, KANJI_0180,
									KANJI_0181, KANJI_0182, KANJI_0183,
									KANJI_0184, KANJI_0185, KANJI_0186,
									KANJI_0187, KANJI_0188, KANJI_0189,
									KANJI_0190, KANJI_0191, KANJI_0192,
									KANJI_0193, KANJI_0194, KANJI_0195,
									KANJI_0196, KANJI_0202, KANJI_0745};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_E)
		{
			if (sbuf[2] == GEN_RI)
			{
				static int choices[200]	= {KANJI_0574};
				array.array = choices, array.size = 200;
				return array;
			}

			static int choices[200]	= {KANJI_0320, KANJI_0574};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_O)
		{
			static int choices[200]	= {KANJI_0299, KANJI_0465, KANJI_0619};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_KA)
		{
			static int choices[200]	= {KANJI_0279, KANJI_0475, KANJI_0481};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_GA)
		{
			if (sbuf[2] == GEN_MI)
			{
				static int choices[200]	= {KANJI_0416};
				array.array = choices, array.size = 200;
				return array;
			}

			if (sbuf[2] == GEN_YA)
			{
				static int choices[200]	= {KANJI_0336};
				array.array = choices, array.size = 200;
				return array;
			}

			static int choices[200]	= {KANJI_0336, KANJI_0416};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_KI)
		{
			static int choices[200]	= {KANJI_0208, KANJI_0209};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_GI)
		{
			static int choices[200]	= {KANJI_0540, KANJI_0549};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_KU)
		{
			static int choices[200]	= {KANJI_0056, KANJI_0210, KANJI_0211,
									KANJI_0212, KANJI_0213, KANJI_0214,
									KANJI_0215, KANJI_0216, KANJI_0217,
									KANJI_0218, KANJI_0219, KANJI_0220,
									KANJI_0221, KANJI_0222, KANJI_0223,
									KANJI_0224, KANJI_0225, KANJI_0226,
									KANJI_0355};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_GE)
		{
			static int choices[200]	= {KANJI_0054, KANJI_0075};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_KO)
		{
			static int choices[200]	= {KANJI_0018};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_SA)
		{
			static int choices[200]	= {KANJI_0748};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_SHI)
		{
			if (sbuf[2] == GEN_KO)
			{
				static int choices[200]	= {KANJI_0538};
				array.array = choices, array.size = 200;
				return array;
			}

			static int choices[200]	= {KANJI_0538};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_SE)
		{
			static int choices[200]	= {KANJI_0160};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_TA)
		{
			if (sbuf[2] == GEN_CHI)
			{
				static int choices[200]	= {KANJI_0470};
				array.array = choices, array.size = 200;
				return array;
			}

			if (sbuf[2] == GEN_MA)
			{
				if (sbuf[3] == GEN_RI)
				{
					static int choices[200]	= {KANJI_0189};
					array.array = choices, array.size = 200;
					return array;
				}

				static int choices[200]	= {KANJI_0189};
				array.array = choices, array.size = 200;
				return array;
			}

			if (sbuf[2] == GEN_MU)
			{
				static int choices[200]	= {KANJI_0488};
				array.array = choices, array.size = 200;
				return array;
			}

			static int choices[200]	= {KANJI_0189, KANJI_0232, KANJI_0470,
									KANJI_0476, KANJI_0488, KANJI_0518,
									KANJI_0530, KANJI_0560, KANJI_0583,
									KANJI_0634};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_TSU_SMALL)
		{
			static int choices[200]	= {KANJI_0650};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_TSU)
		{
			static int choices[200]	= {KANJI_0233, KANJI_0234, KANJI_0235,
									KANJI_0236, KANJI_0237, KANJI_0238,
									KANJI_0239, KANJI_0240, KANJI_0241};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_DO)
		{
			static int choices[200]	= {KANJI_0211};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_NA)
		{
			static int choices[200]	= {KANJI_0432};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_NE)
		{
			static int choices[200]	= {KANJI_0432};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_BU)
		{
			static int choices[200]	= {KANJI_0243};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_MA)
		{
			static int choices[200]	= {KANJI_0244, KANJI_0245, KANJI_0639};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_MU)
		{
			static int choices[200]	= {};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_ME)
		{
			static int choices[200]	= {KANJI_0324};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_RA)
		{
			static int choices[200]	= {KANJI_0216};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_RI)
		{
			static int choices[200]	= {KANJI_0136};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_RO)
		{
			static int choices[200]	= {KANJI_0486};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_WA)
		{
			if (sbuf[2] == GEN_RA)
			{
				static int choices[200]	= {KANJI_0165};
				array.array = choices, array.size = 200;
				return array;
			}

			static int choices[200]	= {KANJI_0142, KANJI_0165, KANJI_0213,
									KANJI_0236, KANJI_0259};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_N)
		{
			if (sbuf[2] == GEN_GA)
			{
				static int choices[200]	= {KANJI_0291, KANJI_0600};
				array.array = choices, array.size = 200;
				return array;
			}

			if (sbuf[2] == GEN_MU)
			{
				if (sbuf[3] == GEN_RI)
				{
					static int choices[200]	= {KANJI_0255};
					array.array = choices, array.size = 200;
					return array;
				}

				static int choices[200]	= {KANJI_0255};
				array.array = choices, array.size = 200;
				return array;
			}

			static int choices[200]	= {KANJI_0167, KANJI_0247, KANJI_0248,
									KANJI_0249, KANJI_0250, KANJI_0251,
									KANJI_0252, KANJI_0253, KANJI_0254,
									KANJI_0255, KANJI_0256, KANJI_0257,
									KANJI_0258, KANJI_0259, KANJI_0260,
									KANJI_0261, KANJI_0262, KANJI_0263,
									KANJI_0264, KANJI_0265, KANJI_0266,
									KANJI_0267, KANJI_0268, KANJI_0269,
									KANJI_0270, KANJI_0271, KANJI_0272,
									KANJI_0273, KANJI_0274, KANJI_0275,
									KANJI_0276, KANJI_0277, KANJI_0278,
									KANJI_0279, KANJI_0280, KANJI_0281,
									KANJI_0282, KANJI_0283, KANJI_0284,
									KANJI_0285, KANJI_0286, KANJI_0287,
									KANJI_0288, KANJI_0289, KANJI_0290,
									KANJI_0291, KANJI_0292, KANJI_0594,
									KANJI_0600};
			array.array = choices, array.size = 200;
			return array;
		}

		static int choices[200]	= {KANJI_0018, KANJI_0054, KANJI_0056,
								KANJI_0075, KANJI_0131, KANJI_0132, KANJI_0133,
								KANJI_0134, KANJI_0135, KANJI_0136, KANJI_0137,
								KANJI_0138, KANJI_0139, KANJI_0140, KANJI_0141,
								KANJI_0142, KANJI_0143, KANJI_0144, KANJI_0145,
								KANJI_0146, KANJI_0147, KANJI_0148, KANJI_0149,
								KANJI_0150, KANJI_0151, KANJI_0152, KANJI_0153,
								KANJI_0154, KANJI_0155, KANJI_0156, KANJI_0157,
								KANJI_0158, KANJI_0159, KANJI_0160, KANJI_0161,
								KANJI_0162, KANJI_0163, KANJI_0165, KANJI_0167,
								KANJI_0172, KANJI_0173, KANJI_0174, KANJI_0175,
								KANJI_0176, KANJI_0177, KANJI_0178, KANJI_0179,
								KANJI_0180, KANJI_0181, KANJI_0182, KANJI_0183,
								KANJI_0184, KANJI_0185, KANJI_0186, KANJI_0187,
								KANJI_0188, KANJI_0189, KANJI_0190, KANJI_0191,
								KANJI_0192, KANJI_0193, KANJI_0194, KANJI_0195,
								KANJI_0196, KANJI_0202, KANJI_0208, KANJI_0209,
								KANJI_0210, KANJI_0211, KANJI_0212, KANJI_0213,
								KANJI_0214, KANJI_0215, KANJI_0216, KANJI_0217,
								KANJI_0218, KANJI_0219, KANJI_0220, KANJI_0221,
								KANJI_0222, KANJI_0223, KANJI_0224, KANJI_0225,
								KANJI_0226, KANJI_0231, KANJI_0232, KANJI_0233,
								KANJI_0234, KANJI_0235, KANJI_0236, KANJI_0237,
								KANJI_0238, KANJI_0239, KANJI_0240, KANJI_0241,
								KANJI_0242, KANJI_0243, KANJI_0244, KANJI_0245,
								KANJI_0246, KANJI_0247, KANJI_0248, KANJI_0249,
								KANJI_0250, KANJI_0251, KANJI_0252, KANJI_0253,
								KANJI_0254, KANJI_0255, KANJI_0256, KANJI_0257,
								KANJI_0258, KANJI_0259, KANJI_0260, KANJI_0261,
								KANJI_0262, KANJI_0263, KANJI_0264, KANJI_0265,
								KANJI_0266, KANJI_0267, KANJI_0268, KANJI_0269,
								KANJI_0270, KANJI_0271, KANJI_0272, KANJI_0273,
								KANJI_0274, KANJI_0275, KANJI_0276, KANJI_0277,
								KANJI_0278, KANJI_0279, KANJI_0280, KANJI_0281,
								KANJI_0282, KANJI_0283, KANJI_0284, KANJI_0285,
								KANJI_0286, KANJI_0287, KANJI_0288, KANJI_0289,
								KANJI_0290, KANJI_0291, KANJI_0292, KANJI_0299,
								KANJI_0320, KANJI_0324, KANJI_0336, KANJI_0355,
								KANJI_0378, KANJI_0416, KANJI_0432, KANJI_0447,
								KANJI_0452, KANJI_0465, KANJI_0470, KANJI_0475,
								KANJI_0476, KANJI_0481, KANJI_0486, KANJI_0488,
								KANJI_0506, KANJI_0518, KANJI_0523, KANJI_0530,
								KANJI_0538, KANJI_0540, KANJI_0544, KANJI_0549,
								KANJI_0560, KANJI_0566, KANJI_0575, KANJI_0583,
								KANJI_0594, KANJI_0595, KANJI_0600, KANJI_0619,
								KANJI_0634, KANJI_0639, KANJI_0650, KANJI_0745,
								KANJI_0748};
		array.array = choices, array.size = 200;
		return array;
	}

	if (sbuf[0] == GEN_GA)
	{
		if (sbuf[1] == GEN_I)
		{
			static int choices[200]	= {KANJI_0197, KANJI_0198, KANJI_0199,
									KANJI_0200, KANJI_0201, KANJI_0202,
									KANJI_0203, KANJI_0204, KANJI_0205,
									KANJI_0206, KANJI_0207};
			array.array = choices, array.size = 200;
			return array;
		}
		
		if (sbuf[1] == GEN_KU)
		{
			static int choices[200]	= {KANJI_0226, KANJI_0227, KANJI_0228,
									KANJI_0229, KANJI_0230};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_KE)
		{
			static int choices[200]	= {KANJI_0200};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_TSU_SMALL)
		{
			static int choices[200]	= {KANJI_0650};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_TSU)
		{
			static int choices[200]	= {KANJI_0513};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_N)
		{
			static int choices[200]	= {KANJI_0292, KANJI_0293, KANJI_0294,
									KANJI_0295, KANJI_0296, KANJI_0297,
									KANJI_0298, KANJI_0299, KANJI_0300,
									KANJI_0545};
			array.array = choices, array.size = 200;
			return array;
		}

		static int choices[200]	= {KANJI_0164, KANJI_0165, KANJI_0166,
								KANJI_0167, KANJI_0168, KANJI_0169, KANJI_0170,
								KANJI_0171, KANJI_0197, KANJI_0198, KANJI_0199,
								KANJI_0200, KANJI_0201, KANJI_0202, KANJI_0203,
								KANJI_0204, KANJI_0205, KANJI_0206, KANJI_0207,
								KANJI_0226, KANJI_0227, KANJI_0228, KANJI_0229,
								KANJI_0230, KANJI_0292, KANJI_0293, KANJI_0294,
								KANJI_0295, KANJI_0296, KANJI_0297, KANJI_0298,
								KANJI_0299, KANJI_0300, KANJI_0513, KANJI_0545,
								KANJI_0650};
		array.array = choices, array.size = 200;
		return array;
	}

	if (sbuf[0] == GEN_KI)
	{
		if (sbuf[1] == GEN_KU)
		{
			static int choices[200]	= {KANJI_0350};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_ZA)
		{
			static int choices[200]	= {KANJI_0658};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_SHI)
		{
			static int choices[200]	= {KANJI_0294};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_SO)
		{
			static int choices[200]	= {KANJI_0417};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_TA)
		{
			if (sbuf[2] == GEN_NA)
			{
				static int choices[200]	= {KANJI_0104};
				array.array = choices, array.size = 200;
				return array;
			}

			static int choices[200]	= {KANJI_0104};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_CHI)
		{
			static int choices[200]	= {KANJI_0351};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_TSU)
		{
			static int choices[200]	= {KANJI_0351, KANJI_0352, KANJI_0353};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_NU)
		{
			static int choices[200]	= {KANJI_0534};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_BA)
		{
			static int choices[200]	= {KANJI_0164};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_BI)
		{
			static int choices[200]	= {KANJI_0555};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_MI)
		{
			static int choices[200]	= {KANJI_0462};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_MO)
		{
			static int choices[200]	= {KANJI_0253};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_YA_SMALL)
		{
			if (sbuf[2] == GEN_KU)
			{
				static int choices[200]	= {KANJI_0354, KANJI_0355, KANJI_0356};
				array.array = choices, array.size = 200;
				return array;
			}

			static int choices[200]	= {KANJI_0354, KANJI_0355, KANJI_0356};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_YU_SMALL)
		{
			if (sbuf[2] == GEN_U)
			{
				static int choices[200]	= {KANJI_0359, KANJI_0360, KANJI_0361,
										KANJI_0362, KANJI_0363, KANJI_0364,
										KANJI_0365, KANJI_0366, KANJI_0367,
										KANJI_0368, KANJI_0369, KANJI_0370,
										KANJI_0371, KANJI_0372, KANJI_0373,
										KANJI_0374, KANJI_0375, KANJI_0376,
										KANJI_0377, KANJI_0378, KANJI_0379,
										KANJI_0380, KANJI_0381};
				array.array = choices, array.size = 200;
				return array;
			}

			static int choices[200]	= {KANJI_0359, KANJI_0360, KANJI_0361,
									KANJI_0362, KANJI_0363, KANJI_0364,
									KANJI_0365, KANJI_0366, KANJI_0367,
									KANJI_0368, KANJI_0369, KANJI_0370, 
									KANJI_0371, KANJI_0372, KANJI_0373, 
									KANJI_0374, KANJI_0375, KANJI_0376,
									KANJI_0377, KANJI_0378, KANJI_0379,
									KANJI_0380, KANJI_0381};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_YO_SMALL)
		{
			if (sbuf[2] == GEN_U)
			{
				static int choices[200]	= {KANJI_0394, KANJI_0395, KANJI_0396,
										KANJI_0397, KANJI_0398, KANJI_0399,
										KANJI_0400, KANJI_0401, KANJI_0402,
										KANJI_0403, KANJI_0404, KANJI_0405,
										KANJI_0406, KANJI_0407, KANJI_0408,
										KANJI_0409, KANJI_0410, KANJI_0411,
										KANJI_0412, KANJI_0413, KANJI_0414,
										KANJI_0415, KANJI_0416, KANJI_0417,
										KANJI_0418, KANJI_0419, KANJI_0469,
										KANJI_0483, KANJI_0619, KANJI_0643};
				array.array = choices, array.size = 200;
				return array;
			}

			if (sbuf[2] == GEN_KU)
			{
				static int choices[200]	= {KANJI_0424, KANJI_0425, KANJI_0426};
				array.array = choices, array.size = 200;
				return array;
			}

			static int choices[200]	= {KANJI_0381, KANJI_0382, KANJI_0383,
									KANJI_0384, KANJI_0385, KANJI_0386,
									KANJI_0387, KANJI_0388, KANJI_0389,
									KANJI_0394, KANJI_0395, KANJI_0396,
									KANJI_0397, KANJI_0398, KANJI_0399, 
									KANJI_0400, KANJI_0401, KANJI_0402, 
									KANJI_0403, KANJI_0404, KANJI_0405,
									KANJI_0406, KANJI_0407, KANJI_0408,
									KANJI_0409, KANJI_0410, KANJI_0411,
									KANJI_0412, KANJI_0413, KANJI_0414,
									KANJI_0415, KANJI_0416, KANJI_0417,
									KANJI_0418, KANJI_0419, KANJI_0424,
									KANJI_0425, KANJI_0426, KANJI_0469,
									KANJI_0483, KANJI_0619, KANJI_0643};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_RA)
		{
			static int choices[200]	= {KANJI_0532};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_WA)
		{
			static int choices[200]	= {KANJI_0369, KANJI_0379, KANJI_0426,
									KANJI_0712};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_N)
		{
			static int choices[200]	= {KANJI_0428, KANJI_0429, KANJI_0430,
									KANJI_0431, KANJI_0432, KANJI_0433,
									KANJI_0434, KANJI_0435, KANJI_0436,
									KANJI_0437, KANJI_0438, KANJI_0439,
									KANJI_0440, KANJI_0441, KANJI_0442,
									KANJI_0668};
			array.array = choices, array.size = 200;
			return array;
		}

		static int choices[200]	= {KANJI_0104, KANJI_0164, KANJI_0253,
								KANJI_0294, KANJI_0301, KANJI_0302, KANJI_0303,
								KANJI_0304, KANJI_0305, KANJI_0306, KANJI_0307,
								KANJI_0308, KANJI_0309, KANJI_0310, KANJI_0311,
								KANJI_0312, KANJI_0313, KANJI_0314, KANJI_0315,
								KANJI_0316, KANJI_0317, KANJI_0318, KANJI_0319, 
								KANJI_0320, KANJI_0321, KANJI_0322, KANJI_0323,
								KANJI_0324, KANJI_0325, KANJI_0326, KANJI_0327,
								KANJI_0328, KANJI_0329, KANJI_0330, KANJI_0331,
								KANJI_0332, KANJI_0333, KANJI_0334, KANJI_0335, 
								KANJI_0336, KANJI_0337, KANJI_0338, KANJI_0350,
								KANJI_0351, KANJI_0352, KANJI_0353, KANJI_0354,
								KANJI_0355, KANJI_0356, KANJI_0359, KANJI_0360,
								KANJI_0361, KANJI_0362, KANJI_0363, KANJI_0364,
								KANJI_0365, KANJI_0366, KANJI_0367, KANJI_0368,
								KANJI_0369, KANJI_0370, KANJI_0371, KANJI_0372,
								KANJI_0373, KANJI_0374, KANJI_0375, KANJI_0376,
								KANJI_0377, KANJI_0378, KANJI_0379, KANJI_0381,
								KANJI_0382, KANJI_0383, KANJI_0384, KANJI_0385,
								KANJI_0386, KANJI_0387, KANJI_0388, KANJI_0389,
								KANJI_0390, KANJI_0395, KANJI_0396, KANJI_0397,
								KANJI_0398, KANJI_0399, KANJI_0400, KANJI_0401,
								KANJI_0402, KANJI_0403, KANJI_0404, KANJI_0405,
								KANJI_0406, KANJI_0407, KANJI_0408, KANJI_0409, 
								KANJI_0410, KANJI_0411, KANJI_0412, KANJI_0413,
								KANJI_0414, KANJI_0415, KANJI_0416, KANJI_0417,
								KANJI_0418, KANJI_0419, KANJI_0424, KANJI_0425,
								KANJI_0426, KANJI_0428, KANJI_0429, KANJI_0430,
								KANJI_0431, KANJI_0432, KANJI_0433, KANJI_0434,
								KANJI_0435, KANJI_0436, KANJI_0437, KANJI_0438,
								KANJI_0439, KANJI_0440, KANJI_0441, KANJI_0442,
								KANJI_0462, KANJI_0469, KANJI_0483, KANJI_0509,
								KANJI_0532, KANJI_0534, KANJI_0555, KANJI_0556,
								KANJI_0607, KANJI_0619, KANJI_0630, KANJI_0643,
								KANJI_0658, KANJI_0668, KANJI_0712, KANJI_0754};
		array.array = choices, array.size = 200;
		return array;
	}

	if (sbuf[0] == GEN_GI)
	{
		if (sbuf[1] == GEN_YA_SMALL)
		{
			if (sbuf[2] == GEN_KU)
			{
				static int choices[200]	= {KANJI_0357, KANJI_0358};
				array.array = choices, array.size = 200;
				return array;
			}

			static int choices[200]	= {KANJI_0357, KANJI_0358};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_YU_SMALL)
		{
			if (sbuf[2] == GEN_U)
			{
				static int choices[200]	= {KANJI_0380};
				array.array = choices, array.size = 200;
				return array;
			}

			static int choices[200]	= {KANJI_0380};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_YO_SMALL)
		{
			if (sbuf[2] == GEN_U)
			{
				static int choices[200]	= {KANJI_0420, KANJI_0421, KANJI_0422,
										KANJI_0423, KANJI_0470, KANJI_0601};
				array.array = choices, array.size = 200;
				return array;
			}

			if (sbuf[2] == GEN_KU)
			{
				static int choices[200]	= {KANJI_0427};
				array.array = choices, array.size = 200;
				return array;
			}

			static int choices[200]	= {KANJI_0391, KANJI_0392, KANJI_0393,
									KANJI_0420, KANJI_0421, KANJI_0422,
									KANJI_0423, KANJI_0427, KANJI_0470,
									KANJI_0601};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_N)
		{
			static int choices[200]	= {KANJI_0443, KANJI_0444};
			array.array = choices, array.size = 200;
			return array;
		}

		static int choices[200]	= {KANJI_0339, KANJI_0340, KANJI_0341,
								KANJI_0342, KANJI_0343, KANJI_0344, KANJI_0345,
								KANJI_0346, KANJI_0347, KANJI_0348, KANJI_0349,
								KANJI_0357, KANJI_0358, KANJI_0380, KANJI_0391,
								KANJI_0392, KANJI_0393, KANJI_0420, KANJI_0421,
								KANJI_0422, KANJI_0423, KANJI_0427, KANJI_0443,
								KANJI_0444, KANJI_0470, KANJI_0601};
		array.array = choices, array.size = 200;
		return array;
	}

	if (sbuf[0] == GEN_KU)
	{
		if (sbuf[1] == GEN_KI)
		{
			static int choices[200]	= {KANJI_0474};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_SA)
		{
			if (sbuf[2] == GEN_RI)
			{
				static int choices[200]	= {KANJI_0687};
				array.array = choices, array.size = 200;
				return array;
			}

			static int choices[200]	= {KANJI_0687};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_SHI)
		{
			static int choices[200]	= {KANJI_0456};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_JI)
		{
			if (sbuf[2] == GEN_RA)
			{
				static int choices[200]	= {KANJI_0500};
				array.array = choices, array.size = 200;
				return array;
			}

			static int choices[200]	= {KANJI_0500};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_ZU)
		{
			static int choices[200]	= {KANJI_0238};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_DA)
		{
			static int choices[200]	= {KANJI_0131, KANJI_0278, KANJI_0695};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_CHI)
		{
			static int choices[200]	= {KANJI_0586};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_TSU)
		{
			static int choices[200]	= {KANJI_0157, KANJI_0457, KANJI_0458,
									KANJI_0459};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_NI)
		{
			static int choices[200]	= {KANJI_0659};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_MA)
		{
			static int choices[200]	= {KANJI_0460};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_MO)
		{
			static int choices[200]	= {KANJI_0067};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_RA)
		{
			if (sbuf[2] == GEN_I)
			{
				static int choices[200]	= {KANJI_0017};
				array.array = choices, array.size = 200;
				return array;
			}

			static int choices[200]	= {KANJI_0014, KANJI_0017};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_RE)
		{
			if (sbuf[2] == GEN_NA)
			{
				if (sbuf[3] == GEN_I)
				{
					static int choices[200]	= {KANJI_0616};
					array.array = choices, array.size = 200;
					return array;
				}

				static int choices[200]	= {KANJI_0616};
				array.array = choices, array.size = 200;
				return array;
			}

			static int choices[200]	= {KANJI_0616};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_RU)
		{
			static int choices[200]	= {KANJI_0397, KANJI_0447};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_RO)
		{
			static int choices[200]	= {KANJI_0660};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_WA)
		{
			if (sbuf[2] == GEN_DA)
			{
				static int choices[200]	= {KANJI_0301};
				array.array = choices, array.size = 200;
				return array;
			}

			static int choices[200]	= {KANJI_0134, KANJI_0301};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_N)
		{
			static int choices[200]	= {KANJI_0462, KANJI_0463, KANJI_0464,
									KANJI_0465};
			array.array = choices, array.size = 200;
			return array;
		}

		static int choices[200]	= {KANJI_0014, KANJI_0017, KANJI_0067,
								KANJI_0131, KANJI_0134, KANJI_0157, KANJI_0181,
								KANJI_0238, KANJI_0278, KANJI_0301, KANJI_0359,
								KANJI_0360, KANJI_0366, KANJI_0374, KANJI_0397,
								KANJI_0400, KANJI_0445, KANJI_0446, KANJI_0447,
								KANJI_0448, KANJI_0456, KANJI_0457, KANJI_0458,
								KANJI_0459, KANJI_0460, KANJI_0461, KANJI_0462,
								KANJI_0463, KANJI_0464, KANJI_0465, KANJI_0474,
								KANJI_0500, KANJI_0568, KANJI_0586, KANJI_0587,
								KANJI_0591, KANJI_0616, KANJI_0624, KANJI_0659,
								KANJI_0660, KANJI_0687, KANJI_0695};
		array.array = choices, array.size = 200;
		return array;
	}

	if (sbuf[0] == GEN_GU)
	{
		if (sbuf[1] == GEN_U)
		{
			static int choices[200]	= {KANJI_0374, KANJI_0453, KANJI_0454,
									KANJI_0455};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_N)
		{
			static int choices[200]	= {KANJI_0466, KANJI_0467, KANJI_0468};
			array.array = choices, array.size = 200;
			return array;
		}

		static int choices[200]	= {KANJI_0374, KANJI_0449, KANJI_0450,
								KANJI_0451, KANJI_0453, KANJI_0454, KANJI_0455,
								KANJI_0466, KANJI_0467, KANJI_0468};
		array.array = choices, array.size = 200;
		return array;
	}

	if (sbuf[0] == GEN_KE)
	{
		if (sbuf[1] == GEN_I)
		{
			static int choices[200]	= {KANJI_0398, KANJI_0413, KANJI_0417,
									KANJI_0469, KANJI_0470, KANJI_0471,
									KANJI_0472, KANJI_0473, KANJI_0474, 
									KANJI_0475, KANJI_0476, KANJI_0477,
									KANJI_0478, KANJI_0479, KANJI_0480,
									KANJI_0481, KANJI_0482, KANJI_0483,
									KANJI_0484, KANJI_0485, KANJI_0486,
									KANJI_0488, KANJI_0489, KANJI_0490,
									KANJI_0491, KANJI_0492, KANJI_0493,
									KANJI_0494, KANJI_0495, KANJI_0496,
									KANJI_0497};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_GA)
		{
			static int choices[200]	= {KANJI_0104};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_ZU)
		{
			static int choices[200]	= {KANJI_0721};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_TA)
		{
			static int choices[200]	= {KANJI_0505};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_TSU)
		{
			static int choices[200]	= {KANJI_0506, KANJI_0507, KANJI_0508,
									KANJI_0509, KANJI_0510, KANJI_0511,
									KANJI_0512};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_MU)
		{
			static int choices[200]	= {KANJI_0096};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_WA)
		{
			static int choices[200]	= {KANJI_0528};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_N)
		{
			static int choices[200]	= {KANJI_0270, KANJI_0514, KANJI_0515,
									KANJI_0516, KANJI_0517, KANJI_0518,
									KANJI_0519, KANJI_0520, KANJI_0521,
									KANJI_0522, KANJI_0523, KANJI_0524,
									KANJI_0525, KANJI_0526, KANJI_0527,
									KANJI_0528, KANJI_0529, KANJI_0530,
									KANJI_0531, KANJI_0532, KANJI_0533,
									KANJI_0534, KANJI_0535, KANJI_0536,
									KANJI_0537, KANJI_0538, KANJI_0539,
									KANJI_0540, KANJI_0541, KANJI_0542,
									KANJI_0543, KANJI_0544};
			array.array = choices, array.size = 200;
			return array;
		}

		static int choices[200]	= {KANJI_0096, KANJI_0104, KANJI_0132,
								KANJI_0136, KANJI_0147, KANJI_0149, KANJI_0270,
								KANJI_0305, KANJI_0398, KANJI_0413, KANJI_0417,
								KANJI_0469, KANJI_0470, KANJI_0471, KANJI_0472,
								KANJI_0473, KANJI_0474, KANJI_0475, KANJI_0476,
								KANJI_0477, KANJI_0478, KANJI_0479, KANJI_0480,
								KANJI_0481, KANJI_0482, KANJI_0483, KANJI_0484,
								KANJI_0485, KANJI_0486, KANJI_0488, KANJI_0489,
								KANJI_0490, KANJI_0491, KANJI_0492, KANJI_0493,
								KANJI_0494, KANJI_0495, KANJI_0496, KANJI_0497,
								KANJI_0505, KANJI_0506, KANJI_0507, KANJI_0508,
								KANJI_0509, KANJI_0510, KANJI_0511, KANJI_0512,
								KANJI_0514, KANJI_0515, KANJI_0516, KANJI_0517,
								KANJI_0518, KANJI_0519, KANJI_0520, KANJI_0521,
								KANJI_0522, KANJI_0523, KANJI_0524, KANJI_0525,
								KANJI_0526, KANJI_0527, KANJI_0528, KANJI_0529,
								KANJI_0530, KANJI_0531, KANJI_0532, KANJI_0533,
								KANJI_0534, KANJI_0535, KANJI_0536, KANJI_0537,
								KANJI_0538, KANJI_0539, KANJI_0540, KANJI_0541,
								KANJI_0542, KANJI_0543, KANJI_0544, KANJI_0721};
		array.array = choices, array.size = 200;
		return array;
	}

	if (sbuf[0] == GEN_GE)
	{
		if (sbuf[1] == GEN_I)
		{
			static int choices[200]	= {KANJI_0498, KANJI_0499, KANJI_0500};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_KI)
		{
			static int choices[200]	= {KANJI_0501, KANJI_0502, KANJI_0503,
									KANJI_0504};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_TSU)
		{
			static int choices[200]	= {KANJI_0513};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_N)
		{
			static int choices[200]	= {KANJI_0297, KANJI_0532, KANJI_0543,
									KANJI_0545, KANJI_0546, KANJI_0547,
									KANJI_0548, KANJI_0549, KANJI_0550,
									KANJI_0551, KANJI_0552, KANJI_0553,
									KANJI_0554, KANJI_0555, KANJI_0556};
			array.array = choices, array.size = 200;
			return array;
		}

		static int choices[200]	= {KANJI_0131, KANJI_0146, KANJI_0164,
								KANJI_0191, KANJI_0197, KANJI_0297, KANJI_0498,
								KANJI_0499, KANJI_0500, KANJI_0501, KANJI_0502,
								KANJI_0503, KANJI_0504, KANJI_0513, KANJI_0532,
								KANJI_0543, KANJI_0545, KANJI_0546, KANJI_0547,
								KANJI_0548, KANJI_0549, KANJI_0550, KANJI_0551,
								KANJI_0552, KANJI_0553, KANJI_0554, KANJI_0555,
								KANJI_0556};
		array.array = choices, array.size = 200;
		return array;
	}

	if (sbuf[0] == GEN_KO)
	{
		if (sbuf[1] == GEN_U)
		{
			static int choices[200]	= {KANJI_0214, KANJI_0420, KANJI_0579,
									KANJI_0586, KANJI_0587, KANJI_0588,
									KANJI_0589, KANJI_0590, KANJI_0591,
									KANJI_0592, KANJI_0593, KANJI_0594,
									KANJI_0595, KANJI_0596, KANJI_0597,
									KANJI_0598, KANJI_0599, KANJI_0600,
									KANJI_0601, KANJI_0602, KANJI_0603,
									KANJI_0604, KANJI_0605, KANJI_0606,
									KANJI_0607, KANJI_0608, KANJI_0609,
									KANJI_0610, KANJI_0611, KANJI_0612,
									KANJI_0613, KANJI_0614, KANJI_0615,
									KANJI_0616, KANJI_0617, KANJI_0618,
									KANJI_0619, KANJI_0620, KANJI_0621,
									KANJI_0622, KANJI_0623, KANJI_0624,
									KANJI_0625, KANJI_0626, KANJI_0627,
									KANJI_0628, KANJI_0629, KANJI_0630,
									KANJI_0631, KANJI_0632, KANJI_0633,
									KANJI_0634, KANJI_0635, KANJI_0636,
									KANJI_0637, KANJI_0638, KANJI_0639,
									KANJI_0640, KANJI_0641, KANJI_0642,
									KANJI_0643, KANJI_0644, KANJI_0645,
									KANJI_0646, KANJI_0647, KANJI_0648};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_KU)
		{
			static int choices[200]	 = {KANJI_0655, KANJI_0656, KANJI_0657,
									KANJI_0658, KANJI_0659, KANJI_0660,
									KANJI_0661, KANJI_0662};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_KO)
		{
			if (sbuf[2] == GEN_NO)
			{
				static int choices[200]	= {KANJI_0359};
				array.array = choices, array.size = 200;
				return array;
			}

			if (sbuf[2] == GEN_RO)
			{
				if (sbuf[3] == GEN_YO)
				{
					static int choices[200]	= {KANJI_0176};
					array.array = choices, array.size = 200;
					return array;
				}

				static int choices[200]	= {KANJI_0176};
				array.array = choices, array.size = 200;
				return array;
			}

			static int choices[200]	= {KANJI_0176, KANJI_0359};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_TA)
		{
			static int choices[200]	= {KANJI_0108};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_TSU)
		{
			static int choices[200]	= {KANJI_0239, KANJI_0664};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_TO)
		{
			static int choices[200]	= {KANJI_0027, KANJI_0435, KANJI_0548};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_NO)
		{
			static int choices[200]	= {KANJI_0599};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_BA)
		{
			static int choices[200]	= {KANJI_0385};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_BU)
		{
			if (sbuf[2] == GEN_SHI)
			{
				static int choices[200]	= {KANJI_0525};
				array.array = choices, array.size = 200;
				return array;
			}

			static int choices[200]	= {KANJI_0525};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_MA)
		{
			static int choices[200]	= {KANJI_0665, KANJI_0670, KANJI_0703};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_RO)
		{
			if (sbuf[2] == GEN_MO)
			{
				static int choices[200]	= {KANJI_0016};
				array.array = choices, array.size = 200;
				return array;
			}

			static int choices[200]	= {KANJI_0016, KANJI_0667, KANJI_0735};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_WA)
		{
			static int choices[200]	= {KANJI_0193};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_N)
		{
			static int choices[200]	= {KANJI_0432, KANJI_0519, KANJI_0533,
									KANJI_0668, KANJI_0669, KANJI_0670,
									KANJI_0671, KANJI_0672, KANJI_0673,
									KANJI_0674, KANJI_0675, KANJI_0676,
									KANJI_0677, KANJI_0678, KANJI_0679};
			array.array = choices, array.size = 200;
			return array;
		}

		static int choices[200]	= {KANJI_0016, KANJI_0027, KANJI_0084,
								KANJI_0108, KANJI_0176, KANJI_0193, KANJI_0214, 
								KANJI_0239, KANJI_0359, KANJI_0382, KANJI_0385,
								KANJI_0386, KANJI_0388, KANJI_0420, KANJI_0423,
								KANJI_0432, KANJI_0435, KANJI_0519, KANJI_0525,
								KANJI_0533, KANJI_0548, KANJI_0556, KANJI_0557,
								KANJI_0558, KANJI_0559, KANJI_0560, KANJI_0561,
								KANJI_0562, KANJI_0563, KANJI_0564, KANJI_0565,
								KANJI_0566, KANJI_0567, KANJI_0568, KANJI_0569,
								KANJI_0570, KANJI_0571, KANJI_0572, KANJI_0573,
								KANJI_0574, KANJI_0579, KANJI_0586, KANJI_0587,
								KANJI_0588, KANJI_0589, KANJI_0590, KANJI_0591,
								KANJI_0592, KANJI_0593, KANJI_0594, KANJI_0595,
								KANJI_0596, KANJI_0597, KANJI_0598, KANJI_0599,
								KANJI_0600, KANJI_0601, KANJI_0602, KANJI_0603,
								KANJI_0604, KANJI_0605, KANJI_0606, KANJI_0607,
								KANJI_0608, KANJI_0609, KANJI_0610, KANJI_0611,
								KANJI_0612, KANJI_0613, KANJI_0614, KANJI_0615,
								KANJI_0616, KANJI_0617, KANJI_0618, KANJI_0619,
								KANJI_0620, KANJI_0621, KANJI_0622, KANJI_0623,
								KANJI_0624, KANJI_0625, KANJI_0626, KANJI_0627,
								KANJI_0628, KANJI_0629, KANJI_0630, KANJI_0631,
								KANJI_0632, KANJI_0633, KANJI_0634, KANJI_0635,
								KANJI_0636, KANJI_0637, KANJI_0638, KANJI_0639,
								KANJI_0640, KANJI_0641, KANJI_0642, KANJI_0643,
								KANJI_0644, KANJI_0645, KANJI_0646, KANJI_0647,
								KANJI_0648, KANJI_0655, KANJI_0656, KANJI_0657,
								KANJI_0658, KANJI_0659, KANJI_0660, KANJI_0661,
								KANJI_0662, KANJI_0664, KANJI_0665, KANJI_0666,
								KANJI_0667, KANJI_0668, KANJI_0669, KANJI_0670,
								KANJI_0671, KANJI_0672, KANJI_0673, KANJI_0674,
								KANJI_0675, KANJI_0676, KANJI_0677, KANJI_0678,
								KANJI_0679, KANJI_0703, KANJI_0735, KANJI_0755};
		array.array = choices, array.size = 200;
		return array;
	}

	if (sbuf[0] == GEN_GO)
	{
		if (sbuf[1] == GEN_U)
		{
			static int choices[200]	= {KANJI_0410, KANJI_0412, KANJI_0422,
									KANJI_0468, KANJI_0650, KANJI_0651,
									KANJI_0652, KANJI_0653, KANJI_0654};
			array.array = choices, array.size  = 9;
			return array;
		}

		if (sbuf[1] == GEN_KU)
		{
			static int choices[200]	= {KANJI_0426, KANJI_0663};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_N)
		{
			static int choices[200]	= {KANJI_0434, KANJI_0536, KANJI_0555};
			array.array = choices, array.size = 200;
			return array;
		}

		static int choices[200]	= {KANJI_0328, KANJI_0392, KANJI_0410,
								KANJI_0412, KANJI_0422, KANJI_0426, KANJI_0434,
								KANJI_0536, KANJI_0555, KANJI_0575, KANJI_0576,
								KANJI_0577, KANJI_0578, KANJI_0579, KANJI_0580,
								KANJI_0581, KANJI_0582, KANJI_0583, KANJI_0584, 
								KANJI_0585, KANJI_0468, KANJI_0650, KANJI_0651,
								KANJI_0652, KANJI_0653, KANJI_0654, KANJI_0663};
		array.array = choices, array.size = 200;
		return array;
	}

	if (sbuf[0] == GEN_SA)
	{
		if (sbuf[1] == GEN_I)
		{
			if (sbuf[2] == GEN_WA)
			{
				static int choices[200]	= {KANJI_0608};
				array.array = choices, array.size = 200;
				return array;
			}

			static int choices[200]	= {KANJI_0608, KANJI_0690, KANJI_0691,
									KANJI_0692, KANJI_0693, KANJI_0694,
									KANJI_0695, KANJI_0696, KANJI_0697, 
									KANJI_0698, KANJI_0699, KANJI_0700,
									KANJI_0701, KANJI_0702, KANJI_0703,
									KANJI_0704, KANJI_0705, KANJI_0706, 
									KANJI_0707, KANJI_0708, KANJI_0709,
									KANJI_0710, KANJI_0711, KANJI_0712,
									KANJI_0713, KANJI_0717, KANJI_0735};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_KA)
		{
			if (sbuf[2] == GEN_I)
			{
				static int choices[200]	= {KANJI_0413};
				array.array = choices, array.size = 200;
				return array;
			}

			if (sbuf[2] == GEN_NA)
			{
				static int choices[200]	= {KANJI_0391};
				array.array = choices, array.size = 200;
				return array;
			}

			static int choices[200]	= {KANJI_0072, KANJI_0357, KANJI_0391,
									KANJI_0413};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_KI)
		{
			static int choices[200]	= {KANJI_0719};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_KU)
		{
			if (sbuf[2] == GEN_RA)
			{
				static int choices[200]	= {KANJI_0114};
				array.array = choices, array.size = 200;
				return array;
			}
			
			static int choices[200]	= {KANJI_0114, KANJI_0720, KANJI_0721,
									KANJI_0722, KANJI_0723, KANJI_0724,
									KANJI_0725, KANJI_0726, KANJI_0727,
									KANJI_0728, KANJI_0729, KANJI_0730};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_KE)
		{
			static int choices[200]	= {KANJI_0396};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_SA)
		{
			static int choices[200]	= {KANJI_0758};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_CHI)
		{
			static int choices[200]	= {KANJI_0608};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_TSU)
		{
			static int choices[200]	= {KANJI_0730, KANJI_0731, KANJI_0732,
									KANJI_0733, KANJI_0734, KANJI_0735,
									KANJI_0736, KANJI_0737, KANJI_0738};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_TO)
		{
			static int choices[200]	= {KANJI_0581};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_BA)
		{
			static int choices[200]	= {KANJI_0706};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_MU)
		{
			static int choices[200]	= {KANJI_0263};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_RA)
		{
			static int choices[200]	= {KANJI_0606, KANJI_0740};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_RU)
		{
			static int choices[200]	= {KANJI_0097};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_N)
		{
			static int choices[200]	= {KANJI_0741, KANJI_0742, KANJI_0743,
									KANJI_0744, KANJI_0745, KANJI_0746,
									KANJI_0747, KANJI_0748, KANJI_0749,
									KANJI_0750, KANJI_0751, KANJI_0752};
			array.array = choices, array.size = 200;
			return array;
		}

		static int choices[200]	= {KANJI_0072, KANJI_0097, KANJI_0114,
								KANJI_0131, KANJI_0218, KANJI_0237, KANJI_0263,
								KANJI_0357, KANJI_0382, KANJI_0391, KANJI_0392,
								KANJI_0413, KANJI_0581, KANJI_0606, KANJI_0608,
								KANJI_0679, KANJI_0680, KANJI_0681, KANJI_0682,
								KANJI_0683, KANJI_0684, KANJI_0685, KANJI_0686,
								KANJI_0687, KANJI_0690, KANJI_0691, KANJI_0692,
								KANJI_0693, KANJI_0694, KANJI_0695, KANJI_0696,
								KANJI_0697, KANJI_0698, KANJI_0699, KANJI_0700,
								KANJI_0701, KANJI_0702, KANJI_0703, KANJI_0704,
								KANJI_0705, KANJI_0706, KANJI_0707, KANJI_0708,
								KANJI_0709, KANJI_0710, KANJI_0711, KANJI_0712,
								KANJI_0713, KANJI_0717, KANJI_0719, KANJI_0720,
								KANJI_0721, KANJI_0722, KANJI_0723, KANJI_0724,
								KANJI_0725, KANJI_0726, KANJI_0727, KANJI_0728,
								KANJI_0729, KANJI_0731, KANJI_0732, KANJI_0733,
								KANJI_0734, KANJI_0735, KANJI_0736, KANJI_0737,
								KANJI_0738, KANJI_0740, KANJI_0741, KANJI_0742,
								KANJI_0743, KANJI_0744, KANJI_0745, KANJI_0746,
								KANJI_0747, KANJI_0748, KANJI_0749, KANJI_0750,
								KANJI_0751, KANJI_0752, KANJI_0758};
		array.array = choices, array.size = 200;
		return array;
	}

	if (sbuf[0] == GEN_ZA)
	{
		if (sbuf[1] == GEN_I)
		{
			static int choices[200]	= {KANJI_0713, KANJI_0714, KANJI_0715,
									KANJI_0716, KANJI_0717};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_TSU)
		{
			static int choices[200]	= {KANJI_0739};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_N)
		{
			static int choices[200]	= {KANJI_0746, KANJI_0753, KANJI_0754,
									KANJI_0755};
			array.array = choices, array.size = 200;
			return array;
		}

		static int choices[200]	= {KANJI_0688, KANJI_0689, KANJI_0713,
								KANJI_0714, KANJI_0715, KANJI_0716, KANJI_0717,
								KANJI_0739, KANJI_0746, KANJI_0753, KANJI_0754,
								KANJI_0755};
		array.array = choices, array.size = 200;
		return array;
	}

	if (sbuf[0] == GEN_SHI)
	{
		if (sbuf[1] == GEN_A)
		{
			if (sbuf[2] == GEN_WA)
			{
				static int choices[200]	= {KANJI_0608};
				array.array = choices, array.size = 200;
				return array;
			}

			static int choices[200]	= {KANJI_0608};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_I)
		{
			if (sbuf[2] == GEN_TA)
			{
				static int choices[200]	= {KANJI_0358};
				array.array = choices, array.size = 200;
				return array;
			}

			static int choices[200]	= {KANJI_0358};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_O)
		{
			static int choices[200]	= {KANJI_0100};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_TA)
		{
			static int choices[200]	= {KANJI_0131};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_BO)
		{
			static int choices[200]	= {KANJI_0635, KANJI_0727};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_MO)
		{
			static int choices[200]	= {KANJI_0131};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_YA_SMALL)
		{
			static int choices[200]	= {KANJI_0683};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_RU)
		{
			if (sbuf[2] == GEN_SHI)
			{
				static int choices[200]	= {KANJI_0047};
				array.array = choices, array.size = 200;
				return array;
			}

			static int choices[200]	= {KANJI_0047, KANJI_0316};
			array.array = choices, array.size = 200;
			return array;
		}

		static int choices[200]	= {KANJI_0047, KANJI_0100, KANJI_0131,
								KANJI_0316, KANJI_0358, KANJI_0410, KANJI_0608,
								KANJI_0635, KANJI_0683, KANJI_0727, KANJI_0756,
								KANJI_0757, KANJI_0758, KANJI_0759, KANJI_0760,
								KANJI_0761, KANJI_0762, KANJI_0763, KANJI_0764,
								KANJI_0765, KANJI_0766, KANJI_0767, KANJI_0768,
								KANJI_0769, KANJI_0770, KANJI_0771, KANJI_0772,
								KANJI_0773, KANJI_0774, KANJI_0775, KANJI_0776,
								KANJI_0777, KANJI_0778, KANJI_0779, KANJI_0780,
								KANJI_0781, KANJI_0782, KANJI_0783};
		array.array = choices, array.size = 200;
		return array;
	}

	if (sbuf[0] == GEN_JI)
	{
		static int choices[200]	= {KANJI_0761};
		array.array = choices, array.size = 200;
		return array;
	}

	if (sbuf[0] == GEN_SU)
	{
		if (sbuf[1] == GEN_KI)
		{
			static int choices[200]	= {KANJI_0501};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_KU)
		{
			static int choices[200]	= {KANJI_0375};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_KO)
		{
			static int choices[200]	= {KANJI_0527};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_JI)
		{
			static int choices[200]	= {KANJI_0436};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_SU)
		{
			static int choices[200]	= {KANJI_0280};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_DE)
		{
			static int choices[200]	= {KANJI_0315};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_NA)
		{
			static int choices[200]	= {KANJI_0683};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_BE)
		{
			static int choices[200]	= {KANJI_0239};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_MI)
		{
			static int choices[200]	= {KANJI_0455};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_RU)
		{
			if (sbuf[2] == GEN_DO)
			{
				static int choices[200]	= {KANJI_0076};
				array.array = choices, array.size = 200;
				return array;
			}

			static int choices[200]	= {KANJI_0076};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_WA)
		{
			static int choices[200]	= {KANJI_0688};
			array.array = choices, array.size = 200;
			return array;
		}

		static int choices[200]	= {KANJI_0076, KANJI_0153, KANJI_0237,
								KANJI_0272, KANJI_0315, KANJI_0365, KANJI_0375,
								KANJI_0436, KANJI_0455, KANJI_0501, KANJI_0527,
								KANJI_0599, KANJI_0683, KANJI_0688, KANJI_0700,
								KANJI_0726, KANJI_0732, KANJI_0738, KANJI_0751,
								KANJI_0757};
		array.array = choices, array.size = 200;
		return array;
	}

	if (sbuf[0] == GEN_SE)
	{
		if (sbuf[1] == GEN_I)
		{
			static int choices[200]	= {KANJI_0710};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_KI)
		{
			static int choices[200]	= {KANJI_0279};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_TSU)
		{
			static int choices[200]	= {KANJI_0733, KANJI_0735};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_BA)
		{
			static int choices[200]	= {KANJI_0405};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_MA)
		{
			static int choices[200]	= {KANJI_0405};
			array.array = choices, array.size = 200;
			return array;
		}

		static int choices[200]	= {KANJI_0279, KANJI_0405, KANJI_0417,
								KANJI_0605, KANJI_0710, KANJI_0733, KANJI_0735};
		array.array = choices, array.size = 200;
		return array;
	}

	if (sbuf[0] == GEN_SO)
	{
		if (sbuf[1] == GEN_U)
		{
			if (sbuf[2] == GEN_SO)
			{
				if (sbuf[3] == GEN_U)
				{
					static int choices[200]	= {KANJI_0620};
					array.array = choices, array.size = 200;
					return array;
				}

				static int choices[200]	= {KANJI_0620};
				array.array = choices, array.size = 200;
				return array;
			}

			static int choices[200]	= {KANJI_0620};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_KU)
		{
			static int choices[200]	= {KANJI_0709};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_SO)
		{
			if (sbuf[2] == GEN_NO)
			{
				if (sbuf[3] == GEN_KA)
				{
					static int choices[200]	= {KANJI_0684};
					array.array = choices, array.size = 200;
					return array;
				}

				static int choices[200]	= {KANJI_0684};
				array.array = choices, array.size = 200;
				return array;
			}

			static int choices[200]	= {KANJI_0684};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_DA)
		{
			static int choices[200]	= {KANJI_0040};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_TO)
		{
			static int choices[200]	= {KANJI_0197};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_NA)
		{
			static int choices[200]	= {KANJI_0400};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_NO)
		{
			static int choices[200]	= {KANJI_0095};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_RA)
		{
			static int choices[200]	= {KANJI_0452};
			array.array = choices, array.size = 200;
			return array;
		}	

		static int choices[200]	= {KANJI_0040, KANJI_0089, KANJI_0095,
								KANJI_0197, KANJI_0400, KANJI_0452, KANJI_0620,
								KANJI_0709};
		array.array = choices, array.size = 200;
		return array;
	}

	if (sbuf[0] == GEN_ZO)
	{
		if (sbuf[1] == GEN_N)
		{
			static int choices[200]	= {KANJI_0739};
			array.array = choices, array.size = 200;
			return array;
		}

		static int choices[200]	= {KANJI_0739};
		array.array = choices, array.size = 200;
		return array;
	}

	if (sbuf[0] == GEN_TA)
	{
		if (sbuf[1] == GEN_KA)
		{
			static int choices[200]	= {KANJI_0626};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_GA)
		{
			if (sbuf[2] == GEN_YA)
			{
				static int choices[200]	= {KANJI_0622};
				array.array = choices, array.size = 200;
				return array;
			}

			static int choices[200]	= {KANJI_0576, KANJI_0622};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_KU)
		{
			static int choices[200]	= {KANJI_0592};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_KE)
		{
			static int choices[200]	= {KANJI_0227};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_SHI)
		{
			static int choices[200]	= {KANJI_0222};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_ZU)
		{
			if (sbuf[2] == GEN_SA)
			{
				static int choices[200]	= {KANJI_0489};
				array.array = choices, array.size = 200;
				return array;
			}

			static int choices[200]	= {KANJI_0489};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_TSU_SMALL)
		{
			if (sbuf[2] == GEN_TO)
			{
				static int choices[200]	= {KANJI_0330};
				array.array = choices, array.size = 200;
				return array;
			}

			static int choices[200]	= {KANJI_0330};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_NI)
		{
			static int choices[200]	= {KANJI_0657};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_MA)
		{
			if (sbuf[2] == GEN_SHI)
			{
				if (sbuf[3] == GEN_I)
				{
					static int choices[200]	= {KANJI_0676};
					array.array = choices, array.size = 200;
					return array;
				}

				static int choices[200]	= {KANJI_0676};
				array.array = choices, array.size = 200;
				return array;
			}

			static int choices[200]	= {KANJI_0376, KANJI_0676};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_NO)
		{
			static int choices[200]	= {KANJI_0228};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_WA)
		{
			if (sbuf[2] == GEN_MU)
			{
				static int choices[200]	= {KANJI_0346};
				array.array = choices, array.size = 200;
				return array;
			}

			static int choices[200]	= {KANJI_0346};
			array.array = choices, array.size = 200;
			return array;
		}

		static int choices[200]	= {KANJI_0222, KANJI_0227, KANJI_0228,
								KANJI_0265, KANJI_0330, KANJI_0346, KANJI_0376,
								KANJI_0415, KANJI_0489, KANJI_0576, KANJI_0592,
								KANJI_0622, KANJI_0626, KANJI_0657, KANJI_0676,
								KANJI_0706};
		array.array = choices, array.size = 200;
		return array;
	}

	if (sbuf[0] == GEN_CHI)
	{
		if (sbuf[1] == GEN_KA)
		{
			static int choices[200]	= {KANJI_0431};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_GA)
		{
			static int choices[200]	= {KANJI_0034};
			array.array = choices, array.size = 200;
			return array;
		}
		
		if (sbuf[1] == GEN_GI)
		{
			static int choices[200]	= {KANJI_0477};
			array.array = choices, array.size = 200;
			return array;
		}

		static int choices[200]	= {KANJI_0034, KANJI_0431, KANJI_0477,
								KANJI_0508, KANJI_0749};
		array.array = choices, array.size = 200;
		return array;
	}

	if (sbuf[0] == GEN_TSU)
	{
		if (sbuf[1] == GEN_KA)
		{
			static int choices[200]	= {KANJI_0535, KANJI_0761};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_KI)
		{
			static int choices[200]	=	 {KANJI_0513};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_KU)
		{
			if (sbuf[2] == GEN_E)
			{
				static int choices[200]	= {KANJI_0304};
				array.array = choices, array.size = 200;
				return array;
			}

			static int choices[200]	= {KANJI_0304, KANJI_0720};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_TSU)
		{
			if (sbuf[2] == GEN_SHI)
			{
				static int choices[200]	= {KANJI_0441};
				array.array = choices, array.size = 200;
				return array;
			}

			static int choices[200]	= {KANJI_0441};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_ZU_TSU)
		{
			if (sbuf[2] == GEN_MI)
			{
				static int choices[200]	= {KANJI_0572};
				array.array = choices, array.size = 200;
				return array;
			}

			static int choices[200]	= {KANJI_0572};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_TO)
		{
			static int choices[200]	= {KANJI_0434};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_NA)
		{
			static int choices[200]	= {KANJI_0640};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_NO)
		{
			static int choices[200]	= {KANJI_0211};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_BU)
		{
			static int choices[200]	= {KANJI_0192};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_MA)
		{
			static int choices[200]	= {KANJI_0693};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_MI)
		{
			static int choices[200]	= {KANJI_0718};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_YA)
		{
			static int choices[200]	= {KANJI_0103};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_YO)
		{
			static int choices[200]	= {KANJI_0410};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_RA)
		{
			if (sbuf[2] == GEN_NU)
			{
				static int choices[200]	= {KANJI_0262};
				array.array = choices, array.size = 200;
				return array;
			}

			static int choices[200]	= {KANJI_0262};
			array.array = choices, array.size = 200;
			return array;
		}
		
		if (sbuf[1] == GEN_RU)
		{
			if (sbuf[2] == GEN_GI)
			{
				static int choices[200]	= {KANJI_0524};
				array.array = choices, array.size = 200;
				return array;
			}

			static int choices[200]	= {KANJI_0524, KANJI_0549};
			array.array = choices, array.size = 200;
			return array;
		}

		static int choices[200]	= {KANJI_0103, KANJI_0211, KANJI_0262,
								KANJI_0304, KANJI_0353, KANJI_0410, KANJI_0434,
								KANJI_0441, KANJI_0490, KANJI_0513, KANJI_0524,
								KANJI_0535, KANJI_0549, KANJI_0572, KANJI_0640,
								KANJI_0656, KANJI_0693, KANJI_0718, KANJI_0720,
								KANJI_0761};
		array.array = choices, array.size = 200;
		return array;
	}

	if (sbuf[0] == GEN_TO)
	{
		if (sbuf[1] == GEN_U)
		{
			if (sbuf[2] == GEN_TO)
			{
				static int choices[200]	= {KANJI_0330};
				array.array = choices, array.size = 200;
				return array;
			}

			static int choices[200]	= {KANJI_0330};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_O)
		{
			static int choices[200]	= {KANJI_0098};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_TSU)
		{
			static int choices[200]	= {KANJI_0154};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_MO)
		{
			static int choices[200]	= {KANJI_0395, KANJI_0400};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_RA)
		{
			static int choices[200]	= {KANJI_0562};
			array.array = choices, array.size = 200;
			return array;
		}

		static int choices[200]	= {KANJI_0098, KANJI_0154, KANJI_0191,
								KANJI_0330, KANJI_0395, KANJI_0400, KANJI_0520,
								KANJI_0557, KANJI_0562, KANJI_0699, KANJI_0737,
								KANJI_0759};
		array.array = choices, array.size = 200;
		return array;
	}

	if (sbuf[0] == GEN_NA)
	{
		if (sbuf[1] == GEN_GA)
		{
			static int choices[200]	= {KANJI_0068};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_GU)
		{
			if (sbuf[2] == GEN_SA)
			{
				static int choices[200]	= {KANJI_0036};
				array.array = choices, array.size = 200;
				return array;
			}

			static int choices[200]	= {KANJI_0036, KANJI_0113};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_TSU)
		{
			static int choices[200]	= {KANJI_0146, KANJI_0194};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_NI)
		{
			static int choices[200]	= {KANJI_0137};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_MA)
		{
			if (sbuf[2] == GEN_RI)
			{
				static int choices[200]	= {KANJI_0099};
				array.array = choices, array.size = 200;
				return array;
			}

			static int choices[200]	= {KANJI_0099};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_ME)
		{
			static int choices[200]	= {KANJI_0239};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_N)
		{
			static int choices[200]	= {KANJI_0137};
			array.array = choices, array.size = 200;
			return array;
		}

		static int choices[200]	= {KANJI_0029, KANJI_0036, KANJI_0068,
								KANJI_0099, KANJI_0113, KANJI_0137, KANJI_0146,
								KANJI_0194, KANJI_0239, KANJI_0277, KANJI_0370,
								KANJI_0704};
		array.array = choices, array.size = 200;
		return array;
	}

	if (sbuf[0] == GEN_NI)
	{
		if (sbuf[1] == GEN_GA)
		{
			static int choices[200]	= {KANJI_0447};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_GI)
		{
			static int choices[200]	= {KANJI_0007};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_SHI)
		{
			if (sbuf[2] == GEN_KI)
			{
				static int choices[200]	= {KANJI_0440};
				array.array = choices, array.size = 200;
				return array;
			}

			static int choices[200]	= {KANJI_0440};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_SE)
		{
			static int choices[200]	= {KANJI_0341};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_WA)
		{
			if (sbuf[2] == GEN_TO)
			{
				if (sbuf[3] == GEN_RI)
				{
					static int choices[200]	= {KANJI_0497};
					array.array = choices, array.size = 200;
					return array;
				}

				static int choices[200]	= {KANJI_0497};
				array.array = choices, array.size = 200;
				return array;
			}

			static int choices[200]	= {KANJI_0497};
			array.array = choices, array.size = 200;
			return array;
		}

		static int choices[200]	= {KANJI_0007, KANJI_0148, KANJI_0341,
								KANJI_0440, KANJI_0447, KANJI_0497};
		array.array = choices, array.size = 200;
		return array;
	}

	if (sbuf[0] == GEN_NE)
	{
		if (sbuf[1] == GEN_GA)
		{
			static int choices[200]	= {KANJI_0300};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_N)
		{
			if (sbuf[2] == GEN_GO)
			{
				static int choices[200]	= {KANJI_0678};
				array.array = choices, array.size = 200;
				return array;
			}

			static int choices[200]	= {KANJI_0678};
			array.array = choices, array.size = 200;
			return array;
		}

		static int choices[200]	= {KANJI_0127, KANJI_0300, KANJI_0672,
								KANJI_0678};
		array.array = choices, array.size = 200;
		return array;
	}

	if (sbuf[0] == GEN_NO)
	{
		if (sbuf[1] == GEN_KI)
		{
			static int choices[200]	= {KANJI_0526};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_KO)
		{
			static int choices[200]	= {KANJI_0753};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_CHI)
		{
			static int choices[200]	= {KANJI_0579};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_DO)
		{
			static int choices[200]	= {KANJI_0631};
			array.array = choices, array.size = 200;
			return array;
		}

		static int choices[200]	= {KANJI_0055, KANJI_0088, KANJI_0526,
								KANJI_0579, KANJI_0631, KANJI_0711, KANJI_0753};
		array.array = choices, array.size = 200;
		return array;
	}

	if (sbuf[0] == GEN_HA)
	{
		if (sbuf[1] == GEN_I)
		{
			static int choices[200]	= {KANJI_0174};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_GU)
		{
			if (sbuf[2] == GEN_KU)
			{
				static int choices[200]	= {KANJI_0040};
				array.array = choices, array.size = 200;
				return array;
			}

			static int choices[200]	= {KANJI_0040};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_GE)
		{
			static int choices[200]	= {KANJI_0504};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_KA)
		{
			static int choices[200]	= {KANJI_0478};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_KO)
		{
			static int choices[200]	= {KANJI_0066};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_SA)
		{
			static int choices[200]	= {KANJI_0404};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_SHI)
		{
			static int choices[200]	= {KANJI_0414};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_TA)
		{
			static int choices[200]	= {KANJI_0333, KANJI_0337};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_ZU)
		{
			static int choices[200]	= {KANJI_0197};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_NA)
		{
			static int choices[200]	= {KANJI_0138, KANJI_0149};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_NE)
		{
			static int choices[200]	= {KANJI_0060};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_BA)
		{
			if (sbuf[2] == GEN_NE)
			{
				static int choices[200]	= {KANJI_0645};
				array.array = choices, array.size = 200;
				return array;
			}

			static int choices[200]	= {KANJI_0645};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_RA)
		{
			static int choices[200]	= {KANJI_0550};
			array.array = choices,array.size = 200;
			return array;
		}

		static int choices[200]	= {KANJI_0040, KANJI_0060, KANJI_0066,
								KANJI_0071, KANJI_0072, KANJI_0138, KANJI_0141,
								KANJI_0149, KANJI_0174, KANJI_0197, KANJI_0333,
								KANJI_0337, KANJI_0404, KANJI_0414, KANJI_0478,
								KANJI_0504, KANJI_0550, KANJI_0645};
		array.array = choices, array.size = 200;
		return array;
	}

	if (sbuf[0] == GEN_BA)
	{
		static int choices[200]	= {KANJI_0132};
		array.array = choices, array.size = 200;
		return array;
	}

	if (sbuf[0] == GEN_HI)
	{
		if (sbuf[1] == GEN_KA)
		{
			if (sbuf[2] == GEN_RI)
			{
				static int choices[200]	= {KANJI_0596};
				array.array = choices, array.size = 200;
				return array;
			}

			static int choices[200]	= {KANJI_0596, KANJI_0628};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_SA)
		{
			static int choices[200]	= {KANJI_0360};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_TA)
		{
			if (sbuf[2] == GEN_I)
			{
				static int choices[200]	= {KANJI_0229};
				array.array = choices, array.size = 200;
				return array;
			}

			static int choices[200]	= {KANJI_0229};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_DA)
		{
			if (sbuf[2] == GEN_RI)
			{
				static int choices[200]	= {KANJI_0679};
				array.array = choices, array.size = 200;
				return array;
			}

			static int choices[200]	= {KANJI_0679};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_TO)
		{
			static int choices[200]	= {KANJI_0041};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_BI)
		{
			static int choices[200]	= {KANJI_0418};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_MA)
		{
			static int choices[200]	= {KANJI_0155};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_RA)
		{
			static int choices[200]	= {KANJI_0187};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_RU)
		{
			static int choices[200]	= {KANJI_0247};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_RO)
		{
			static int choices[200]	= {KANJI_0593};
			array.array = choices, array.size = 200;
			return array;
		}

		static int choices[200]	= {KANJI_0041, KANJI_0046, KANJI_0133,
								KANJI_0155, KANJI_0187, KANJI_0229, KANJI_0247,
								KANJI_0360, KANJI_0418, KANJI_0593, KANJI_0596,
								KANJI_0628, KANJI_0679};
		array.array = choices, array.size = 200;
		return array;
	}

	if (sbuf[0] == GEN_FU)
	{
		if (sbuf[1] == GEN_KU)
		{
			static int choices[200]	= {KANJI_0293};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_SA)
		{
			static int choices[200]	= {KANJI_0709};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_TA)
		{
			if (sbuf[2] == GEN_TA)
			{
				static int choices[200]	= {KANJI_0691};
				array.array = choices, array.size = 200;
				return array;
			}

			static int choices[200]	= {KANJI_0204, KANJI_0691};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_DA)
		{
			static int choices[200]	= {KANJI_0730};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_CHI)
		{
			static int choices[200]	= {KANJI_0102};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_TO)
		{
			if (sbuf[2] == GEN_KO)
			{
				if (sbuf[3] == GEN_RO)
				{
					static int choices[200]	= {KANJI_0194};
					array.array = choices, array.size = 200;
					return array;
				}

				static int choices[200]	= {KANJI_0194};
				array.array = choices, array.size = 200;
				return array;
			}

			static int choices[200]	= {KANJI_0194};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_RU)
		{
			static int choices[200]	= {KANJI_0558};
			array.array = choices, array.size = 200;
			return array;
		}

		static int choices[200]	= {KANJI_0102, KANJI_0194, KANJI_0204,
								KANJI_0293, KANJI_0558, KANJI_0606, KANJI_0625,
								KANJI_0691, KANJI_0709, KANJI_0730};
		array.array = choices, array.size = 200;
		return array;
	}

	if (sbuf[0] == GEN_HE)
	{
		if (sbuf[1] == GEN_DA)
		{
			static int choices[200]	= {KANJI_0220};
			array.array = choices, array.size = 200;
			return array;
		}

		static int choices[200]	= {KANJI_0220, KANJI_0483, KANJI_0553};
		array.array = choices, array.size = 200;
		return array;
	}

	if (sbuf[0] == GEN_BE)
	{
		if (sbuf[1] == GEN_NI)
		{
			static int choices[200]	= {KANJI_0616};
			array.array = choices, array.size = 200;
			return array;
		}

		static int choices[200]	= {KANJI_0616};
		array.array = choices, array.size = 200;
		return array;
	}

	if (sbuf[0] == GEN_HO)
	{
		if (sbuf[1] == GEN_KA)
		{
			static int choices[200]	= {KANJI_0197};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_KO)
		{
			static int choices[200]	= {KANJI_0571};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_SO)
		{
			static int choices[200]	= {KANJI_0703};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_TA)
		{
			if (sbuf[2] == GEN_RU)
			{
				static int choices[200]	= {KANJI_0484};
				array.array = choices, array.size = 200;
				return array;
			}

			static int choices[200]	= {KANJI_0484};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_NE)
		{
			static int choices[200]	= {KANJI_0664};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_NO)
		{
			if (sbuf[2] == GEN_O)
			{
				static int choices[200]	= {KANJI_0090};
				array.array = choices, array.size = 200;
				return array;
			}

			static int choices[200]	= {KANJI_0090};
			array.array = choices, array.size = 200;
			return array;
		}

		static int choices[200]	= {KANJI_0090, KANJI_0133, KANJI_0197,
								KANJI_0247, KANJI_0458, KANJI_0484, KANJI_0571,
								KANJI_0664, KANJI_0703};
		array.array = choices, array.size = 200;
		return array;
	}

	if (sbuf[0] == GEN_MA)
	{
		if (sbuf[1] == GEN_I)
		{
			static int choices[200]	= {KANJI_0743};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_KI)
		{
			static int choices[200]	= {KANJI_0256};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_TA)
		{
			if (sbuf[2] == GEN_KO)
			{
				static int choices[200]	= {KANJI_0297};
				array.array = choices, array.size = 200;
				return array;
			}

			static int choices[200]	= {KANJI_0297, KANJI_0560};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_TSU)
		{
			static int choices[200]	= {KANJI_0701};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_CHI)
		{
			static int choices[200]	= {KANJI_0202};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_NA)
		{
			static int choices[200]	= {KANJI_0226};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_BO)
		{
			if (sbuf[2] == GEN_RO)
			{
				if (sbuf[3] == GEN_SHI)
				{
					static int choices[200]	= {KANJI_0546};
					array.array = choices, array.size = 200;
					return array;
				}

				static int choices[200]	= {KANJI_0546};
				array.array = choices, array.size = 200;
				return array;
			}

			static int choices[200]	= {KANJI_0546};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_YU)
		{
			static int choices[200]	= {KANJI_0541};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_RU)
		{
			static int choices[200]	= {KANJI_0087, KANJI_0292};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_WA)
		{
			static int choices[200]	= {KANJI_0173};
			array.array = choices, array.size = 200;
			return array;
		}

		static int choices[200]	= {KANJI_0087, KANJI_0173, KANJI_0202,
								KANJI_0226, KANJI_0256, KANJI_0270, KANJI_0292,
								KANJI_0297, KANJI_0424, KANJI_0541, KANJI_0546,
								KANJI_0595, KANJI_0674, KANJI_0701, KANJI_0743};
		array.array = choices, array.size = 200;
		return array;
	}

	if (sbuf[0] == GEN_MI)
	{
		if (sbuf[1] == GEN_KI)
		{
			static int choices[200]	= {KANJI_0274};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_GI)
		{
			static int choices[200]	= {KANJI_0058};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_JI)
		{
			static int choices[200]	= {KANJI_0746};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_ZU)
		{
			if (sbuf[2] == GEN_U)
			{
				if (sbuf[3] == GEN_MI)
				{
					static int choices[200]	= {KANJI_0569};
					array.array = choices, array.size = 200;
					return array;
				}

				static int choices[200]	= {KANJI_0569};
				array.array = choices, array.size = 200;
				return array;
			}

			static int choices[200]	= {KANJI_0569};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_ZO)
		{
			static int choices[200]	= {KANJI_0637};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_DA)
		{
			static int choices[200]	= {KANJI_0053};
			array.array = choices, array.size = 200;
			return array;
		}
		
		if (sbuf[1] == GEN_TSU)
		{
			static int choices[200]	= {KANJI_0624};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_NA)
		{
			if (sbuf[2] == GEN_TO)
			{
				static int choices[200]	= {KANJI_0633};
				array.array = choices, array.size = 200;
				return array;
			}

			if (sbuf[2] == GEN_MO)
			{
				if (sbuf[3] == GEN_TO)
				{
					static int choices[200]	= {KANJI_0554};
					array.array = choices, array.size = 200;
					return array;
				}
				
				static int choices[200]	= {KANJI_0554};
				array.array = choices, array.size = 200;
				return array;
			}

			static int choices[200]	= {KANJI_0184, KANJI_0554, KANJI_0633};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_YA)
		{
			static int choices[200]	= {KANJI_0374};
			array.array = choices, array.size = 200;
			return array;
		}

		static int choices[200]	= {KANJI_0053, KANJI_0058, KANJI_0184,
								KANJI_0274, KANJI_0374, KANJI_0516, KANJI_0554,
								KANJI_0569, KANJI_0624, KANJI_0633, KANJI_0637,
								KANJI_0741, KANJI_0746};
		array.array = choices, array.size = 200;
		return array;
	}

	if (sbuf[0] == GEN_MU)
	{
		if (sbuf[1] == GEN_KA)
		{
			static int choices[200]	= {KANJI_0499};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_SU)
		{
			static int choices[200]	= {KANJI_0510};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_NA)
		{
			static int choices[200]	= {KANJI_0408};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_NE)
		{
			static int choices[200]	= {KANJI_0408, KANJI_0767};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_RA)
		{
			static int choices[200]	= {KANJI_0468};
			array.array = choices, array.size = 200;
			return array;
		}

		static int choices[200]	= {KANJI_0408, KANJI_0468, KANJI_0499,
								KANJI_0510, KANJI_0597, KANJI_0767};
		array.array = choices, array.size = 200;
		return array;
	}

	if (sbuf[0] == GEN_ME)
	{
		if (sbuf[1] == GEN_GU)
		{
			static int choices[200]	= {KANJI_0479};
			array.array = choices, array.size = 200;
			return array;
		}

		static int choices[200]	= {KANJI_0168, KANJI_0479};
		array.array = choices, array.size = 200;
		return array;
	}

	if (sbuf[0] == GEN_MO)
	{
		if (sbuf[1] == GEN_U)
		{
			static int choices[200]	= {KANJI_0491};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_TSU_SMALL)
		{
			if (sbuf[2] == GEN_TO)
			{
				static int choices[200]	= {KANJI_0705};
				array.array = choices, array.size = 200;
				return array;
			}

			static int choices[200]	= {KANJI_0705};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_TO)
		{
			if (sbuf[2] == GEN_I)
			{
				static int choices[200]	= {KANJI_0321};
				array.array = choices, array.size = 200;
				return array;
			}

			static int choices[200]	= {KANJI_0131, KANJI_0321, KANJI_0368,
									KANJI_0545};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_YO)
		{
			if (sbuf[2] == GEN_O)
			{
				static int choices[200]	= {KANJI_0708};
				array.array = choices, array.size = 200;
				return array;
			}

			static int choices[200]	= {KANJI_0708};
			array.array = choices, array.size = 200;
			return array;
		}

		static int choices[200]	= {KANJI_0131, KANJI_0321, KANJI_0368,
								KANJI_0491, KANJI_0545, KANJI_0705, KANJI_0708};
		array.array = choices, array.size = 200;
		return array;
	}

	if (sbuf[0] == GEN_YA)
	{
		if (sbuf[1] == GEN_KA)
		{
			if (sbuf[2] == GEN_TA)
			{
				static int choices[200]	= {KANJI_0285};
				array.array = choices, array.size = 200;
				return array;
			}

			static int choices[200]	= {KANJI_0285};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_KU)
		{
			static int choices[200]	= {KANJI_0079, KANJI_0080};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_SA)
		{
			static int choices[200]	= {KANJI_0078};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_SU)
		{
			static int choices[200]	= {KANJI_0012, KANJI_0364};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_TO)
		{
			static int choices[200]	= {KANJI_0570};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_MA)
		{
			static int choices[200]	= {KANJI_0742};
			array.array = choices, array.size = 200;
			return array;
		}

		static int choices[200]	= {KANJI_0012, KANJI_0078, KANJI_0079,
								KANJI_0080, KANJI_0119, KANJI_0147, KANJI_0285,
								KANJI_0364, KANJI_0570, KANJI_0742, KANJI_0766};
		array.array = choices, array.size = 200;
		return array;
	}

	if (sbuf[0] == GEN_YU)
	{
		if (sbuf[1] == GEN_I)
		{
			static int choices[200]	= {KANJI_0037};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_E)
		{
			static int choices[200]	= {KANJI_0565};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_U)
		{
			static int choices[200]	= {KANJI_0058};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_DA)
		{
			static int choices[200]	= {KANJI_0021};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_MI)
		{
			static int choices[200]	= {KANJI_0361};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_RU)
		{
			static int choices[200]	= {KANJI_0282, KANJI_0389};
			array.array = choices, array.size = 200;
			return array;
		}

		static int choices[200]	= {KANJI_0021, KANJI_0037, KANJI_0058,
								KANJI_0282, KANJI_0361, KANJI_0389, KANJI_0510,
								KANJI_0565, KANJI_0601};
		array.array = choices, array.size = 200;
		return array;
	}

	if (sbuf[0] == GEN_YO)
	{
		if (sbuf[1] == GEN_KU)
		{
			static int choices[200]	= {KANJI_0117};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_GO)
		{
			static int choices[200]	= {KANJI_0104};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_TSU_SMALL)
		{
			static int choices[200]	= {KANJI_0764};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_ME)
		{
			static int choices[200]	= {KANJI_0154};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_RO)
		{
			if (sbuf[1] == GEN_KO)
			{
				static int choices[200]	= {KANJI_0325};
				array.array = choices, array.size = 200;
				return array;
			}

			static int choices[200]	= {KANJI_0325};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_N)
		{
			static int choices[200]	= {KANJI_0764};
			array.array = choices, array.size = 200;
			return array;
		}

		static int choices[200]	= {KANJI_0048, KANJI_0074, KANJI_0104,
								KANJI_0117, KANJI_0154, KANJI_0322, KANJI_0325,
								KANJI_0559, KANJI_0764};
		array.array = choices, array.size = 200;
		return array;
	}

	if (sbuf[0] == GEN_RA)
	{
		if (sbuf[1] == GEN_KU)
		{
			static int choices[200]	= {KANJI_0228};
			array.array = choices, array.size = 200;
			return array;
		}

		static int choices[200]	= {KANJI_0228};
		array.array = choices, array.size = 200;
		return array;
	}

	if (sbuf[0] == GEN_RI)
	{
		if (sbuf[1] == GEN_YO_SMALL)
		{
			if (sbuf[2] == GEN_U)
			{
				static int choices[200]	= {KANJI_0393};
				array.array = choices, array.size = 200;
				return array;
			}

			static int choices[200]	= {KANJI_0393};
			array.array = choices, array.size = 200;
			return array;
		}

		static int choices[200]	= {KANJI_0393};
		array.array = choices, array.size = 200;
		return array;
	}

	if (sbuf[0] == GEN_WA)
	{
		if (sbuf[1] == GEN_ZA)
		{
			if (sbuf[2] == GEN_WA)
			{
				static int choices[200]	= {KANJI_0692};
				array.array = choices, array.size = 200;
				return array;
			}

			static int choices[200]	= {KANJI_0339, KANJI_0422, KANJI_0692};
			array.array = choices, array.size	= 3;
			return array;
		}

		if (sbuf[1] == GEN_ZU)
		{
			if (sbuf[2] == GEN_RA)
			{
				static int choices[200]	= {KANJI_0261};
				array.array = choices, array.size = 200;
				return array;
			}

			static int choices[200]	= {KANJI_0261, KANJI_0437};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_RU)
		{
			static int choices[200]	= {KANJI_0006};
			array.array = choices, array.size = 200;
			return array;
		}

		if (sbuf[1] == GEN_RE)
		{
			static int choices[200]	= {KANJI_0166};
			array.array = choices, array.size = 200;
			return array;
		}

		static int choices[200]	= {KANJI_0006, KANJI_0166, KANJI_0237,
								KANJI_0261, KANJI_0339, KANJI_0422, KANJI_0437,
								KANJI_0692};
		array.array = choices, array.size = 200;
		return array;
	}

	return array;
}

arrayStruct clearList(arrayStruct list)
{
	arrayStruct arr	= {.array = 0, .size = 0};
	return arr;
}

int toGeneric(int sound)
{
	int gen	= 0;

	switch (sound)
	{
		case HIRA_A_SMALL:
		case KATA_A_SMALL:
			gen	= GEN_A_SMALL;
			break;

		case HIRA_A:
		case KATA_A:
			gen	= GEN_A;
			break;

		case HIRA_I_SMALL:
		case KATA_I_SMALL:
			gen	= GEN_I_SMALL;
			break;

		case HIRA_I:
		case KATA_I:
			gen	= GEN_I;
			break;

		case HIRA_U_SMALL:
		case KATA_U_SMALL:
			gen	= GEN_U_SMALL;
			break;

		case HIRA_U:
		case KATA_U:
			gen	= GEN_U;
			break;

		case HIRA_E_SMALL:
		case KATA_E_SMALL:
			gen	= GEN_E_SMALL;
			break;

		case HIRA_E:
		case KATA_E:
			gen	= GEN_E;
			break;

		case HIRA_O_SMALL:
		case KATA_O_SMALL:
			gen	= GEN_O_SMALL;
			break;

		case HIRA_O:
		case KATA_O:
			gen	= GEN_O;
			break;

		case HIRA_KA:
		case KATA_KA:
			gen	= GEN_KA;
			break;

		case HIRA_GA:
		case KATA_GA:
			gen	= GEN_GA;
			break;

		case HIRA_KI:
		case KATA_KI:
			gen	= GEN_KI;
			break;

		case HIRA_GI:
		case KATA_GI:
			gen	= GEN_GI;
			break;

		case HIRA_KU:
		case KATA_KU:
			gen	= GEN_KU;
			break;

		case HIRA_GU:
		case KATA_GU:
			gen	= GEN_GU;
			break;

		case HIRA_KE:
		case KATA_KE:
			gen	= GEN_KE;
			break;

		case HIRA_GE:
		case KATA_GE:
			gen	= GEN_GE;
			break;

		case HIRA_KO:
		case KATA_KO:
			gen	= GEN_KO;
			break;

		case HIRA_GO:
		case KATA_GO:
			gen	= GEN_GO;
			break;

		case HIRA_SA:
		case KATA_SA:
			gen	= GEN_SA;
			break;

		case HIRA_ZA:
		case KATA_ZA:
			gen	= GEN_ZA;
			break;

		case HIRA_SHI:
		case KATA_SHI:
			gen	= GEN_SHI;
			break;

		case HIRA_JI:
		case KATA_JI:
			gen	= GEN_JI;
			break;

		case HIRA_SU:
		case KATA_SU:
			gen	= GEN_SU;
			break;

		case HIRA_ZU:
		case KATA_ZU:
			gen	= GEN_ZU;
			break;

		case HIRA_SE:
		case KATA_SE:
			gen	= GEN_SE;
			break;

		case HIRA_ZE:
		case KATA_ZE:
			gen	= GEN_ZE;
			break;

		case HIRA_SO:
		case KATA_SO:
			gen	= GEN_SO;
			break;

		case HIRA_ZO:
		case KATA_ZO:
			gen	= GEN_ZO;
			break;

		case HIRA_TA:
		case KATA_TA:
			gen	= GEN_TA;
			break;

		case HIRA_DA:
		case KATA_DA:
			gen	= GEN_DA;
			break;

		case HIRA_CHI:
		case KATA_CHI:
			gen	= GEN_CHI;
			break;

		case HIRA_JI_CHI:
		case KATA_JI_CHI:
			gen	= GEN_JI_CHI;
			break;

		case HIRA_TSU_SMALL:
		case KATA_TSU_SMALL:
			gen	= GEN_TSU_SMALL;
			break;

		case HIRA_TSU:
		case KATA_TSU:
			gen	= GEN_TSU;
			break;

		case HIRA_ZU_TSU:
		case KATA_ZU_TSU:
			gen	= GEN_ZU_TSU;
			break;

		case HIRA_TE:
		case KATA_TE:
			gen	= GEN_TE;
			break;

		case HIRA_DE:
		case KATA_DE:
			gen	= GEN_DE;
			break;

		case HIRA_TO:
		case KATA_TO:
			gen	= GEN_TO;
			break;

		case HIRA_DO:
		case KATA_DO:
			gen	= GEN_DO;
			break;

		case HIRA_NA:
		case KATA_NA:
			gen	= GEN_NA;
			break;

		case HIRA_NI:
		case KATA_NI:
			gen	= GEN_NI;
			break;

		case HIRA_NU:
		case KATA_NU:
			gen	= GEN_NU;
			break;

		case HIRA_NE:
		case KATA_NE:
			gen	= GEN_NE;
			break;

		case HIRA_NO:
		case KATA_NO:
			gen	= GEN_NO;
			break;

		case HIRA_HA:
		case KATA_HA:
			gen	= GEN_HA;
			break;

		case HIRA_BA:
		case KATA_BA:
			gen	= GEN_BA;
			break;

		case HIRA_PA:
		case KATA_PA:
			gen	= GEN_PA;
			break;

		case HIRA_HI:
		case KATA_HI:
			gen	= GEN_HI;
			break;

		case HIRA_BI:
		case KATA_BI:
			gen	= GEN_BI;
			break;

		case HIRA_PI:
		case KATA_PI:
			gen	= GEN_PI;
			break;

		case HIRA_FU:
		case KATA_FU:
			gen	= GEN_FU;
			break;

		case HIRA_BU:
		case KATA_BU:
			gen	= GEN_BU;
			break;

		case HIRA_PU:
		case KATA_PU:
			gen	= GEN_PU;
			break;

		case HIRA_HE:
		case KATA_HE:
			gen	= GEN_HE;
			break;

		case HIRA_BE:
		case KATA_BE:
			gen	= GEN_BE;
			break;

		case HIRA_PE:
		case KATA_PE:
			gen	= GEN_PE;
			break;

		case HIRA_HO:
		case KATA_HO:
			gen	= GEN_HO;
			break;

		case HIRA_BO:
		case KATA_BO:
			gen	= GEN_BO;
			break;

		case HIRA_PO:
		case KATA_PO:
			gen	= GEN_PO;
			break;

		case HIRA_MA:
		case KATA_MA:
			gen	= GEN_MA;
			break;

		case HIRA_MI:
		case KATA_MI:
			gen	= GEN_MI;
			break;

		case HIRA_MU:
		case KATA_MU:
			gen	= GEN_MU;
			break;

		case HIRA_ME:
		case KATA_ME:
			gen	= GEN_ME;
			break;

		case HIRA_MO:
		case KATA_MO:
			gen	= GEN_MO;
			break;

		case HIRA_YA_SMALL:
		case KATA_YA_SMALL:
			gen	= GEN_YA_SMALL;
			break;

		case HIRA_YA:
		case KATA_YA:
			gen	= GEN_YA;
			break;

		case HIRA_YU_SMALL:
		case KATA_YU_SMALL:
			gen	= GEN_YU_SMALL;
			break;

		case HIRA_YU:
		case KATA_YU:
			gen	= GEN_YU;
			break;

		case HIRA_YO_SMALL:
		case KATA_YO_SMALL:
			gen	= GEN_YO_SMALL;
			break;

		case HIRA_YO:
		case KATA_YO:
			gen	= GEN_YO;
			break;

		case HIRA_RA:
		case KATA_RA:
			gen	= GEN_RA;
			break;

		case HIRA_RI:
		case KATA_RI:
			gen	= GEN_RI;
			break;

		case HIRA_RU:
		case KATA_RU:
			gen	= GEN_RU;
			break;

		case HIRA_RE:
		case KATA_RE:
			gen	= GEN_RE;
			break;

		case HIRA_RO:
		case KATA_RO:
			gen	= GEN_RO;
			break;

		case HIRA_WA:
		case KATA_WA:
			gen	= GEN_WA;
			break;

		case HIRA_WO:
		case KATA_WO:
			gen	= GEN_WO;
			break;

		case HIRA_N:
		case KATA_N:
			gen	= GEN_N;
			break;

		default:
			return gen;
	}

	return gen;
}

int notNull(int arr[], int len)
{
	int count	= 0;
	
	for (int i = 0; i < len; i++)
	{
		if (arr[i] != 0)
		{
			count++;
		}
	}

	return count;
}