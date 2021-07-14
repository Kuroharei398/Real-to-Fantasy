#include "Enemy_Bullet.h"
#include "Eballet_Reset.h"
#include "DxLib.h"

extern EballetReset ebr1;
Eballet eb1;

void Eballet::Eballet1()
{
	for (int e1 = 0; e1 < Eb_Max; ++e1)
	{
		if (e1 == 4)
		{
			break;
		}
		else if (ebr1.Ebflag[e1] == true)
		{
			ebr1.ey0[e1] += 4;

			DrawRotaGraph(ebr1.ex0[e1], ebr1.ey0[e1] + e1 * 30, 0.2, 0.0, ebr1.Edimg, true);
			if (ebr1.ey0[e1] > 495)
			{
				ebr1.Ebflag[e1] = false;
			}
		}
	}
}

void Eballet::Eballet2()
{
	for (int e2 = 0; e2 < Eb_Max; ++e2)
	{
		if (e2 == 4)
		{
			break;
		}
		else if (ebr1.Ebflag1[e2] == true)
		{
			ebr1.ex1[e2] -= 4;
			ebr1.ey1[e2] += 4;

			DrawRotaGraph(ebr1.ex1[e2], ebr1.ey1[e2] + e2 * 30, 0.2, 0.0, ebr1.Edimg, true);
			if (ebr1.ey1[e2] > 495)
			{
				ebr1.Ebflag1[e2] = false;
			}
		}
	}
}

void Eballet::Eballet3()
{
	for (int e3 = 0; e3 < Eb_Max; ++e3)
	{
		if (e3 == 4)
		{
			break;
		}
		else if (ebr1.Ebflag2[e3] == true)
		{
			ebr1.ex2[e3] += ebr1.Ebx[e3];
			ebr1.ey2[e3] += 4;

			if (ebr1.ex2[e3] >= 400)
			{
				ebr1.Ebx[e3] *= -1;
			}

			DrawRotaGraph(ebr1.ex2[e3], ebr1.ey2[e3] + e3 * 30, 0.2, 0.0, ebr1.Edimg, true);
			if (ebr1.ey2[e3] > 495)
			{
				ebr1.Ebflag2[e3] = false;
			}
		}
	}
}

void Eballet::EBallet()
{
	Eballet1();
	Eballet2();
	Eballet3();
}