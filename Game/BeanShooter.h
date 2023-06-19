#pragma once
#include "GameUnit.h"
#include"Circle.h"

class BeanShooter :
    public GameUnit
{
public:
    void fire();//这里我用Interface的头文件出现了重定义？还未解决
    virtual void Limit_life(const GameUnit& unit);
};


