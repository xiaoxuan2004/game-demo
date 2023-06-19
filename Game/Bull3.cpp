#include "Bull3.h"
void Bull3::Limit_life(const GameUnit& unit)
{
	if (intersect(unit))
		life -= 20;
	else
		return;
}