#include "Enemy_ResetManager.h"
#include "Enemy_Movingreset.h"
#include "Enemy_LifeReset.h"

EnemyResetManager erm1;
extern Emovingreset emr1;
extern ElifeReset elr1;

void EnemyResetManager::ERMimage()
{
	emr1.ResetImage();
	elr1.ResetImage();
}

void EnemyResetManager::ERMvalue()
{
	emr1.ResetValue();
	elr1.ResetValue();
}

void EnemyResetManager::ERM()
{
	ERMimage();
	ERMvalue();
}