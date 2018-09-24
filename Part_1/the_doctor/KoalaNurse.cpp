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

string KoalaNurse::readReport(string filename)
{
  ifstream myFile;
  string output;

  if (filename.substr(filename.find_last_of(".") + 1) != "report")
    cout << "Invalid Filename" << endl;
  else
    {
      myFile.open(filename);
      if (filename.substr(filename.find_last_of(".") - 1) != this->patientName)
	{
	  if (myFile.is_open())
	    {
	      myFile >> output;
	      cout << "Nurse " << this->nurseId << ": Kreog! Mr." << this->patientName << " needs a " << output << endl;
	    }
	}
    }
  myFile.close();
}

void KoalaNurse::timeCheck(void)
{ 
  if (this->work)
    {
      cout << "Nurse " << this->nurseId << ": Time to work bois" << endl;
      this->work == true;
    }
  else
    {
      cout << "Nurse " << this->nurseId << ": Cya" << endl;
      this->work = false;
    }
}
