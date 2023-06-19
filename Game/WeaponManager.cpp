#include "WeaponManager.h"
#include "Interface.h"

WeaponManager::WeaponManager()
{

}


WeaponManager::~WeaponManager()
{
	for (auto itr = circles.begin(); itr != circles.end(); itr++)
	{
		delete (*itr);
	}
}


void WeaponManager::DetectCollision(CCircle* bullet)
{
	ZombieManager& zombieManager = Interface::getZombieManager();
	zombieManager.DetectCollision(bullet);
}


void WeaponManager::Update(double time)
{
	for (auto itr = circles.begin(); itr != circles.end(); itr++)
	{
		auto& unit = (*itr);
		unit->Update(time);
	}

	for (auto itr = circles.begin(); itr != circles.end(); itr++)
	{
		auto& unit = (*itr);
		DetectCollision(unit);
	}


	for (auto itr = circles.begin(); itr != circles.end(); )
	{
		auto& unit = (*itr);
		if (unit->isAlive())
			itr++;
		else
		{
			delete* itr;
			itr = circles.erase(itr);
		}

	}
}



void WeaponManager::InsertBullet(CCircle* bullet)
{
	circles.push_back(bullet);
}


void WeaponManager::Render(QPainter& painter)
{
	for (auto itr = circles.begin(); itr != circles.end(); itr++)
	{
		(*itr)->Render(painter);
	}
}



