#include "GameWindow.hpp"

namespace
{
constexpr int WIDTH {800};
constexpr int HEIGHT {600};
const std::string NAME {"Arkanoid"};
}

int main(int argc, char* argv[])
{
    GameWindow gameWindow{WIDTH, HEIGHT, NAME};

    gameWindow.addElement();
    gameWindow.render();

    return 0;
}
