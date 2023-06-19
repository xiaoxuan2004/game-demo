#pragma once
//class ShooterManager
//{
//};
#include <list>
#include "BeanShooter.h"
class Bull1;
class ShooterManager
{
public:
	ShooterManager();
	~ShooterManager();


	void Update(double time);
	void Render(QPainter& painter);
	void InsertShooter(BeanShooter*unit);
	void DetectCollision(Bull1* zombie);
private:
	std::list<BeanShooter*> gameUnits;

};

