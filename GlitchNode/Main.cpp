#include "Game.hpp"


int main(int argc, char *argv[])
{
    enum {
        ExitGame = -1, Menu = 0, Game, Options
    };

    bool Running = true;
    int State = 0;

    sf::RenderWindow App(sf::VideoMode::GetMode(0), "Arc Defense",  sf::Style::Fullscreen);

    while(Running)
    {
        switch(State)
        {
            case Menu:
                State = UpdateMenu(App);
                break;
            case Game:
                State = UpdateGame(App);
                break;
            case Options:
                break;
            case ExitGame:
                Running = false;
                break;
            default:
                return State;
                break;

        };
    }
    return 0;
}
