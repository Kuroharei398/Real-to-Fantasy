#include "Enemy_Moving.h"
#include "Enemy_Movingreset.h"
#include "Enemy_Colider.h"
#include "Enemy_Life.h"
#include "DxLib.h"

extern Ecolider ec1;
extern Elife    el1;
extern Emovingreset emr1;
Emoving em1;

void Emoving::Enemy_Moving()
{
	emr1.Fx0 += emr1.EspeedX;
	emr1.Fy0 -= emr1.EspeedY;
	ec1.EreflectionX();
	ec1.EreflectionY();
	ec1.EDcolider();
	Enemy_Draw();
}

void Emoving::Enemy_Draw()
{
	el1.Elife_Draw();
	DrawRotaGraph(emr1.Fx0, emr1.Fy0, 0.15, 0.0, emr1.Eimg, true);
	DrawExtendGraph(emr1.Evaluex, emr1.Evaluey, emr1.Evaluex1, emr1.Evaluey1, emr1.Evalue, true);
	DrawFormatString(75, 40, emr1.color1, "(Å~%d)", emr1.Esnumber);
}