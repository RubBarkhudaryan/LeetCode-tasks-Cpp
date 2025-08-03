#include <iostream>
#include <vector>

int singleNumber(std::vector<int>& nums)
{
	if (nums.size() == 1)
		return nums[0];

	int	count = nums[0];

	for (std::size_t i = 1; i < nums.size(); ++i)
		count ^= nums[i];
	return count;
}
