#include "KoalaNurse.hpp"
using namespace std;

KoalaNurse::KoalaNurse()
{
  cout << "Creating nurse" << endl;
}

KoalaNurse::KoalaNurse(int id): nurseId(id)
{
  this->getId();
  cout << "creating nurse" << endl;
}

KoalaNurse::~KoalaNurse()
{
  cout << "Nurse " << this->nurseId << ": Finally some rest" << endl;
}

void KoalaNurse::setId(int id)
{
  nurseId = id;
}

int KoalaNurse::getId(void)
{
  cout << this->nurseId << endl;
  return nurseId;
}

void KoalaNurse::giveDrug(string drug, SickKoala *patient)
{
  patient->takeDrug(drug);
}

int main(int ac, char **av)
{
  //int id = 0;
  KoalaNurse nurse(10);
  SickKoala  kek;

  kek.setName("kek");
  kek.getName();
  //if (id <= 0)
  //  nurse.~KoalaNurse();
  nurse.giveDrug("Mars", &kek);
}
