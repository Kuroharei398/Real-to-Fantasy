#pragma once
#ifndef DEF_ZIKIZMOVINGRESET_H
#define DEF_ZIKIMOVINGRESET_H

class ZmovingReset
{
public:
	int Sx, PMx;		//��̐�����ǂ�ł�������
	int Sy, PMy;		//��Ɠ���
	int ziki1;//��Ɠ���
	int score;
	int Fx, Fy;
	int Zradius;
	bool Zflag;
	void ResetImage();
	void ResetValue();
};

#endif // !DEF_ZIKIZMOVINGRESET_H

