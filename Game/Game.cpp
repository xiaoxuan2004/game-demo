#include "Game.h"

#include <QPainter>
#include <QMouseEvent>
#include "Interface.h"

Game::Game(QWidget *parent) : QMainWindow(parent)
{
    ui.setupUi(this);//将当前类的实例传入 setupui 函数中进行初始化,启动定时器


	startTimer(33);//设置定时器的时间
}

Game::~Game()
{
}



void Game::paintEvent(QPaintEvent*)
{

	double dTime = 0.030;
	static bool firstTime = true;
	if (firstTime)
	{
		firstTime = false;
		time.Reset();
		//interface.userInit();
	}
	else
	{
		dTime = time.GetDelataTime();
	}


	QPainter painter(this);
	interface.UserUpdate(dTime);
	interface.UserRender(painter);
}

void Game::timerEvent(QTimerEvent*)
{
	repaint();
}

void Game::resizeEvent(QResizeEvent* event)
{
	window_size = size();
	interface.OnSize(window_size.width(), window_size.height());
}

void Game::mousePressEvent(QMouseEvent* event)
{
	QPoint pt = event->pos();//获取鼠标位置
	interface.UserWndProc(0, pt.x(), pt.y());
}

void Game::keyPressEvent(QKeyEvent* event)//对按键时间的响应
{
	switch (event->key())
	{
	case 'a':
	case 'A':
		qDebug() << event->key() << " is pressed.";
		break;
	}
}
