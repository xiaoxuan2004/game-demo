#include "BeanShooter.h"
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