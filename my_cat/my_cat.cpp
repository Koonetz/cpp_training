#include <iostream>
#include <fstream>
#include <string>
using namespace std;

istream & getLine(istream &is, string &result, char delim = '\n')
{
  char ch;

  result.clear();
  while (is.get(ch))
    {
      if (ch == delim)
	break;
      else
	result += ch;
    }
  return is;
}

int my_cat(char *filename)
{
  ifstream myFile;
  string str;

  myFile.open(filename);
  if (myFile.is_open())
    {
      while (getLine(myFile, str))
	  cout << str << '\n';
    }
  else
    cout << "Unable to open the file";
  myFile.close();
  return 0;
}
