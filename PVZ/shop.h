#ifndef SHOP_H
#define SHOP_H

#include "plant.h"
#include "other.h"
#include "card.h"
#include "sun.h"
#include "sunflower.h"
#include "peashooter.h"
#include "cherrybomb.h"
#include "wallnut.h"
#include "snowpea.h"
#include "potatomine.h"
#include "repeater.h"
#include "basiczombie.h"

class Shop : public Other
{
public:
    int sun;
    Shop();
    QRectF boundingRect() const override;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget) override;
    void advance(int phase) override;
    void addPlant(QString s, QPointF pos);
private:
    int counter;
    int time;
};

#endif // SHOP_H
