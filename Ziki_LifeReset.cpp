#include "Ziki_LifeReset.h"
#include "DxLib.h"

ZlifeReset zlr1;

void ZlifeReset::ResetImage()
{
	Zlifeos = LoadGraph("�Q�[���摜/���C�t�Q�[�W(�O�g).png");
	Zlifeis = LoadGraph("�Q�[���摜/���C�t�Q�[�W(���g).png");
	Zvalue = LoadGraph("�Q�[���摜/������背�C.png");
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