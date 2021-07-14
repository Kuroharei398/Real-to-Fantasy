#include "Enemy_Colider.h"
#include "Enemy_LifeReset.h"
#include "Enemy_Movingreset.h"
#include "Zbullet_Reset.h"
#include "Ziki_MovingReset.h"

extern ZmovingReset zmr1;
extern ElifeReset elr1;
extern Emovingreset emr1;
extern ZbulletReset zbr1;
Ecolider ec1;

void Ecolider::EDcolider()
{
	for (int d = 0; d < Danmaku_Max; ++d)
	{
		if (elr1.Elifeisflag == true)
		{
			if (zbr1.Shotflag[d] == true)
			{
				float x = (float)zbr1.Fx2_0[d] - emr1.Fx0;
				float y = (float)zbr1.Fy2_0[d] - emr1.Fy0;
				float r = (float)zbr1.Dradius[d] + emr1.radius;
				if (x * x + y * y < r * r)
				{
					elr1.Elifeisx1 -= 5;
					zmr1.score += 1000;
					zbr1.Shotflag[d] = false;
					break;
				}
			}
		}
		else if (elr1.Elifeisflag == false)
		{
			if (elr1.Elifeis2flag == true)
			{
				if (zbr1.Shotflag[d] == true)
				{
					float x = (float)zbr1.Fx2_0[d] - emr1.Fx0;
					float y = (float)zbr1.Fy2_0[d] - emr1.Fy0;
					float r = (float)zbr1.Dradius[d] + emr1.radius;
					if (x * x + y * y < r * r)
					{
						elr1.Elifeisx3 -= 3;
						zmr1.score += 1000;
						zbr1.Shotflag[d] = false;
						break;
					}
				}
			}
		}
	}
}

void Ecolider::EreflectionX()
{
	if (emr1.Fx0 > 400)
	{
		emr1.EspeedX *= -1;
	}
	else if (emr1.Fx0 < 40)
	{
		emr1.EspeedX *= -1;
	}
}

void Ecolider::EreflectionY()
{
	if (emr1.Fy0 < 20)
	{
		emr1.EspeedY *= -1;
	}
	else if (emr1.Fy0 > 200)
	{
		emr1.EspeedY *= -1;
	}
}