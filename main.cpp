#include <thread>
#include <iostream>

#include "GUI/GUI.h"
#include "Logic/Racket.h"
#include "Logic/Ball.h"
#include "Logic/Game.h"
#include "Logic/Brick.h"

int main()
{
    GUI gui;
    Game game;
    Racket racket;
    Ball ball;
    std::vector<Brick> bricks(1);

    bricks[0].x = 100;
    bricks[0].y = 100;
    bricks[0].width = 100;
    bricks[0].height = 20;

    std::thread runGui(&GUI::process, &gui);
    runGui.detach();

    while (!game.isEnd())
    {
        std::thread racketDirCheck(&Racket::move, &racket, gui.getKeyboardResponse());
        racketDirCheck.detach();

        if (ball.isFall(GUI::getBottomScreenBorder()))
        {
            game.loseHP();
        }

        ball.checkXCollision(GUI::getLeftScreenBorder());
        ball.checkXCollision(GUI::getRightScreenBorder());
        ball.checkYCollision(GUI::getTopScreenBorder());
        ball.checkYCollision(GUI::getBottomScreenBorder());

        for (Brick& brick : bricks)
        {
            //checkCollision
        }

        gui.setFrame(racket.getX(),
                     racket.getY(),
                     {ball.getX()},
                     {ball.getY()},
                     {bricks[0].x},
                     {bricks[0].y});

    }
}
