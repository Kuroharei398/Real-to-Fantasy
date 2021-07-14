#include "Eballet_Reset.h"
#include "Enemy_Movingreset.h"
#include "DxLib.h"

extern Emovingreset emr1;
EballetReset ebr1;

void EballetReset::ResetImage()
{
	Edimg = LoadGraph("ゲーム画像/敵ショット.png");
}

void EballetReset::ResetValue()
{
	EballetReset1();
	EballetReset2();
	EballetReset3();
}

void EballetReset::EballetReset1()
{
	for (int e1 = 0; e1 < Eb_Max; ++e1)
	{
		if (Ebflag[e1] == false)
		{
			ex0[e1] = emr1.Fx0 - 10;
			ey0[e1] = emr1.Fy0 + 60;
			Ebradius[e1] = 15;

			Ebflag[e1] = true;
			break;
		}
	}
}

void EballetReset::EballetReset2()
{
	for (int e2 = 0; e2 < Eb_Max; ++e2)
	{
		if (Ebflag1[e2] == false)
		{
			ex1[e2] = emr1.Fx0 - 70;
			ey1[e2] = emr1.Fy0 + 60;

			Ebradius[e2] = 15;

			Ebflag1[e2] = true;
			break;
		}
	}
}

void EballetReset::EballetReset3()
{
	for (int e3 = 0; e3 < Eb_Max; ++e3)
	{
		if (Ebflag2[e3] == false)
		{
			ex2[e3] = emr1.Fx0;
			ey2[e3] = emr1.Fy0 + 60;

			Ebx[e3] = 2;

			Ebradius[e3] = 15;

			Ebflag2[e3] = true;
			break;
		}
	}
}