#include <iostream>
#include <string>
#include <cstring>
#include "SickKoala.hpp"
using namespace std;

class KoalaNurse
{
public:
  KoalaNurse();
  KoalaNurse(int i);
  ~KoalaNurse();

  void setId(int id);
  int getId(void);
  void giveDrug(string drug, SickKoala *patient);
  string readReport(string filename);
  void timeCheck(void);
private:
  int nurseId;
};
