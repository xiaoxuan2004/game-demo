#pragma once
#include "GameUnit.h"
class Bull1 :
    public GameUnit
{

public:
    void Render(QPainter& painter);
    virtual void Limit_life(const GameUnit& unit);
        	
        
};

