#include "Federation.hpp"
#include "WarpSystem.hpp"

int main(int ac, char **av)
{
  Federation::Starfleet::Ship mainShip(10, 10, "KekShip", 1);
  Federation::Ship povertyShip(4, 4, "FGC");

  WarpSystem::QuantumReactor QR;
  WarpSystem::QuantumReactor QR2;

  WarpSystem::Core core(&QR);
  WarpSystem::Core core2(&QR2);
}
