#include "Ziki_LifeReset.h"
#include "DxLib.h"

ZlifeReset zlr1;

void ZlifeReset::ResetImage()
{
	Zlifeos = LoadGraph("ゲーム画像/ライフゲージ(外枠).png");
	Zlifeis = LoadGraph("ゲーム画像/ライフゲージ(内枠).png");
	Zvalue = LoadGraph("ゲーム画像/ゆっくりレイ.png");
}

void ZlifeReset::ResetValue()
{
	ZlifeosX = 520;
	ZlifeosX1 = 624;
	ZlifeosY = 103;
	ZlifeosY1 = 118;

	ZlifeisX = 522;
	ZlifeisX1 = 622;
	ZlifeisY = 105;
	ZlifeisY1 = 116;

	ZlifeReisX1 = 622;

	Zsnumber = 2;

	Zvaluex = 445;
	Zvaluex1 = 515;
	Zvaluey = 98;
	Zvaluey1 = 158;

	zicr = GetColor(70, 120, 180);

	Zisflag = true;
}