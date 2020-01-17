#ifndef SNOWPEA_H
#define SNOWPEA_H

#include "plant.h"
#include "zombie.h"
#include "pea.h"

class SnowPea : public Plant
{
public:
    SnowPea();
    void advance(int phase) override;
    bool collidesWithItem(const QGraphicsItem *other, Qt::ItemSelectionMode mode) const override;
};

#endif // SNOWPEA_H
