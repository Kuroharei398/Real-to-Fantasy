#include "Enemy_LifeReset.h"
#include "DxLib.h"

ElifeReset elr1;
void ElifeReset::ResetImage()
{
	Elifeos = LoadGraph("ゲーム画像/エネミーゲージ(外枠).png");
	Elifeis = LoadGraph("ゲーム画像/エネミーゲージ(内枠).png");
	Elifeis2 = LoadGraph("ゲーム画像/エネミーライフ(内枠２).png");
}

void ElifeReset::ResetValue()
{
	Elifeosx = 80;
	Elifeosx1 = 435;
	Elifeosy = 10;
	Elifeosy1 = 30;

	Elifeisx = 190;
	Elifeisx1 = 428;
	Elifeisy = 11;
	Elifeisy1 = 29;

	Elifeisx2 = 87;
	Elifeisx3 = 190;
	Elifeisy2 = 11;
	Elifeisy3 = 29;

	Elifeisflag = true;
	Elifeis2flag = true;
}