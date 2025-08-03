#include <iostream>
#include <vector>
#include <cmath>

int	sum_of_digits_power(int num)
{
	int sum = 0;

	while (num)
	{
		sum += pow((num % 10), 2);
		num /= 10;
	}
	return sum;
}

bool isHappy(int n)
{
	int sum = 0;

	sum = sum_of_digits_power(n);
	while (true)
	{
		if (sum == 1)
			return true;
		if (sum == 16)
			return false;
		sum = sum_of_digits_power(sum);
	}
}

/*
int main()
{
	std::cout << isHappy(2);
	std::cout << isHappy(19);
}
*/