#ifndef _Shape_H
#define _Shape_H

#include <QPainter>
#include "Vec2.h"

class Shape
{
protected:
	Vec2d		pos;				//位置
	Vec2d		velocity;
public:
	Shape() {};
	void	SetPos(const Vec2d& pt) { pos = pt; }
	void	SetVelocity(const Vec2d& v) { velocity = v; }

	void	Render(QPainter&) {}
	void	Update(int time)
	{
		pos.x += velocity.x * time;
		pos.y += velocity.y * time;
	}
	bool	CheckPosition(int, int) {}
	Vec2d&get_pos() { return pos; }
	
};

#endif // !_Shape_H