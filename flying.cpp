#include "flying.h"

flying::flying(qreal size, const QString &imagesPath, QGraphicsItem *parent ) {}
int flying::GetAttackRange(){
    
    return AttackRange;
}

int flying::GetHp()
{
    return HP;
}

int flying::GetMobility()
{
    return mobility;
}

int flying::GetPlayerOwn()
{
    return PlayerOwn;
}

int flying::getDamage()
{
    return Damage;
}
