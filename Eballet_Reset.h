#pragma once
#ifndef DEF_EBALLETRESET_H
#define DEF_EBALLETRESET_H
#define Eb_Max 60

class EballetReset
{
public:
	int Edimg;
	int ex0[Eb_Max], ex1[Eb_Max], ex2[Eb_Max];
	int ey0[Eb_Max], ey1[Eb_Max], ey2[Eb_Max];
	int Ebx[Eb_Max];
	int Ebradius[Eb_Max];
	bool Ebflag[Eb_Max];
	bool Ebflag1[Eb_Max];
	bool Ebflag2[Eb_Max];
	void EballetReset1();
	void EballetReset2();
	void EballetReset3();
	void ResetImage();
	void ResetValue();
};

#endif // !DEF_EBALLETRESET_H
