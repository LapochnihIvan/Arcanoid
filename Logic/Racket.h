#ifndef ARCANOID_RACKET_H
#define ARCANOID_RACKET_H


class Racket
{
public:
    Racket();

    void move(int dir);

    int getX();
    int getY();

private:
    int mX;
    const int mY;
    int mWidth;
    int mHeight;
};


#endif //ARCANOID_RACKET_H
