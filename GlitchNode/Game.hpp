#ifndef GAME_HPP
#define GAME_HPP

#include <SFML/Graphics.hpp>
#include <iostream>

using namespace std;

int UpdateMenu(sf::RenderWindow &App)
{

    bool Running = true;

    const sf::Input& Input = App.GetInput();

    sf::Shape Rect = sf::Shape::Rectangle(0,50,100,100,sf::Color(150, 85, 85),5.f,sf::Color(150, 0, 0));

    while(Running)
    {
        if(Input.IsKeyDown(sf::Key::Left))
        {
            cout<<"Left Key is down"<<endl;
        }
        if(Input.IsKeyDown(sf::Key::Escape))
        {
            App.Close();
            Running = false;
        }
        sf::Event Event;
        while (App.GetEvent(Event))
        {
            // Close window : exit
            if (Event.Type == sf::Event::Closed)
            {
                App.Close();
                Running = false;
            }

        }
        App.Clear();

        App.Draw(Rect);

        App.Display();
    }
    return -1;
}

#endif // GAME_HPP
