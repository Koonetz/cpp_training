#include "SickKoala.hpp"
using namespace std;

SickKoala::SickKoala(void)
{
  cout << "Sick Koala Object created" << endl;
}

SickKoala::~SickKoala(void)
{
  cout << "Mr." << koalaName << ": I'm cured bois!" << endl;
}

void SickKoala::setName(char *name)
{
  koalaName = name;
}

char *SickKoala::getName(void)
{
  return koalaName;
}

void SickKoala::poke(void)
{
  cout << "Mr." << koalaName << ": Goerk :c" << endl;
}

bool SickKoala::takeDrug(string drug)
{
  if (drug.compare("Mars") == 0)
    {
      cout << "Mr." << koalaName << ": Mars and it kreogs!" << endl;
      return true;
    }
  else if (drug.compare("Buronzand") == 0)
    {
      cout << "Mr." << koalaName << ": And you'll sleep right away!" << endl;
      return true;
    }
  else
    return false;
}

void SickKoala::overdrive(string str)
{
  size_t pos;
  const string replace = "1337";
  const string search = "Kreog";

  for (pos = 0; ; pos += replace.length())
    {
      pos = str.find(search, pos);
      if (pos == string::npos)
	break;
      str.erase(pos, search.length());
      str.insert(pos, replace);
    }
  cout << str << endl;
}


