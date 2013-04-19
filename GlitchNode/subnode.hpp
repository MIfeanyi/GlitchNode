#ifndef SUBNODE_HPP
#define SUBNODE_HPP

#include <SFML/Graphics.hpp>


class SubNode
{
public:
    enum ElementNames{
        Chromium = 0, Hydrogen, Oxygen, Nitrogen
    };

    SubNode();
    int HP;
    bool Active;
    sf::Shape Shape;
    sf::Vector2i Position;
    sf::Vector2i Offset;
    int Type; // Tells us what type of shape we have

    /*We need a way to tell what type of shape we have here...
    - How do we store the shape?
    - How do we draw the node to the screen?
    - How do we
    - Solution: Have sf::shape hold the shape.
      */
};

#endif // SUBNODE_HPP
