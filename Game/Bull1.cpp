#include "Bull1.h"
void Bull1::Render(QPainter& painter)
{

}
void Bull1::Limit_life(const GameUnit& unit)
{
	if (intersect(unit))
		life -= 50;
	else
		return;
}
