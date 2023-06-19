#ifndef _Interface_H
#define _Interface_H

#include <vector>
#include <list>
#include <QPainter>
//#include "Circle.h"
#include "GameUnit.h"
//#include"BeanShooter.h"
#include"Bull1.h"
//#include"Bull2.h"
//#include"Bull3.h"
#include <QTimerEvent>
#include"ZombieManager.h"
#include"WeaponManager.h"
#include"ShooterManager.h"
//class Interface
//{
////protected:
////	virtual void timerEvent(QTimerEvent* event);
//private:
//	int width, height;
//	/*int clock;*/
//	/*std::vector<CCircle*>	circles;*/
//	std::list<CCircle*>	circles;
//	std::list<GameUnit*>	gameUnits;
//	/*std::list<Bull1*>Bull1s;*/
//public:
//	Interface();
//	~Interface();
//
//	void UserInit();		//用户初始化函数
//	void UserFinish();		//用户清理函数
//	
//	void OnSize(int nx, int ny) { width = nx, height = ny; }
//	bool UserWndProc(int type, int x, int y); //消息响应函数
//	void UserRender(QPainter& painter);       //用户绘制函数
//	void UserUpdate(double time = 0);         //用户状态更新
//};
enum GameState
{
	Game_Play,
	Game_Succeed,
	Game_Fail
};

struct GameInfo
{
	int windowWidth;
	int windowHeight;
	GameState gameState;
};

class Interface
{
private:
	int width, height;
	//std::list<GameUnit*>	gameUnits;
	BeanShooter* beanShooter;

	static WeaponManager weaponManager;
	static ZombieManager zombieManager;
	static ShooterManager shooterManager;
	/*static GameEventManager gameEventManager;*/
	static GameInfo gameInfo;
public:
	static WeaponManager& getWeaponManager()
	{
		//static WeaponManager instance;
		//return instance;
		return weaponManager;
	}
	static ShooterManager& getShooterManager()
	{
		return shooterManager;
	}
	static ZombieManager& getZombieManager()
	{
		return zombieManager;
	}
	static GameInfo& getGameInfo()
	{
		return gameInfo;
	}
	static GameState& gameState()
	{
		return gameInfo.gameState;
	}
public:
	Interface();
	~Interface();

	void UserInit();		//用户初始化函数
	void UserFinish();		//用户清理函数

	void OnSize(int nx, int ny) { width = nx, height = ny; }
	bool UserWndProc(int type, int x, int y); //消息响应函数
	void UserRender(QPainter& painter);       //用户绘制函数
	void UserUpdate(double time = 0);         //用户状态更新

	/*void UserKeyPress(char key);*/

};
//public:
//	Interface();
//	~Interface();
//
//	void UserInit();		//用户初始化函数
//	void UserFinish();		//用户清理函数
//	
//	void OnSize(int nx, int ny) { width = nx, height = ny; }
//	bool UserWndProc(int type, int x, int y); //消息响应函数
//	void UserRender(QPainter& painter);       //用户绘制函数
//	void UserUpdate(double time = 0);         //用户状态更新
//};



#endif