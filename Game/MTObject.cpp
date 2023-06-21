#include "MTObject.h"

MTObject::MTObject()
{
	velocity.x = 0;
	velocity.y = 0 ;
}

//碰撞检测
//不考虑交叉的相交情况
bool MTObject::intersect(const MTObject& shape)const//矩形与矩形
{
	Vec2d delta;
	delta.x = center.x - shape.center.x;
	delta.y = center.y - shape.center.y;
	int w = (width + shape.width) / 2;
	int h = (height + shape.height) / 2;
	if (abs(delta.x) < w && abs(delta.y) < h)
		return true;
	return false;
}

bool MTObject::pointIn(const Vec2i& p)const//点与矩形
{

	if (p.x<center.x - width / 2 || p.x>center.x + width / 2)return false;
	if (p.y<center.y - height / 2 || p.y>center.y + height / 2)return false;

	return true;
};