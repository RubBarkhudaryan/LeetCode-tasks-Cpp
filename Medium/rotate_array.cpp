#include <vector>

void reverse(std::vector<int> &arr, int start, int end)
{
	while (start < end)
	{
		int temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
		start++;
		end--;
	}
}
void rotate(std::vector<int> &arr, int k)
{
	int n = arr.size();
	k %= n;
	reverse(arr, 0, n - 1);
	reverse(arr, 0, k - 1);
	reverse(arr, k, n - 1);
}