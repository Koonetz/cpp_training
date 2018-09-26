#include <iostream>
#include <string>
#include <cstring>

namespace WarpSystem
{
  class QuantumReactor
  {
  public:
    QuantumReactor();
    ~QuantumReactor();

    bool isStable();
    void setStability(bool stability);
  private:
    bool _stability;
  };
  class Core
  {
  public:
    Core(QuantumReactor *reactor);
    ~Core();
    QuantumReactor *_coreReactor;
  };
};
