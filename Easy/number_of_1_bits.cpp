#include <iostream>

int hammingWeight(int n)
{
	int count = 0;

	for (int i = 31; i >= 0; --i)
	{
		if (n & (1 << i))
			++count;
	}
	return count;
}

/*
int main()
{
	std::cout << hammingWeight(11) << "\n";
	std::cout << hammingWeight(128) << "\n";
}
*/