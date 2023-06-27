#pragma once
#include "GameUnit.h"
class Bull1 :
    public GameUnit
{

public:
    void Render(QPainter& painter);
    virtual void Limit_life(const GameUnit& unit);
    bool Zombiewin()const; //检查僵尸是否到达边界，进而判断游戏输赢   	
        
};

