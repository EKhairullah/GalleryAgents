#ifndef FLOATING_H
#define FLOATING_H
#include "agents.h"
class floating: public Agents
{
public:
    floating(qreal size, const QString &imagePath, QGraphicsItem *parent = nullptr);
    int GetHp();
    int GetMobility();
    int getDamage();
    int GetAttackRange();
    int GetPlayerOwn();
    
private:
    QString Name = "FlY"; 
    int HP = 1;
    int mobility = 10;
    int Damage = 10;
    int AttackRange = 10;
    int PlayerOwn = 10;
};

#endif // FLOATING_H
