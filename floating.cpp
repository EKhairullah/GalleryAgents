#include "floating.h"

floating::floating(qreal size, const QString &imagesPath, QGraphicsItem *parent) {}

int floating::GetAttackRange()
{
    return AttackRange;
}

int floating::GetHp()
{
    return HP;
}

int floating::GetMobility()
{
    return mobility;
}

int floating::GetPlayerOwn()
{
    return PlayerOwn;
}


int floating::getDamage()
{
    return Damage;
}
