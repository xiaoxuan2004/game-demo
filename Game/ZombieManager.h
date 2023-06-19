#pragma once
#include <list>
#include "Bull1.h"
class CCircle;

class ZombieManager
{
public:
	ZombieManager();
	~ZombieManager();

	void Update(double time);
	void Render(QPainter& painter);
	void InsertZombie(Bull1* z) { bull1s.push_back(z); }

	void DetectCollision(CCircle* bullet);
	int  ZombieNumber()const { return bull1s.size(); }
protected:
	double gameTime;

	std::list<Bull1*> bull1s;
};

