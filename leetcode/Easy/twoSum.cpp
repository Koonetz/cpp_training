//twoSum Solution.

class Solution
{
public:
  vector<int> twoSum(vector<int> &nums, int target)
  {
    unordered_map<int, int> m;
    int i = 0;

    while (i <= nums.size())
      {
	int ans = target - nums[i];
	auto It = m.find(ans);

	if(It != m.end())
	  return vector<int>{It->second, i};
	m[nums[i]] = i;
	i++;
      }
  }
};
