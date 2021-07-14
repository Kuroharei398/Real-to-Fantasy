#include "DxLib.h"
#include "prototype.h"

//FPSのカウント&表示のプログラム

int count = 0;

void Wait_fanc() {
	int term;
	static int t = 0;
	term = GetNowCount() - t;
	if (16 - term>0)
		Sleep(16 - term);
	t = GetNowCount();
	return;
}
void Fps() {
	int i;
	static int t = 0, ave = 0, f[60];

	f[count % 60] = GetNowCount() - t;
	t = GetNowCount();
	if (count % 60 == 59) {
		ave = 0;
		for (i = 0; i<60; i++)
			ave += f[i];
		ave /= 60;
	}
	if (ave != 0) {
		DrawFormatString(575, 465, GetColor(50, 100, 150), "%.1fFPS", 1000.0 / (double)ave);
	}
	count++;
	return;
}