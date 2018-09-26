#include <iostream>
#include <string>
#include <cstring>
#include "WarpSystem.hpp"

namespace Federation
{
  namespace Starfleet
  {
    class Ship
    {
    public:
      Ship(int length, int width, std::string name, short maxWarp);
      ~Ship();

      void setupCore(WarpSystem::Core *core);
      void checkCore();
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
    Ship(int length, int width, std::string name, int maxWarp = 1);
    ~Ship();

    void setupCore(WarpSystem::Core *core);
    void checkCore();
  private:
    int _length;
    int _width;
    std::string _name;
  };
};
