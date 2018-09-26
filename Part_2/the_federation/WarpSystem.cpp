#include "WarpSystem.hpp"
using namespace std;

WarpSystem::QuantumReactor::QuantumReactor()
{
  cout << "Quantum Reactor Operational" << endl;
}

WarpSystem::QuantumReactor::~QuantumReactor()
{
  cout << "Quantum Reactor Offline" << endl;
}

WarpSystem::Core::Core(QuantumReactor *reactor): _coreReactor(reactor)
{
  cout << "Core Operational" << endl;
}

WarpSystem::Core::~Core()
{
  cout << "Core Offline" << endl;
}

void WarpSystem::QuantumReactor::setStability(bool stability)
{
  _stability = stability;
  cout << "Variable: " << _stability << endl;
}

bool WarpSystem::QuantumReactor::isStable()
{
  return _stability;
}

auto WarpSystem::Core::*checkReactor()
{
  return &WarpSystem::Core::_coreReactor;
}
