#include "Federation.hpp"
using namespace std;

Federation::Starfleet::Ship::Ship(int length, int width, std::string name, short maxWarp): _length(length), _width(width), _name(name), _maxWarp(maxWarp)
{
  cout << "The ship of USS " << name << " has been finished. It is " << length << "m in length and " << width << "m in width.\n" << "It can go to Warp " << maxWarp << "!!!" <<  endl;
}



Federation::Starfleet::Ship::~Ship()
{

}

Federation::Ship::Ship(int length, int width, std::string name, int speed = 1): _length(length), _width(width), _name(name)
{
  cout << "Poverty Ship spawned!" << endl;
}

Federation::Ship::~Ship()
{

}
