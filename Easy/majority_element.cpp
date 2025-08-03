#include <iostream>
#include <vector>

int majorityElement(std::vector<int>& nums)
{
	int	major = 0;
	int	elem = 0;

	for (std::size_t i = 0; i < nums.size(); ++i)
	{
		if (major == 0)
			elem = nums[i];
		if (elem == nums[i])
			++major;
		else if (elem != nums[i])
			--major;
	}
	return elem;
}
/*
int main()
{
	std::vector<int> vec = { 1,2,3,3,3,3,3,4,4,4,4 };
	std::cout << majorityElement(vec);
}
*/
