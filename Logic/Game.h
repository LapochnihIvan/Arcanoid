//
// Created by ivan on 05.12.2021.
//

#ifndef ARCANOID_GAME_H
#define ARCANOID_GAME_H


class Game
{
public:
    Game();

    bool isEnd();

    void loseHP();

    void getBonus();

private:
    int hp;
};


#endif //ARCANOID_GAME_H
