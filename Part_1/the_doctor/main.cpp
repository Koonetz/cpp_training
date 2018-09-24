#include "KoalaDoctor.hpp"
using namespace std;

int main(int ac, char **av)
{
  SickKoala kek;
  KoalaNurse nurse(10);
  KoalaDoctor doc("Kek");

  nurse.timeCheck();
  kek.setName("lul");
  nurse.patientName = kek.getName();
  nurse.giveDrug("Mars", &kek);
  nurse.readReport("kek.report");
  doc.diagnose(&kek);
  nurse.timeCheck();
}
