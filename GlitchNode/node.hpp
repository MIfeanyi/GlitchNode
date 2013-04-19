#ifndef NODE_HPP
#define NODE_HPP


#include "subnode.hpp"

class Node: public SubNode
{


public:

    sf::Vector2i Speed; // used too move all of the
    int HP;
    int Elements[4]; // holds value of collected material for each Node
    SubNode SubNodes[4]; // 4 Subnodes
    void CreateNode(int x, int y, int width, int height, sf::Color Color);
    void CreateNode(int x, int y, int width, int height, sf::Color Color, int Outline, sf::Color OutlineColor);
    void Move(int x, int y);
    void OffsetSubNodes(int OffsetX, int OffsetY); // sets up nodes position.
    //[0] = Top, [1] = Right, [2] = Bottom, [3] = Left

    void Draw(sf::RenderWindow &App); // Draws entire Node
    Node();

};

#endif // NODE_HPP
