#pragma once
#ifndef DEF_ZIKIZMOVINGRESET_H
#define DEF_ZIKIMOVINGRESET_H

class ZmovingReset
{
public:
	int Sx, PMx;		//上の説明を読んでくだしあ
	int Sy, PMy;		//上と同じ
	int ziki1;//上と同じ
	int score;
	int Fx, Fy;
	int Zradius;
	bool Zflag;
	void ResetImage();
	void ResetValue();
};

#endif // !DEF_ZIKIZMOVINGRESET_H

