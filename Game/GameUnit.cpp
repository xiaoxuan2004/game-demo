#include <QPainter>
#include "GameUnit.h"
#include"Circle.h"

GameUnit::GameUnit()
{
	life = 100;
	armor = 10;
}

GameUnit::~GameUnit()
{

}

bool GameUnit::isAlive()
{
	if (life > 0)return true;
	return false;
}



