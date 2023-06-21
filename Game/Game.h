#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Game.h"

#include <QtCore>
#include <time.h>
#include "Interface.h"
#include "MTTime.h"

class Game : public QMainWindow
{
    Q_OBJECT

public:
    Game(QWidget *parent = nullptr);
    ~Game();
private:
	void paintEvent(QPaintEvent*);
	void timerEvent(QTimerEvent*);
	void resizeEvent(QResizeEvent* event);
	void mousePressEvent(QMouseEvent* event);
	void keyPressEvent(QKeyEvent* event);

private:
    Ui::GameClass ui;

	QSize	window_size;

	Interface interface;
	MTTime		time;
};
