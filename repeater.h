#ifndef REAPTER_H
#define REAPTER_H

#include "plant.h"
#include "zombie.h"
#include "pea.h"

class Repeater : public Plant
{
public:
    Repeater();
    void advance(int phase) override;
    bool collidesWithItem(const QGraphicsItem *other, Qt::ItemSelectionMode mode) const override;
};

#endif // REAPTER_H
