#include "Ball.h"

Ball::Ball() :
        mX(730),
        mY(950),
        mYDir(-1),
        mXDir(1)
{

}

void
Ball::move()
{
    mX += mXDir;
    mY += mYDir;
}

bool
Ball::checkXCollision(int xBorder)
{
    return mX == xBorder || mX + mWidth == xBorder;
}

bool
Ball::checkYCollision(int yBorder)
{
    return mY == yBorder || mY + mHeight == yBorder;
}

bool
Ball::isFall(int yBottomScreen)
{
    return mY == yBottomScreen;
}

void
Ball::changeXDir()
{
    mXDir = mYDir == 1 ? -1 : 1;
}

void
Ball::changeYDir()
{
    mXDir = mYDir == 1 ? -1 : 1;
}

int Ball::getX()
{
    return mX;
}

int Ball::getY()
{
    return mY;
}
