#include "my_cat.cpp"
#include <iostream>
using namespace std;

int main ()
{
  char *filename;

  filename = (char*)malloc(sizeof(char));
  cin >> filename;
  my_cat(filename);
  free(filename);

  return 0;
}
