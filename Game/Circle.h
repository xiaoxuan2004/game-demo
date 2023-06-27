//#ifndef _Circle_H
//#define _Circle_H
//
#pragma once
#include"GameUnit.h"

//子弹类
class CCircle : public GameUnit
{
public:
	CCircle(void);
	~CCircle(void);
public:
	void	Update(int time);
	
private:
	/*int			radius;*/
};

//#endif