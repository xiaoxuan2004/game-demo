#include "ShooterManager.h"
#include"Bull1.h"
#include"Interface.h"
ShooterManager::ShooterManager()
{

}

ShooterManager::~ShooterManager()
{
	for (auto itr = gameUnits.begin(); itr != gameUnits.end(); itr++)
	{
		delete (*itr);
	}
}




void ShooterManager::Update(double time)
{
	

	for (auto itr = gameUnits.begin(); itr != gameUnits.end(); itr++)
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

	for (auto itr = gameUnits.begin(); itr != gameUnits.end(); )
	{
		auto& unit = (*itr);
		if (unit->isAlive())
			itr++;
		else
		{
			delete* itr;
			itr = gameUnits.erase(itr);
		}
	}
}

void ShooterManager::Render(QPainter& painter)
{
	for (auto itr = gameUnits.begin(); itr != gameUnits.end(); itr++)
	{
		(*itr)->Render(painter);
	}
}
void ShooterManager::InsertShooter(BeanShooter* unit)
{
	gameUnits.push_back(unit);
}
void ShooterManager::DetectCollision(Bull1* zombie)
{
	//return;
	for (auto itr = gameUnits.begin(); itr != gameUnits.end(); itr++)
	{
		auto* shooter = *itr;
		if (zombie->intersect(*shooter))
		{
			shooter->modifyLife(-50);
		}
	}
}
