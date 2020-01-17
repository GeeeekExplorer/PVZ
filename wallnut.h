#ifndef WALLNUT_H
#define WALLNUT_H

#include "plant.h"

class WallNut : public Plant
{
public:
    WallNut();
    void advance(int phase) override;
};

#endif // WALLNUT_H
