#include <iostream>
#include <vector>

int searchInsert(std::vector<int>& nums, int target)
{
	for (std::size_t i = 0; i < nums.size(); ++i)
	{
		if (nums[i] == target)
			return i;
	}

	int i = 0;

	while (i < nums.size() && nums[i] < target)
		++i;
	return i + 1;
}

/*

int main()
{
	std::vector<int> vct = { 1, 2, 3, 4, 6, 8, 15 };
	std::cout << searchInsert(vct, 5);
}

*/