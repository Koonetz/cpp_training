//Solution for palindrome (using strings)
class Solution
{
public:
  bool isPalindrome(int x)
  {
    string pal = to_string(x);

    if (pal = string(pal.rbegin(), pal.rend()))
      return true;
    return false;
  }
};
