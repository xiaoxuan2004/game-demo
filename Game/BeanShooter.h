#pragma once
#include "GameUnit.h"
#include"Circle.h"

class BeanShooter :
    public GameUnit
{
public:
    void fire();//��������Interface��ͷ�ļ��������ض��壿��δ���
    virtual void Limit_life(const GameUnit& unit);
};


