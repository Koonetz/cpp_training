#include "KoalaDoctor.hpp"
using namespace std;

KoalaDoctor::KoalaDoctor()
{

}

KoalaDoctor::KoalaDoctor(string doc): docName(doc)
{
  cout << "Dr." << this->docName << ": hello there" << endl;
}

KoalaDoctor::~KoalaDoctor()
{
  cout << "RIP THE DOC" << endl;
}

void KoalaDoctor::diagnose(SickKoala *koala)
{
  string kName;
  
  kName = koala->getName();
  koala->poke();

  ofstream newFile {kName + ".report"};
  newFile << "Mars" << endl;
  
  newFile.close();
}
