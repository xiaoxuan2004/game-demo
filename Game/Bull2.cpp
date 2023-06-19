#include "Bull2.h"
void Bull2::Limit_life(const GameUnit& unit)
{
	if (intersect(unit))
		life -= 25;
	else
		return;
}