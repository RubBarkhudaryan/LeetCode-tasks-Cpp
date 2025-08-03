#include <vector>

double findMedianSortedArrays(std::vector<int> &nums1, std::vector<int> &nums2)
{
	for (auto &&elem : nums2)
		nums1.push_back(elem);

	std::sort(nums1.begin(), nums1.end());

	if (nums1.size() % 2 == 0)
		return (double)(nums1[nums1.size() / 2] + nums1[nums1.size() / 2 - 1]) / 2;

	return (nums1[nums1.size() / 2]);
}