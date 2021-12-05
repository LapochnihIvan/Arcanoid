#include "Racket.h"

Racket::Racket() :
        mY(970)
{
    mX = 760;
}

void
Racket::move(const int dir)
{
    mX += dir;
}

int Racket::getX()
{
    return mX;
}

int Racket::getY()
{
    return mY;
}
