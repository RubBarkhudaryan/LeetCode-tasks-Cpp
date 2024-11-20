#include <iostream>
#include <vector>

// indices of elements which sum is equal to given target

std::vector<int> twoSum(std::vector<int>& nums, int target)
{
	std::vector<int> indices;
	bool flag = false;
	for (size_t i = 0; i < nums.size() - 1; i++)
	{
		for (size_t j = i + 1; j < nums.size(); j++)
		{
			if ((nums[i] + nums[j]) == target)
			{
				indices.push_back(i);
				indices.push_back(j);
				flag = true;
				break;
			}
		}
		if (flag)
			break;
	}

	return (indices);
}

int main(void)
{
	std::vector<int> nums{2, 7, 11, 15};
	int target = 9;

	auto result = twoSum(nums, target);
	
	for (auto &&elem : result)
	{
		std::cout << elem << " ";
	}
	std::cout << std::endl;

	return (0);
}