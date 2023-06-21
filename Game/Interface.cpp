#include "Interface.h"
#include "Circle.h"
#include<cstdlib>
#include"Bull2.h"
#include"Bull3.h"
//Interface::Interface()
//{
//	
//}
//
//Interface::~Interface()
//{
//	//清除子弹
//	for (auto itr = circles.begin(); itr != circles.end(); itr++)
//	{
//		delete *itr;
//	}
//
//	//清除游戏单元
//	for (auto itr = gameUnits.begin(); itr != gameUnits.end(); itr++)
//	{
//		delete *itr;
//	}
//	//清除僵尸
//	for (auto itr = Bull1s.begin(); itr != Bull1s.end(); itr++)
//	{
//		delete* itr;
//	}
//}
//
//bool Interface::UserWndProc(int msg_type, int x, int y)
//{
//	srand(time(0));
//	double	speed = 1.0 / 30;//(rand()%30+1.0)/30.0; //1.0/30;
//	double speed1 = 1.5 / 30;
//	double speed2 = 2.0 / 30;
//	double speed3 = 2.5 / 30;
//    /*double angle = rand() % 100 / 100.0 * 2.0 * 3.1415926;*/	//弧度
//	double angle = 0.0;
//	Vec2d pos(x, y);
//	Vec2d pos_m(x + 50, y-20);
//	Vec2d pos_enemy(600 - x,rand()%y);
//	Vec2d velocity_static(0.0, 0.0);
//	Vec2d velocity(speed * cos(angle), speed * sin(angle));
//	Vec2d velocity_enemy(-speed * cos(angle), -speed * sin(angle));
//	Vec2d velocity_enemy1(-speed1 * cos(angle), -speed1 * sin(angle));
//	Vec2d velocity_enemy2(-speed2 * cos(angle), -speed2 * sin(angle));
//	Vec2d velocity_enemy3(-speed3 * cos(angle), -speed3 * sin(angle));
//	int type = rand() % 4;
//	
//	
//	
//		GameUnit *unit = new BeanShooter();
//		/*unit->SetVelocity(velocity);*/
//		
//		unit->SetVelocity(velocity_static);
//		unit->SetPos(pos);
//		unit->Init("A", "png", 2);
//		
//		gameUnits.push_back(unit);
//		CCircle* bullet = new CCircle();
//		int radius = 18;
//		bullet->SetRadius(radius);
//		bullet->SetPos(pos_m);
//		bullet->SetVelocity(velocity);
//		circles.push_back(bullet);
//		//发射子弹，根据子弹的发射时间间隔可以设置位置和频率。
//		if (type == 0)
//			
//		{
//			
//			GameUnit* bu = new Bull1();
//			
//			bu->SetVelocity(velocity_enemy);
//			bu->SetPos(pos_enemy);
//			bu->Init("B", "png", 2);
//			gameUnits.push_back(bu);
//		}
//		if(type==1)
//		{
//			GameUnit* bu = new Bull2();
//			bu->SetVelocity(velocity_enemy1);
//			bu->SetPos(pos_enemy);
//			bu->Init("C", "png", 2);
//			gameUnits.push_back(bu);
//		}
//		if (type == 2)
//		{
//			GameUnit* bu = new Bull3();
//			bu->SetVelocity(velocity_enemy2);
//			bu->SetPos(pos_enemy);
//			bu->Init("D", "png", 2);
//		    gameUnits.push_back(bu);
//		}
//		if(type==3)
//		{
//			GameUnit* bu = new Bull3();
//			bu->SetVelocity(velocity_enemy3);
//			bu->SetPos(pos_enemy);
//			bu->Init("E", "png", 2);
//			gameUnits.push_back(bu);
//		}
//		
//	
//	return true;
//}
//
//
//void Interface::UserRender(QPainter& painter)
//{
//	
//   for (auto itr = circles.begin(); itr != circles.end(); itr++)
//   {
//	CCircle* unit = *itr;
//	unit->Render(painter);
//   }
//
//	for (auto itr = gameUnits.begin(); itr != gameUnits.end(); itr++)
//	{
//		GameUnit* unit = *itr;
//		unit->Render(painter);
//	}
//	/*for (auto itr_bu = Bull1s.begin(); itr_bu != Bull1s.end(); itr_bu++)
//	{
//		Bull1* unit = *itr_bu;
//		unit->Render(painter);
//	}*/
//
//}
//
//
//void Interface::UserUpdate(double time)
//{
//
//	for (auto itr = circles.begin(); itr != circles.end(); itr++)
//	{
//		CCircle* unit = *itr;
//		unit->Update(30);
//		unit->CheckPosition(width, height);
//	}
//
//	//检测游戏单元的生命状态
//	for (auto itr = gameUnits.begin(); itr != gameUnits.end(); )
//	{
//		GameUnit* unit = *itr;
//		
//		if (unit->isAlive())
//		{//活着
//			itr++;
//		}
//		else
//		{//死了
//			delete unit;
//			itr = gameUnits.erase(itr);
//		}
//	}
//
//	for (auto itr = gameUnits.begin(); itr != gameUnits.end(); itr++)
//	{
//		GameUnit *unit = *itr;
//		unit->Update(30);
//		unit->CheckPosition(width, height);
//	}
//
//	//检测僵尸单元的生命状态
//	for (auto itr = Bull1s.begin(); itr != Bull1s.end(); )
//	{
//		Bull1* unit = *itr;
//
//		if (unit->isAlive())
//		{//活着
//			itr++;
//		}
//		else
//		{//死了
//			delete unit;
//			itr = Bull1s.erase(itr);
//		}
//	}
//
//	for (auto itr = Bull1s.begin(); itr != Bull1s.end(); itr++)
//	{
//		Bull1* unit = *itr;
//		unit->Update(30);
//		unit->CheckPosition(width, height);
//	}
//	
//
//	
//}
//
//
//void Interface::UserInit()
//{
//}
//
//
////清理
//void Interface::UserFinish()
//{
//
//}
WeaponManager Interface::weaponManager;
ZombieManager Interface::zombieManager;
ShooterManager Interface::shooterManager;
GameInfo Interface::gameInfo;
Interface::Interface()//初始设置游戏状态为正在进行
{
	gameInfo.gameState = Game_Play;
}

Interface::~Interface()//对Gameunit的List进行内存清理
{
	//清除子弹
	
}

bool Interface::UserWndProc(int msg_type, int x, int y)//鼠标点击创建对象，实现用户与界面的交互
{
	srand(time(0));
	double	speed = 1.0 / 30;//(rand()%30+1.0)/30.0; //1.0/30;
	double speed1 = 1.5 / 30;
	double speed2 = 2.0 / 30;
	double speed3 = 2.5 / 30;
	/*double angle = rand() % 100 / 100.0 * 2.0 * 3.1415926;*/	//弧度
	double angle = 0.0;
	Vec2d pos(x, y);//设置坐标，行进路线
	Vec2d pos_m(x + 50, y - 25);
	Vec2d pos_enemy(600 - x, rand() % y);
	Vec2d velocity_static(0.0, 0.0);//设置行进速度，
	Vec2d velocity(-0.01, 0.0);
	int type = rand() % 4;



	BeanShooter* unit = new BeanShooter();

	unit->SetVelocity(velocity_static);
	unit->SetPos(pos);
	unit->Init("A", "png", 2);

	shooterManager.InsertShooter(unit);

// 	CCircle* bullet = new CCircle();
// 	
// 	bullet->SetPos(pos_m);
// 	bullet->SetVelocity(velocity);
// 	bullet->Init("F", "png", 1);
// 	weaponManager.InsertBullet(bullet);
	//产生子弹的同时随机产生僵尸,这里只设置每个豌豆射手发射一颗子弹，可以继续用fire优化
	type = 3;
	if (type == 0)

	{

		Bull1* bu = new Bull1();
		bu->SetVelocity(velocity);
		bu->SetPos(pos_enemy);
		bu->Init("B", "png", 2);
		zombieManager.InsertZombie(bu);
	}
	if (type == 1)
	{
		Bull1* bu = new Bull2();
		bu->SetVelocity(velocity);
		bu->SetPos(pos_enemy);
		bu->Init("C", "png", 2);
		/*getZombieManager().insertZombie(bu);*/
		zombieManager.InsertZombie(bu);
	}
	if (type == 2)
	{
		Bull1* bu = new Bull3();
		bu->SetVelocity(velocity);
		bu->SetPos(pos_enemy);
		bu->Init("D", "png", 2);
		zombieManager.InsertZombie(bu);
	}
	if (type == 3)
	{
		Bull1* bu = new Bull3();
		bu->SetVelocity(velocity);
		bu->SetPos(pos_enemy);
		bu->Init("E", "png", 2);
		zombieManager.InsertZombie(bu);
	}


	return true;
	//根据鼠标点击创建豌豆射手，发射子弹的同时，随机产生僵尸
}


void Interface::UserRender(QPainter& painter)
{

	/*for (auto itr = circles.begin(); itr != circles.end(); itr++)
	{
		CCircle* unit = *itr;
		unit->Render(painter);
	}*/
	//getShooterManager().render(painter);

	///*for (auto itr = gameUnits.begin(); itr != gameUnits.end(); itr++)
	//{
	//	GameUnit* unit = *itr;
	//	unit->Render(painter);
	//}*/
	//getZombieManager().render(painter);
	///*for (auto itr_bu = Bull1s.begin(); itr_bu != Bull1s.end(); itr_bu++)
	//{
	//	Bull1* unit = *itr_bu;
	//	unit->Render(painter);
	//}*/
	//getWeaponManager().render(painter);
	shooterManager.Render(painter);
	zombieManager.Render(painter);
	weaponManager.Render(painter);
	//调用manager中的render对创建的对象进行绘制

}


void Interface::UserUpdate(double time)
{
	Interface::getGameInfo().gameTime += time;

	/*for (auto itr = circles.begin(); itr != circles.end(); itr++)
	{
		CCircle* unit = *itr;
		unit->Update(30);
		unit->CheckPosition(width, height);
	}*/
	shooterManager.Update(time);

	zombieManager.Update(time);
	
	weaponManager.Update(time);

	//记录游戏时间并且持续更新

}

//void Interface::UserKeyPress(char key)
//{
//	switch (key)
//	{
//	case 'w':
//	case 'W':
//		beanShooter->moveUp();
//		break;
//	case 's':
//	case 'S':
//		beanShooter->moveDonw();
//		break;
//	case 'a':
//	case 'A':
//		beanShooter->Fire();
//		break;
//	}
//
//}
void Interface::UserInit()//用户初始化
{

}


//清理
void Interface::UserFinish()
{

}