#include "GUI.h"

GUI::GUI() :
    mRacket({300, 40}),
    mIsPressed(false),
    mDir(0)
{
    mRacket.setPosition(300, 300);
    mRacket.setFillColor(sf::Color::Blue);
}

void
GUI::process()
{
    sf::RenderWindow window(sf::VideoMode::getDesktopMode(), "");

    sf::Event event{};
    while (window.isOpen())
    {

        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
            {
                window.close();
            }

            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::A))
            {
                mDir = -1;
                mIsPressed = true;
            }
            else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::D))
            {
                mDir = 1;
                mIsPressed = true;
            }

        }

        window.clear();

        window.draw(mRacket);
        for (const sf::CircleShape& ball : mBalls)
        {
            window.draw(ball);
        }
        for (const sf::RectangleShape& brick : mBricks)
        {
            window.draw(brick);
        }

        window.display();
    }
}

void
GUI::setFrame(int racketX,
              int racketY,
              std::vector<int> ballsXs,
              std::vector<int> ballsYs,
              std::vector<int> bricksXs,
              std::vector<int> bricksYs)
{
    mRacket.setPosition(racketX, racketY);
}

int
GUI::getKeyboardResponse() {
    while (!mIsPressed)
    {

    }

    mIsPressed = false;

    return mDir;
}

int
GUI::getTopScreenBorder()
{
    return 0;
}

int
GUI::getLeftScreenBorder()
{
    return 0;
}

int
GUI::getRightScreenBorder()
{
    return sf::VideoMode::getDesktopMode().width;
}

int
GUI::getBottomScreenBorder()
{
    return sf::VideoMode::getDesktopMode().height;
}
