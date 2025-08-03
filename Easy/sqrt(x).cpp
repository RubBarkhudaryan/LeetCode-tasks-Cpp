#include <iostream>

/*linear search priciple*/
/*
int mySqrt(int x)
{
	int i = 1;

	if (x <= 1)
		return x;

	while (i * i != x)
	{
		if (i * i > x)
			return i - 1;
		++i;
	}

	return i;
}
*/

/*binar search principle*/
int mySqrt(int x)
{
	int low = 0;
	int high = x;
	int mid;

	if (x < 2)
		return x;

	while (low <= high)
	{
		mid = low + (high - low) / 2;

		if (mid == x / mid)
			return mid;

		else if (mid > x / mid)
			high = mid - 1;

		else
			low = mid + 1;
	}

	return high;
}


/*
int main()
{
	std::cout << mySqrt(36) << " " << mySqrt(25) << " " << mySqrt(9) << "\n";
	std::cout << mySqrt(3) << " " << mySqrt(4) << " " << mySqrt(8) << "\n";
	std::cout << mySqrt(1) << " " << mySqrt(0) << " " << mySqrt(13) << "\n";
	std::cout << mySqrt(8192) << " " << mySqrt(64) << " " << mySqrt(13) << "\n";
}
*/
