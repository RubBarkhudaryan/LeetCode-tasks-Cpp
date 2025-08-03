#include <iostream>
#include <vector>
#include <algorithm>

int lomuto_partition(std::vector<int> &nums, int start, int end)
{
	int i = start - 1;
	int pivot = nums[end - 1];
	for (int j = start; j < end - 1; ++j)
	{
		if (nums[j] < pivot)
		{
			++i;
			std::swap(nums[i], nums[j]);
		}
	}
	std::swap(nums[i + 1], nums[end - 1]);
	return i + 1;
}

void quickSort(std::vector<int> &nums, int start, int end)
{
	if (start < end - 1)
	{
		int pivot_index = lomuto_partition(nums, start, end);
		quickSort(nums, start, pivot_index);
		quickSort(nums, pivot_index + 1, end);
	}
}

void sortColors(std::vector<int> &nums)
{
	quickSort(nums, 0, nums.size());
}
/*
int main()
{
	std::vector<int> arr = {2, 0, 2, 1, 1, 0};
	quickSort(arr, 0, arr.size());

	for (int i = 0; i < arr.size(); i++)
		std::cout << arr[i] << " ";
	return 0;
}
*/