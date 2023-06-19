#ifndef _GameUnit_H
#define _GameUnit_H
#include<iostream>
#include<vector>
//#include"Circle.h"
#include <QPainter>
#include "Sprite.h"
using namespace std;

/*
游戏单元类
	除了绘制属性，还包含了游戏相关的属性和方法
*/

class GameUnit : public Sprite
{
protected:
	int		life;				//生命值
	int		armor;				//防御力
	/*bool alive;*/
public:
	GameUnit();
	~GameUnit();
	bool isAlive(); /*{ return alive; }*/
	
	void modifyLife(int delta) { life += delta; }
};


#endif // !_GameUnit_H
//void ZombieManager::detectCollision(Bullet* bullet)
//{
//	//return;
//	for (auto itr = zombies.begin(); itr != zombies.end(); itr++)
//	{
//		auto* zombie = *itr;
//		if (bullet->intersect(*zombie))
//		{
//			zombie->modifyLife(-1 * bullet->getHarm());
//			bullet->modifyLife(-1000);
//		}
//	}
//}
//void WeaponManager::detectCollision(Bullet* bullet)
//{
//	ZombieManager& zombieManager = GameInterface::getZombieManager();
//	zombieManager.detectCollision(bullet);
//}