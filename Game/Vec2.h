#ifndef _TVec2_H
#define _TVec2_H

template <class T>
class TVec2
{
public:
	T x, y;	//此处public是因为数学里 .x, .y的用法太常见了
public:
	TVec2(){x=y=(T)0.0;};
	TVec2(T x, T y){this->x=x; this->y=y;};
};

typedef TVec2<int> Vec2i;
typedef TVec2<double> Vec2d;

#endif // !_TVec2_H