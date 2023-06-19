#pragma once
#include <list>
#include "Circle.h"

class WeaponManager
{
public:
	WeaponManager();
	~WeaponManager();


	void Update(double time);
	void Render(QPainter& painter);
	void InsertBullet(CCircle* bullet);
	void DetectCollision(CCircle* bullet);
private:
	std::list<CCircle*> circles;

};


