#include "Circle.h"
CCircle::CCircle(void)
{
}

CCircle::~CCircle(void)
{
}

void CCircle::Update(int time)
{
	center.x += velocity.x * time;
	center.y += velocity.y * time;
	GameUnit::Update(time);
	
}

//检查是否到达边界，到达后将速度分量处理成反弹效果
//void CCircle::CheckPosition(int width, int height)
//{
//	/*GameInfo& info = Interface::getGameInfo();
//	if (center.x - width / 2 > info.windowWidth)
//	{
//		life = 0;
//	}*/
//}

//void CCircle::Render(QPainter& painter)
//{
//	
//
//	// 反走样
//	painter.setRenderHint(QPainter::Antialiasing, true);
//
//	// 设置渐变色
//	QRadialGradient radial(110, 110, 50, 130, 130);
//	radial.setColorAt(0, Qt::darkGreen);
//	radial.setColorAt(1, Qt::green);
//
//	// 设置显示模式
//	radial.setSpread(QGradient::ReflectSpread);
//
//	// 设置画笔颜色、宽度
//	painter.setPen(QPen(QColor(0, 0, 0), 1));
//
//	// 设置画刷填充
//	painter.setBrush(radial);
//
//	// 绘制椭圆
//	painter.drawEllipse(center.x - radius, center.y - radius, radius * 2, radius * 2);
//}
