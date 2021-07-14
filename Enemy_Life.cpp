#include "Enemy_Life.h"
#include "Enemy_LifeReset.h"
#include "Enemy_Movingreset.h"
#include "DxLib.h"

extern Emovingreset emr1;
extern ElifeReset elr1;
Elife el1;

void Elife::Elife_Draw()
{
	DrawExtendGraph(elr1.Elifeosx, elr1.Elifeosy, elr1.Elifeosx1, elr1.Elifeosy1, elr1.Elifeos, true);
	if (elr1.Elifeis2flag == true)
	{
		DrawExtendGraph(elr1.Elifeisx2, elr1.Elifeisy2, elr1.Elifeisx3, elr1.Elifeisy3, elr1.Elifeis2, true);
	}
	if (elr1.Elifeisflag == true)
	{
		DrawExtendGraph(elr1.Elifeisx, elr1.Elifeisy, elr1.Elifeisx1, elr1.Elifeisy1, elr1.Elifeis, true);
	}
	if (elr1.Elifeisx1 <= elr1.Elifeisx)
	{
		elr1.Elifeisflag = false;
	}
	if (elr1.Elifeisx3 <= elr1.Elifeisx2)
	{
		emr1.Esnumber--;
		elr1.Elifeis2flag = false;
	}
	if (elr1.Elifeisflag == false && elr1.Elifeis2flag == false)
	{
		while (elr1.Elifeisflag == false || elr1.Elifeis2flag == false)
		{
			elr1.Elifeisx1++;
			elr1.Elifeisx3++;
			if (elr1.Elifeisx3 >= 190 && elr1.Elifeisx1 >= 430)
			{
				elr1.Elifeisx1 = 430;
				elr1.Elifeisx3 = 190;
				elr1.Elifeisflag = true;
				elr1.Elifeis2flag = true;
				break;
			}
		}
	}
}