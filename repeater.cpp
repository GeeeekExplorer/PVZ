#include "repeater.h"

Repeater::Repeater()
{
    atk = 25;
    hp = 300;
    time = int(1.4 * 1000 / 33);
    setMovie(":/images/Repeater.gif");
}

void Repeater::advance(int phase)
{
    if (!phase)
        return;
    update();
    if (hp <= 0)
        delete this;
    else if (++counter >= time)
    {
        counter = 0;
        QList<QGraphicsItem *> items = collidingItems();
        if (!collidingItems().isEmpty())
        {
            Pea *pea = new Pea(atk);
            pea->setX(x() + 32);
            pea->setY(y());
            scene()->addItem(pea);
            pea = new Pea(atk);
            pea->setX(x() + 64);
            pea->setY(y());
            scene()->addItem(pea);
            return;
        }
    }
}

bool Repeater::collidesWithItem(const QGraphicsItem *other, Qt::ItemSelectionMode mode) const
{
    Q_UNUSED(mode)
    return other->type() == Zombie::Type && qFuzzyCompare(other->y(), y());
}
