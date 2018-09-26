#include "WarpSystem.hpp"
using namespace std;

WarpSystem::QuantumReactor::QuantumReactor()
{
  cout << "Quantum Reactor Initiated" << endl;
}

WarpSystem::QuantumReactor::~QuantumReactor()
{
  cout << "Quantum Reactor Offline" << endl;
}

WarpSystem::Core::Core(QuantumReactor *reactor)
{
  cout << "Core Initialized" << endl;
}

WarpSystem::Core::~Core()
{
  cout << "Core Offline" << endl;
}
