#include <iostream>

/*
//recursive version which works too but it's slow

int climbStairs(int n)
{
	if (n <= 2)
		return n;
	return climbStairs(n - 1) + climbStairs(n - 2);
}
*/

int climbStairs(int n)
{
	if (n <= 2)
		return n;

	int res = 0;
	int step1 = 0;
	int step2 = 1;

	for (int i = 0; i < n; ++i)
	{
		res = step1 + step2;
		step1 = step2;
		step2 = res;
	}
	return res;
}

/*
int main()
{
	std::cout << climbStairs(45);
}
*/