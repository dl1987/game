#include "GameWindow.hpp"


GameWindow::GameWindow(Dimension width, Dimension height, std::string name)
    : window(sf::VideoMode(width, height), name)
{}

void GameWindow::render()
{
    while(window.isOpen())
    {
        while(window.pollEvent(event))
        {
            switch(event.type)
            {
            case sf::Event::Closed:
                window.close();
                break;
            default:
                break;
            };
        }
        window.clear();
        for(const auto& element : elements)
        {
            window.draw(*element);
        }
        //TODO draw all elements
        window.display();
    }
}

void GameWindow::addElement()
{
    auto circle = std::make_shared<sf::CircleShape>(50.0);
    circle->setFillColor(sf::Color::Yellow);
    elements.emplace_back(std::move(circle));
}
