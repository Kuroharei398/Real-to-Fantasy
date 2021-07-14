#include "Ziki_Life.h"
#include "Ziki_LifeReset.h"
#include "Ziki_MovingReset.h"
#include "Ziki_Colider.h"
#include "DxLib.h"

extern ZlifeReset zlr1;
extern Zcolider zc1;
extern ZmovingReset zmr1;
Zlife zl1;

void Zlife::ZlifeDraw()
{
	DrawExtendGraph(zlr1.ZlifeosX, zlr1.ZlifeosY, zlr1.ZlifeosX1, zlr1.ZlifeosY1, zlr1.Zlifeos, true);
	DrawExtendGraph(zlr1.Zvaluex, zlr1.Zvaluey, zlr1.Zvaluex1, zlr1.Zvaluey1, zlr1.Zvalue, true);
	DrawFormatString(515, 125, zlr1.zicr, "(~%d)", zlr1.Zsnumber);

	if (zlr1.Zisflag == true)
	{
		DrawExtendGraph(zlr1.ZlifeisX, zlr1.ZlifeisY, zlr1.ZlifeisX1, zlr1.ZlifeisY1, zlr1.Zlifeis, true);
	}
	
	zc1.Zlifecolider();

	while (zlr1.Zisflag == false)
	{
		zlr1.ZlifeisX1++;
		if (zlr1.ZlifeisX1 >= 662)
		{
			zlr1.ZlifeisX1 = zlr1.ZlifeReisX1;
			zlr1.Zisflag = true;
			zmr1.Zflag = true;
			break;
		}
	}
}