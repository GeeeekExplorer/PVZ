#ifndef BUTTON_H
#define BUTTON_H

#include <QTimer>
#include <QSound>
#include "other.h"

class Button : public Other
{
public:
    Button(QSound *s, QTimer *t);
    QRectF boundingRect() const override;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget) override;
    void mousePressEvent(QGraphicsSceneMouseEvent *event) override;
private:
    QSound *sound;
    QTimer *timer;
};

#endif // BUTTON_H
