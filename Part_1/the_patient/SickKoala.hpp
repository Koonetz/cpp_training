#include <iostream>
#include <cstring>
#include <string>
using namespace std;

class SickKoala
{
public:
  void setName(char *name);
  char *getName(void);
  void poke(void);
  bool takeDrug(char *drug);
  void overdrive(string str);
  
  SickKoala(); // constructor
  ~SickKoala(); // destructor
private:
  char *koalaName;
};
