#include "DxLib.h"
#include "GameManager.h"
#include "Title.h"
#include "TitleReset.h"
#include "ProtoType.h"

//東方ブロック崩し(仮)のメインプログラム

extern GameManager gm1;
extern Title ti;
extern TitleReset tr;
char Key[256];
unsigned int cr;
int ct = 0;

//プログラムはWinMainスタート
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow) {

	SetWindowText("東方ブロック崩し");
	
	if (ChangeWindowMode(true) != DX_CHANGESCREEN_OK || DxLib_Init() == -1) return -1;
	SetGraphMode(640, 480, 32);
	SetDrawScreen(DX_SCREEN_BACK);

	gm1.InitializeGame();
	cr = GetColor(255, 255, 255);

	while (true)
	{
		if ((GetJoypadInputState(DX_INPUT_KEY_PAD1) & PAD_INPUT_4) == 0)
		{
			ti.TitleDraw();
			if (ct % 10 == 0)
			{
				DrawString(250, 300, "Press to A Key", cr);
			}
			ScreenFlip();
		}
		else
		{
			//DeleteGraph(img);
			DeleteGraph(tr.Timg);
			break;
		}
		++ct;
	}
	while (ScreenFlip() == 0 && !ProcessMessage() && !ClearDrawScreen() && !GetHitKeyStateAll(Key) && Key[KEY_INPUT_ESCAPE] == 0) {
		gm1.UpdateGame();
		Fps();
		Wait_fanc();
	}
	DxLib_End();
	return 0;
}