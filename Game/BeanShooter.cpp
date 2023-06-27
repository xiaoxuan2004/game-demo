#include "BeanShooter.h"
#include "Interface.h"

void BeanShooter::Limit_life(const GameUnit& unit)
{
	if (intersect(unit))
		life -= 100;
	else
		return;
}
//void BeanShooter::fire()//发射子弹
//{
//	
//	auto& weaponManager = Interface::getWeaponManager();
//
//	CCircle* bean = new CCircle();
//	weaponManager.InsertBullet(bean);
//	Vec2d pos_m(center.x+50,center.y-25);
//	bean->SetPos(pos_m);
//}

void BeanShooter::Update(int time)
{
	totalTime += time;

	if (totalTime > 2000)
	{
 		auto& weaponManager = Interface::getWeaponManager();
 
 		CCircle* bean = new CCircle();
 		Vec2d pos_m(center.x + 50, center.y - 25);
 		bean->SetPos(pos_m);
		Vec2d velocity(0.01, 0.0);
		bean->SetVelocity(velocity);
		bean->Init("F", "png", 1);
 		weaponManager.InsertBullet(bean);

		totalTime = -3000;
	}//计时器计算单位均为Ms
	


	GameUnit::Update(time);
}