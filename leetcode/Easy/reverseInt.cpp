//Solution for reverseInt

class Solution
{
public:
  int reverse(int x)
  {
    long reversed = 0;
    int remain;

    while (x != 0)
      {
	remain = x % 10;
	reversed = reversed * 10 + remain;
	x /= 10;
      }
    if (reversed > numeric_limits<int>::max() ||
	reversed < numeric_limits<int>::min())
      return 0;
    return reversed;
  }
};
