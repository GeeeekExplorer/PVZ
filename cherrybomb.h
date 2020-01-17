#ifndef CHERRYBOMB_H
#define CHERRYBOMB_H

#include "plant.h"
#include "zombie.h"

class CherryBomb : public Plant
{
public:
    CherryBomb();
    QRectF boundingRect() const override;
    void advance(int phase) override;
    bool collidesWithItem(const QGraphicsItem *other, Qt::ItemSelectionMode mode) const override;
};

#endif // CHERRYBOMB_H
