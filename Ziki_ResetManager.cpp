#include "Ziki_ResetManager.h"
#include "Ziki_MovingReset.h"
#include "Ziki_LifeReset.h"

ZikiResetManager zkrm1;
extern ZmovingReset zmr1;
extern ZlifeReset zlr1;

void ZikiResetManager::ZKRMImage()
{
	zmr1.ResetImage();
	zlr1.ResetImage();
}

void ZikiResetManager::ZKRMvalue()
{
	zmr1.ResetValue();
	zlr1.ResetValue();
}

void ZikiResetManager::ZKRM()
{
	ZKRMImage();
	ZKRMvalue();
}