#ifndef ARCANOID_GUI_H
#define ARCANOID_GUI_H

#include <SFML/Graphics/RectangleShape.hpp>
#include <SFML/Graphics/CircleShape.hpp>
#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/Window/Event.hpp>

class GUI
{
public:
    GUI();

    void process();

    void setFrame(int racketX,
                  int racketT,
                  std::vector<int> ballsXs,
                  std::vector<int> ballsYs,
                  std::vector<int> bricksXs,
                  std::vector<int> bricksYs);

    int getKeyboardResponse();

    static int getTopScreenBorder();

    static int getLeftScreenBorder();

    static int getRightScreenBorder();

    static int getBottomScreenBorder();

private:
    sf::RectangleShape mRacket;
    std::vector<sf::CircleShape> mBalls;
    std::vector<sf::RectangleShape> mBricks;
    bool mIsPressed;
    int mDir;
};

#endif //ARCANOID_GUI_H
