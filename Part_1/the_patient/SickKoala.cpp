
#include "SickKoala.hpp";
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
