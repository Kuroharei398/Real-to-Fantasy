#include "Enemy_Movingreset.h"
#include "DxLib.h"

Emovingreset emr1;

void Emovingreset::ResetImage()
{
	Eimg = LoadGraph("�Q�[���摜/�G.png");
	Evalue = LoadGraph("�Q�[���摜/���������.png");
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