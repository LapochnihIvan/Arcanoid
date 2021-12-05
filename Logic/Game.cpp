#include "Game.h"

Game::Game() :
    hp(3)
{

}

bool
Game::isEnd()
{
    return hp == 0;
}

void
Game::loseHP()
{
    hp--;
}
