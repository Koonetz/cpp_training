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

  cout << "debug 1" << endl;
  myFile.open(filename);
  cout << "debug 2" << endl;
  if (myFile.is_open())
    {
      cout << "I'm in" << endl;
      while (getLine(myFile, str))
	  cout << str << '\n';
    }
  else
    cout << "Unable to open the file";
  myFile.close();
  return 0;
}

int main(int ac, char **av)
{
  char *filename;

  filename = (char*)malloc(sizeof(char));
  cin >> filename;
  my_cat(filename);
  free(filename);
  return 0;
}
