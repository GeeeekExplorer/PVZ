#ifndef SCREENZOMBIE_H
#define SCREENZOMBIE_H

#include "zombie.h"
#include "plant.h"

class ScreenZombie : public Zombie
{
public:
    ScreenZombie();
    void advance(int phase) override;
};

#endif // SCREENZOMBIE_H
