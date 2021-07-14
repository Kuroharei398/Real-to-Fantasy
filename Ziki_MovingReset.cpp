#include "Ziki_MovingReset.h"
#include "Ziki_LifeReset.h"
#include "DxLib.h"

extern ZlifeReset zlr1;
ZmovingReset zmr1;

void ZmovingReset::ResetImage()
{
	ziki1 = LoadGraph("ÉQÅ[ÉÄâÊëú/é©ã@.png");
}

void ZmovingReset::ResetValue()
{
	PMx = 0;
	PMy = 0;
	Sx = 320;
	Sy = 360;

	Fx = Sx;
	Fy = Sy;

	score = 0;

	Zradius = 40;
	zlr1.zicr = GetColor(70, 120, 180);

	Zflag = true;
}