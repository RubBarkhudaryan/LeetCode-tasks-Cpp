#include <iostream>
#include <vector>

int missingNumber(std::vector<int>& nums)
{
	int expected_sum = nums.size() * (nums.size() + 1) / 2;
	int sum = 0;
	for (int i : nums)
		sum += i;
	return expected_sum - sum;
}