#include "node.hpp"

Node::Node()
{
}

void Node::Move(int x, int y)
{

}

void Node::CreateNode(int x, int y, int width, int height, sf::Color Color)
{
    Shape = sf::Shape::Rectangle(x,y,x + width, y + height,Color);
}

void Node::CreateNode(int x, int y, int width, int height, sf::Color Color, int Outline, sf::Color OutlineColor)
{
    Shape = sf::Shape::Rectangle(x,y,x + width, y + height,Color, Outline, OutlineColor);
}
