#include "Enemy_LifeReset.h"
#include "DxLib.h"

ElifeReset elr1;
void ElifeReset::ResetImage()
{
	Elifeos = LoadGraph("�Q�[���摜/�G�l�~�[�Q�[�W(�O�g).png");
	Elifeis = LoadGraph("�Q�[���摜/�G�l�~�[�Q�[�W(���g).png");
	Elifeis2 = LoadGraph("�Q�[���摜/�G�l�~�[���C�t(���g�Q).png");
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