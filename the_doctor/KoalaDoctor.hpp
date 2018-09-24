#include <iostream>
#include <cstring>
#include <string>
#include <fstream>
#include "KoalaNurse.hpp"
using namespace std;

class KoalaDoctor
{
public:
  KoalaDoctor();
  KoalaDoctor(string name);
  ~KoalaDoctor();

  void diagnose(SickKoala *koala);
private:
  string docName;
};
