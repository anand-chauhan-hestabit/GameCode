#ifndef TEST_HPP
#define TEST_HPP

#include "Library/SFML/include/SFML/Graphics.hpp"

class test
{
public:
    test()
    {

        sf::RenderWindow window(sf::VideoMode(800, 600), "SFML Ball Bounce");

        sf::CircleShape ball(50.f);
        ball.setFillColor(sf::Color::Green);
        ball.setPosition(375.f, 275.f);

        while (window.isOpen())
        {
            sf::Event event;
            while (window.pollEvent(event))
            {
                if (event.type == sf::Event::Closed)
                    window.close();
            }

            window.clear();
            window.draw(ball);
            window.display();
        }
    }
};

#endif 