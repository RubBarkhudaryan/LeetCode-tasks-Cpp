#include <iostream>
#include <vector>

int removeElement(std::vector<int>& nums, int val)
{
	for (std::size_t i = 0; i < nums.size();)
	{
		if (nums[i] == val)
			nums.erase(nums.begin() + i);
		else
			++i;
	}
	return nums.size();
}

/*
int main()
{
	std::vector<int> vct = { 0,0,1,1,1,2,2,3,3,3,4,4,5 };
	std::cout << removeElement(vct, 2) << "\n";
}
*/