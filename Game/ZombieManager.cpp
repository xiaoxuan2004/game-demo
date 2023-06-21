#include <cmath>
#include "ZombieManager.h"
#include "Circle.h"
#include "Interface.h"

ZombieManager::ZombieManager()
{
	gameTime = 0.0;
}

ZombieManager::~ZombieManager()
{
	for (auto itr = bull1s.begin(); itr != bull1s.end(); itr++)
	{
		delete (*itr);
	}
}



void ZombieManager::Update(double time)
{
	gameTime += time;

	for (auto itr = bull1s.begin(); itr != bull1s.end(); itr++)
	{
		auto& unit = (*itr);
		unit->Update(time);
		/*if (unit->win())
		{
			Interface::getGameInfo().gameState = Game_Fail;
			break;
		}*/
		//¼ì²âÊÇ·ñÊ¤Àû
	}
	if (Interface::getGameInfo().gameState == Game_Fail)
		return;

	for (auto itr = bull1s.begin(); itr != bull1s.end(); )
	{
		auto& unit = (*itr);
		if (unit->isAlive())
			itr++;
		else
		{
			delete unit;
			itr = bull1s.erase(itr);
		}
	}
}

void ZombieManager::Render(QPainter& painter)
{
	for (auto itr = bull1s.begin(); itr != bull1s.end(); itr++)
	{
		(*itr)->Render(painter);
	}
}

void ZombieManager::DetectCollision(CCircle* bullet)
{
	//return;
	for (auto itr = bull1s.begin(); itr != bull1s.end(); itr++)
	{
		auto* zombie = *itr;
		if (bullet->intersect(*zombie))
		{
			zombie->modifyLife(-50);
			bullet->modifyLife(-100);
		}
	}
}
