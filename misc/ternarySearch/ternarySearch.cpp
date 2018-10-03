//Ternary search struggles.
#include <iostream>
using namespace std;

int ternarySearch(int l, int r, int x)
{
  cout << "l value: " << l << endl;
  cout << "r value: " <<  r << endl;

  if (r >= l)
    {
      int mid1 = l + (r-l)/3;
      int mid2 = r - (r-l)/3;

      cout << "mid1: " << mid1 << endl;
      cout << "mid2: " << mid2 << endl;
      if (mid1 == x)
	return mid1;
      if (mid2 == x)
	return mid2;
      if (x < mid1)
	return ternarySearch(l, mid1-1, x);
      else if (x > mid2)
	return ternarySearch(mid2+1, r, x);
      else
	return ternarySearch(mid1+1, mid2-1, x);
    }
  return -1;
}

int main(int ac, char **av)
{
  int ans;
  int min;
  int max;
  int index = 13;

  cin >> min;
  cin >> max;

  ans = ternarySearch(min, max, index);
  cout << ans;
}
