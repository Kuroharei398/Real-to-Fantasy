#pragma once
#ifndef DEF_ENEMYEMOVINGRESET_H
#define DEF_ENEMYEMOVINGRESET_H

class Emovingreset
{
public:
	int Eimg;
	int Evalue;
	int color1;
	int Evaluex, Evaluex1;
	int Evaluey, Evaluey1;
	int Fx0, Fy0;
	int EspeedX;
	int EspeedY;
	float radius;
	int Esnumber;

	void ResetImage();
	void ResetValue();
};

#endif // !DEF_ENEMYEMOVINGRESET_H
