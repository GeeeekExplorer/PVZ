#ifndef OTHER_H
#define OTHER_H

#include <QGraphicsItem>
#include <QtWidgets>
#include <QPainter>

class Other : public QGraphicsItem
{
public:
    enum { Type = UserType + 3};
    Other();
    int type() const override;
};

#endif // OTHER_H
