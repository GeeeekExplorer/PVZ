#ifndef SHOVEL_H
#define SHOVEL_H

#include "other.h"
#include "plant.h"

class Shovel : public Other
{
public:
    Shovel();
    QRectF boundingRect() const override;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget) override;
    void mousePressEvent(QGraphicsSceneMouseEvent *event) override;
    void mouseMoveEvent(QGraphicsSceneMouseEvent *event) override;
    void mouseReleaseEvent(QGraphicsSceneMouseEvent *event) override;
    void removePlant(QPointF pos);
};

#endif // SHOVEL_H
