#include "waterwalking.h"

waterWalking::waterWalking(qreal size, const QString &imagesPath, QGraphicsItem *parent) {}

int waterWalking::GetAttackRange()
{
    return AttackRange;
}

int waterWalking::GetHp()
{
    return HP;
}

int waterWalking::GetMobility()
{
    return mobility;
}

int waterWalking::GetPlayerOwn()
{
    return PlayerOwn;
}


int waterWalking::getDamage()
{
    return Damage;
}

