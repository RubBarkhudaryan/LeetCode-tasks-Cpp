#include <iostream>

bool isPowerOfTwo(int n) {
	return n > 0 && (n & (n - 1)) == 0;
}

int main()
{
	std::cout << isPowerOfTwo(2) << "\n";
	std::cout << isPowerOfTwo(4) << "\n";
	std::cout << isPowerOfTwo(8) << "\n";
	std::cout << isPowerOfTwo(16) << "\n";
	std::cout << isPowerOfTwo(6) << "\n";
	std::cout << isPowerOfTwo(3) << "\n";
}