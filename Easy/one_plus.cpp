#include <iostream>
#include <vector>

std::vector<int> plusOne(std::vector<int>& digits)
{
	int	j = digits.size() - 1;

	while (j > 0 && digits[j] == 9)
	{
		digits[j] = 0;
		--j;
	}

	if (j == 0 && digits[j] == 9)
	{
		digits[0] = 1;
		digits.push_back(0);
	}

	else if (digits[j] != 9)
		digits[j]++;

	return digits;
}

/*
int main()
{
	std::vector<int> vct = { 0 };
	std::vector<int> res = plusOne(vct);

	for (int i = 0; i < res.size(); ++i)
		std::cout << res[i] << " ";
}
*/