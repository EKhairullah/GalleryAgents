#ifndef FLYING_H
#define FLYING_H
#include "agents.h"
class flying:public Agents
{
public:
    flying(qreal size, const QString &imagePath, QGraphicsItem *parent = nullptr);
    int GetHp();
    int GetMobility();
    int getDamage();
    int GetAttackRange();
    int GetPlayerOwn();
    
private:
    QString Name = "FlY"; // Billy, Abgus, ...
    int HP = 1;
    int mobility = 10;
    int Damage = 10;
    int AttackRange = 10;
    int PlayerOwn = 10;
};

#endif // FLYING_H
