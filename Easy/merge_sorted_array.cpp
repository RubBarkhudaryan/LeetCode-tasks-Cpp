#include <iostream>
#include <vector>

void merge(std::vector<int>& nums1, int m, std::vector<int>& nums2, int n)
{
	int i = m - 1;
	int j = n - 1;
	int k = n + m - 1;

	while (j >= 0)
	{
		if (i >= 0 && nums1[i] > nums2[j])
			nums1[k--] = nums1[i--];
		else
			nums1[k--] = nums2[j--];
	}

}

/*

int main()
{
	std::vector<int> vct1 = { 4,0,0,0,0,0 };
	std::vector<int> vct2 = { 1,2,3,5,6 };

	merge(vct1, 1, vct2, 5);

	for (int i = 0; i < vct1.size(); ++i)
		std::cout << vct1[i] << " ";

	return 0;
}

*/