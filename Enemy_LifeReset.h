#pragma once
#ifndef DEF_ENEMYLIFERESET_H
#define DEF_ENEMYLIFERESET_H

class ElifeReset
{
	public:
		int Elifeis;
		int Elifeis2;
		int Elifeos;

		int Elifeisx;
		int Elifeisy, Elifeisy1;

		int Elifeisx2;
		int Elifeisy2, Elifeisy3;

		int Elifeosx, Elifeosx1;
		int Elifeosy, Elifeosy1;

		int Elifeisx1;
		int Elifeisx3;
		bool Elifeisflag;
		bool Elifeis2flag;

		void ResetImage();
		void ResetValue();
};

#endif // !DEF_ENEMYLIFERESET_H
