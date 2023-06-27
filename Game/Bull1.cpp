#include "Bull1.h"
void Bull1::Render(QPainter& painter)
{
	GameUnit::Render(painter);
}
void Bull1::Limit_life(const GameUnit& unit)
{
	if (intersect(unit))
		life -= 50;
	else
		return;
}
bool Bull1::Zombiewin()const
{
	if (center.x - width / 2 <= 0)
		return true;
	return false;
}