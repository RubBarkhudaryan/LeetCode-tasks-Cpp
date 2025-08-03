#include <iostream>

int reverseBits(int n)
{
	int res = 0;

	for (int i = 0; i < 32; ++i)
	{
		res <<= 1;
		res |= (n & 1);
		n >>= 1;
	}

	return res;
}

/*
int main()
{
	std::cout << reverseBits(43261596) << "\n";
	std::cout << reverseBits(2147483644) << "\n";
}
*/
