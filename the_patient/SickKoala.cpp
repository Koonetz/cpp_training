#include <iostream>
#include "SickKoala.hpp"
#include <cstring>
using namespace std;

SickKoala::SickKoala(void)
{
  cout << "Object is being created!" << endl;
}

SickKoala::~SickKoala(void)
{
  cout << "Mr." << koalaName << ": I'm cured bois!" <<  endl;
}

void SickKoala::setName(char *name)
{
    koalaName = name;
}

char  *SickKoala::getName( void )
{
  return koalaName;
}

void SickKoala::poke(void)
{
  cout << "Mr." << koalaName << ": Goerk :c" << endl;
}

bool SickKoala::takeDrug(char *drug)
{
  if (strcmp(drug, "Mars") == 0)
    {
      cout << "Mr." << koalaName << ": Mars, and it kreogs!" << endl;
      return true;
    }
  else if (strcmp(drug, "Buronzand") == 0)
    {
      cout << "Mr." << koalaName << ": And you'll sleep right away!" << endl;
      return true;
    }
  else
    {
      cout << "What is this trash?" << endl;
      return false;
    }
}

void SickKoala::overdrive(char *str)
{
  
}

int main(int ac, char **av)
{
  SickKoala Koala;
  char *name;

  name = (char*)malloc(sizeof(char));
  cin >> name;
  Koala.setName(name);
  cout << "Hello: " << Koala.getName() << endl;
  Koala.poke();
  Koala.takeDrug("Mars");
  Koala.takeDrug("Buronzand");
  Koala.overdrive("Wololo, Kreog bois Kreog bois");
  return 0;
}
