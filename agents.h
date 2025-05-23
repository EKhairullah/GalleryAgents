#ifndef AGENTS_H
#define AGENTS_H
#include <QString>
#include <QGraphicsItem>
class Agents
{
public:
    Agents();
    QString type; 
    int mobility;
    int Damage;
    int AttackRange;
    int PlayerOwn;
    QString Name;
};

#endif // AGENTS_H
