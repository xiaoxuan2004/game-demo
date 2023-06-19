#ifndef _MTOBJECT_H
#define _MTOBJECT_H
#include <QPainter>
#include "Vec2.h"

class MTObject
{
protected:
	Vec2d			center;				//λ��
	double			width, height;
	Vec2d		velocity;

	//Rect2d		boundingbox;
public:
	MTObject();
	virtual ~MTObject() {}; //�ж�̬�������࣬����������Ĭ��״̬

	void	SetPos(const Vec2d& pt) { center = pt; }
	void	SetVelocity(const Vec2d& v) { velocity = v; }
	virtual void	Render(QPainter&) {}
	virtual void	Update(double time) 
	{
		center.x += velocity.x * time;
		center.y += velocity.y * time;
	}

	virtual bool intersect(const MTObject& shape)const;
	bool pointIn(const Vec2i& p)const;
};
#endif

