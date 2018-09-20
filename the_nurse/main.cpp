#include "SickKoala.cpp"
using namespace std;

int main(int ac, char **av)
{
  SickKoala Koala;
  char *name;

  name = (char*)malloc(sizeof(char));
  cin >> name;
  Koala.setName(name);
  cout << "Hello: " << Koala.getName() << endl;
  Koala.poke();
}
