#include "BeanShooter.h"
#include "Interface.h"

void BeanShooter::Limit_life(const GameUnit& unit)
{
	if (intersect(unit))
		life -= 100;
	else
		return;
}
//void BeanShooter::fire()//·¢Éä×Óµ¯
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

	if (totalTime > 5000)
	{
// 		auto& weaponManager = Interface::getWeaponManager();
// 
// 		CCircle* bean = new CCircle();
// 		weaponManager.InsertBullet(bean);
// 		Vec2d pos_m(center.x + 50, center.y - 25);
// 		bean->SetPos(pos_m);
// 
// 		bean->Init("F", "png", 1);
// 		weaponManager.InsertBullet(bean);

		totalTime = 0;
	}
	


	GameUnit::Update(time);
}