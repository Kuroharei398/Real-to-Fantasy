#pragma once
#ifndef DEF_ZIKIZMOVINGRESET_H
#define DEF_ZIKIMOVINGRESET_H

class ZmovingReset
{
public:
	int Sx, PMx;		//è„ÇÃê‡ñæÇì«ÇÒÇ≈Ç≠ÇæÇµÇ†
	int Sy, PMy;		//è„Ç∆ìØÇ∂
	int ziki1;//è„Ç∆ìØÇ∂
	int score;
	int Fx, Fy;
	int Zradius;
	bool Zflag;
	void ResetImage();
	void ResetValue();
};

#endif // !DEF_ZIKIZMOVINGRESET_H

