#pragma once
#include "SFML/Graphics.hpp"
#include <string>
#include <memory>

using Dimension = unsigned int;

class GameWindow
{
public:
    GameWindow(Dimension, Dimension, std::string);
    void render();
    void addElement();

private:
    std::vector<std::shared_ptr<sf::Drawable>> elements;
    sf::RenderWindow window;
    sf::Event event;
};
