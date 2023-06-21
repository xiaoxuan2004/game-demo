#include "MTObject.h"

MTObject::MTObject()
{
	velocity.x = 0;
	velocity.y = 0 ;
}

//��ײ���
//�����ǽ�����ཻ���
bool MTObject::intersect(const MTObject& shape)const//���������
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

bool MTObject::pointIn(const Vec2i& p)const//�������
{

	if (p.x<center.x - width / 2 || p.x>center.x + width / 2)return false;
	if (p.y<center.y - height / 2 || p.y>center.y + height / 2)return false;

	return true;
};