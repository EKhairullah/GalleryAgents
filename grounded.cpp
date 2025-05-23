#include "grounded.h"

grounded::grounded(qreal size, const QString &imagesPath, QGraphicsItem *parent) {}


int grounded::GetAttackRange()
{
    return AttackRange;
}

int grounded::GetHp()
{
    return HP;
}

int grounded::GetMobility()
{
    return mobility;
}


int grounded::GetPlayerOwn()
{
    return PlayerOwn;
}

int grounded::getDamage()
{
    return Damage;
}
