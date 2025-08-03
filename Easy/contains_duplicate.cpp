#include <iostream>
#include <vector>
#include <algorithm>

bool containsDuplicate(std::vector<int>& nums)
{
	std::sort(nums.begin(), nums.end());
	int i = 0;
	int j = 1;

	while (j < nums.size())
	{
		if (nums[i] == nums[j])
			return 1;
		++i;
		++j;
	}
	return 0;
}