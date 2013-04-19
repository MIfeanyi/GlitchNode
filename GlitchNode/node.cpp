#include "node.hpp"

Node::Node()
{
}

void Node::Move(int x, int y)
{
    /*
     *We need to make sure we move the Node
     *& also move all the sub nodes while keeping them correctly
     *Offseted.
     *Usage: We use this when the keyboard is pressed & the speed is sent toward us.
     */
    //First move the Node:
    Position.x += x;
    Position.y += y;
    //Move Sub Nodes
    //[0] = Top, [1] = Right, [2] = Bottom, [3] = Left
    for(int i = 0; i < 4; i++ )
    {
        SubNodes[i].Position.x =  Position.x + SubNodes[i].Offset.x;
        SubNodes[i].Position.y =  Position.y + SubNodes[i].Offset.y;
    }
}

void Node::CreateNode(int x, int y, int width, int height, sf::Color Color)
{
    Shape = sf::Shape::Rectangle(x,y,x + width, y + height,Color);
}

void Node::CreateNode(int x, int y, int width, int height, sf::Color Color, int Outline, sf::Color OutlineColor)
{
    Shape = sf::Shape::Rectangle(x,y,x + width, y + height,Color, Outline, OutlineColor);
}

void Node::OffsetSubNodes(int OffsetX, int OffsetY)
{
    /*
     *We need to move the subnodes in 4 different spots.
     *Make sure spacing is even all sides around.
     *add offsets to the variables. add this to the node's position
     *to get the sub node's position when Node::Move(x,y) is called.
     */
    //[0] = Top, [1] = Right, [2] = Bottom, [3] = Left
    for(int i = 0; i < 4; i++ )
    {
        switch(i)
        {
            case 0:
                SubNodes[i].Offset.x = OffsetX;
                SubNodes[i].Offset.y = OffsetY * -1;
                break;
            case 1:
                SubNodes[i].Offset.x = OffsetX;
                SubNodes[i].Offset.y = OffsetY;
                break;
            case 2:
                SubNodes[i].Offset.x = OffsetX;
                SubNodes[i].Offset.y = OffsetY;
                break;
            case 3:
                SubNodes[i].Offset.x = OffsetX * -1;
                SubNodes[i].Offset.y = OffsetY;
                break;
            default:
                //Somone don' goofed
                break;
        };
    }
}

void Node::Draw(sf::RenderWindow &App)
{
    App.Draw(Shape);

    for(int i = 0; i < 4; i++ )
    {
        App.Draw(SubNodes[i].Shape);
    }
}


