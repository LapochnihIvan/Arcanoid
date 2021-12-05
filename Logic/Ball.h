#ifndef ARCANOID_BALL_H
#define ARCANOID_BALL_H


class Ball
{
public:
    Ball();

    void move();

    bool checkXCollision(int xBorder);

    bool checkYCollision(int yBorder);

    bool isFall(int yBottomScreen);

    int getX();

    int getY();

    void changeXDir();

    void changeYDir();

private:
    int mX;
    int mY;
    int mXDir;
    int mYDir;
    int mWidth;
    int mHeight;


};


#endif //ARCANOID_BALL_H
