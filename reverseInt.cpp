#include <iostream>
#include <climits>

// Reverse int

int reverse(int x) {
	int res = 0;
	while(x){
		if (res > (INT_MAX / 10) || res < (INT_MIN / 10)) 
			return 0;
		res = (res * 10) + (x % 10);
		x = x / 10;
	}
	return res;
}

int main(void)
{
	int elem = -1528;

	std::cout << reverse(elem) << "\n";
	std::cout << INT_MAX << "\t\t" << INT_MIN << std::endl;
	std::cout << INT_MAX / 10 << "\t\t" << INT_MIN / 10 << std::endl;

	return (0);
}