#include "Enemy_Movingreset.h"
#include "DxLib.h"

Emovingreset emr1;

void Emovingreset::ResetImage()
{
	Eimg = LoadGraph("ƒQ[ƒ€‰æ‘œ/“G.png");
	Evalue = LoadGraph("ƒQ[ƒ€‰æ‘œ/‚ä‚Á‚­‚è‚ê‚ñ‚©.png");
}

void Emovingreset::ResetValue()
{
	color1 = GetColor(0, 0, 0);

	Fx0 = 230;
	Fy0 = 140;

	EspeedX = 3;
	EspeedY = 5;

	radius = 40.0f;

	Evaluex = 5;
	Evaluex1 = 75;
	Evaluey = 5;
	Evaluey1 = 60;

	Esnumber = 2;
}