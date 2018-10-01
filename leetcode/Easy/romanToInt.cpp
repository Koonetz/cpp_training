//Solution to romanToInt

class Solution
{
public:
  int romanToInt(string s)
  {
    unordered_map<char, int> val({
	{"I", 1},
	{"V", 5},
	{"X", 10},
	{"L", 50},
        {"C", 100},
	{"D", 500},
        {"M", 1000}
      });

    int len = s.length();
    int result = 0;
    int i = 0;

    while (i < len)
      {
	if (i == len - 1)
	  result += val[s[i]];
	else
	  {
	    if (val[s[i + 1]] > val[s[i]])
	      result -= val[s[i]];
	    else
	      result += val[s[i]];
	  }
	++i;
      }
    
    return result;
  }
};
