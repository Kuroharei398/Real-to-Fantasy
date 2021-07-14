#include "GameManager.h"
#include "Enemy_ResetManager.h"
#include "Eballet_Reset.h"
#include "Enemy_Moving.h"
#include "Enemy_Bullet.h"
#include "Stage_ResetManager.h"
#include "Zbullet_Moving.h"
#include "ZEnemy_ResetManager.h"
#include "ZEnemy_Moving.h"
#include "Ziki_ResetManager.h"
#include "Ziki_Moving.h"
#include "Zbullet_Reset.h"
#include "TitleReset.h"
#include "Title.h"
#include "Stage_Scrol.h"
#include "ZEnemy_PitemReset.h"
#include "DxLib.h"

GameManager gm1;
extern EnemyResetManager erm1;
extern Emoving em1;
extern EballetReset ebr1;
extern Eballet  eb1;
extern StageResetManager srm1;
extern ZbulletReset zbr1;
extern ZenemyResetManager zerm1;
extern Zemoving zem1;
extern ZikiResetManager zkrm1;
extern Zmoving zm1;
extern Zbullet zb1;
extern TitleReset tr;
extern Title ti;
extern Stscroll ss1;
extern PitemReset pir1;

int gm = 0;

void GameManager::InitializeGame()
{
	AdventCnt = 0;
	srm1.SRM();
	zkrm1.ZKRM();
	zbr1.ResetImage();
	zerm1.ZERM();
	erm1.ERM();
	ebr1.ResetImage();
	tr.ResetImage();
}

void GameManager::UpdateGame()
{
	ss1.Scroller();
	zm1.Ziki_Move();
	zm1.Ziki_Draw();
	if (AdventCnt >= 1000)
	{
		em1.Enemy_Moving();
		ebr1.ResetValue();
		eb1.EBallet();
	}
	else
	{
		zem1.ZEnemy_Move();
	}
	++AdventCnt;
	zbr1.ResetValue();
	zb1.Moving();
}


