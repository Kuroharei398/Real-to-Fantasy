#include "Ziki_Moving.h"
#include "Ziki_MovingReset.h"
#include "Ziki_Life.h"
#include "Ziki_LifeReset.h"
#include "Ziki_Colider.h"
#include "DxLib.h"

extern ZmovingReset zmr1;
extern Zlife zl1;
extern ZlifeReset zlr1;
extern Zcolider zc1;
Zmoving zm1;

void Zmoving::Ziki_Move()
{
	if (zmr1.Zflag == true)
	{
		Move_Left();
		Move_Right();
		Move_Up();
		Move_Down();
		zc1.ZEcolider();
		zc1.ZWcoliderX();
		zc1.ZWcoliderY();
	}
}

void Zmoving::Move_Left()
{
	if ((GetJoypadInputState(DX_INPUT_KEY_PAD1) & PAD_INPUT_LEFT) == 0)
	{
	}
	else
	{
		zmr1.Fx -= 6;
	}
}

void Zmoving::Move_Right()
{
	if ((GetJoypadInputState(DX_INPUT_KEY_PAD1) & PAD_INPUT_RIGHT) == 0)
	{
	}
	else
	{
		zmr1.Fx += 6;
	}
}

void Zmoving::Move_Up()
{
	if ((GetJoypadInputState(DX_INPUT_KEY_PAD1) & PAD_INPUT_UP) == 0)
	{
	}
	else
	{
		zmr1.Fy -= 6;
	}
}

void Zmoving::Move_Down()
{
	if ((GetJoypadInputState(DX_INPUT_KEY_PAD1) & PAD_INPUT_DOWN) == 0)
	{
	}
	else
	{
		zmr1.Fy += 6;
	}
}

void Zmoving::Ziki_Draw()
{
	zl1.ZlifeDraw();

	DrawFormatString(440, 60, zlr1.zicr, "(ÉXÉRÉA %d)", zmr1.score);

	if (zmr1.Zflag == true)
	{
		DrawRotaGraph(zmr1.Fx, zmr1.Fy, 0.03, 0.0, zmr1.ziki1, true);
	}
}