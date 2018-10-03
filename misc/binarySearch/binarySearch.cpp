//Binary search simple algorithm
#include <iostream>
using namespace std;

int binarySearch(int low, int high, int key)
{
  while (low <= high)
    {
      int mid = (low + high) / 2;

      if (mid < key)
	low = mid + 1;
      else if (mid > key)
	high = mid - 1;
      else
	return mid;
    }
  return -1; //Key not found
}

int main (int ac, char **av)
{
  int low;
  int high;
  int key = 16;
  int ans;
  
  cout << "Enter low num: ";
  cin >> low;
  cout << "Enter high num: ";
  cin >> high;
  ans = binarySearch(low, high, key);
  cout << ans << endl;
  
}
