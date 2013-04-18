#ifndef NODE_HPP
#define NODE_HPP


#include "subnode.hpp"

class Node
{
    enum ElementNames{
        Chromium = 0, Hydrogen, Oxygen, Nitrogen
    };

public:
    sf::Shape Shape;
    sf::Vector2i Position;
    sf::Vector2i Speed;
    int HP;
    int Elements[4];
    void CreateNode(int x, int y, int width, int height, sf::Color Color);
    void CreateNode(int x, int y, int width, int height, sf::Color Color, int Outline, sf::Color OutlineColor);
    void Move(int x, int y);
    Node();
};

#endif // NODE_HPP
