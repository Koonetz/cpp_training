#include <iostream>
#include <string>
#include <cstring>

namespace Federation
{
  namespace Starfleet
  {
    class Ship
    {
    public:
      Ship(int length, int width, std::string name, short maxWarp);
      ~Ship();
    private:
      int _length;
      int _width;
      std::string _name;
      short _maxWarp;
    };
  };
  
  class Ship
  {
  public:
    Ship(int length, int width, std::string name);
    ~Ship();
  private:
    int _length;
    int _width;
    std::string _name;
  };
};
