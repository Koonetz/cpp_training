#include <iostream>
#include <cstring>
#include <math.h>
#include <iomanip>
using namespace std;

void conversion(float temp, char *type)
{
  float fahrenheit;
  float celsius;

  if (strcmp(type, "Celsius") == 0)
    {
      fahrenheit = temp * (9/5) + 32;
      cout << fahrenheit << " Fahrenheit" << endl;
    }
  if (strcmp(type, "Fahrenheit") == 0)
    {
      celsius = temp * (9/5) - 32;
      cout << celsius << " Celsius" << endl;
    }
}

int main()
{
  float temp;
  char *type; // either celsius or fahrenheit
  float fahrenheit;
  float celsius;
  float answer;
  
  type = (char*)malloc(sizeof(type) + 1);
  cin >> temp >> type;
  conversion(temp, type);
  free(type);
  return 0;
}
