#ifndef GAME_HPP
#define GAME_HPP

#include <SFML/Graphics.hpp>
#include <iostream>

using namespace std;


#include "node.hpp"

int UpdateMenu(sf::RenderWindow &App)
{

    bool Running = true;

    const sf::Input& Input = App.GetInput();

    sf::Shape Rect = sf::Shape::Rectangle(0,50,100,100,sf::Color(150, 85, 85),5.f,sf::Color(150, 0, 0));

    while(Running)
    {
        //if(Input.IsKeyDown())
        if(Input.IsKeyDown(sf::Key::Left))
        {
            cout<<"Left Key is down"<<endl;
        }
        if(Input.IsKeyDown(sf::Key::Escape))
        {
            App.Close();
            Running = false;
        }
        if(Input.IsKeyDown(sf::Key::Space))
        {
            return 1;
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

int UpdateGame(sf::RenderWindow &App)
{
    bool Running = true;

    const sf::Input& Input = App.GetInput();

    Node Player;
    Player.CreateNode(200,200,50,50,sf::Color(0,255,0));
    while(Running)
    {
            //sf::Shape::Rectangle(0,50,100,100,sf::Color(150, 85, 85),5.f,sf::Color(150, 0, 0));
        App.Clear();
        App.Draw(Player.Shape);
        App.Display();

    }
    return 0;
}


#endif // GAME_HPP
