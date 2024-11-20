#include <iostream>
#include <climits>

bool isPalindrome(int x)
{
	if (x < 0 || (x % 10 == 0 && x != 0))
		return false;
	
	int num = x;
	int reversedNum = 0;
	while (x)
	{
		if (reversedNum > (INT_MAX / 10) || reversedNum < (INT_MIN / 10)) 
			return false;
		reversedNum = reversedNum * 10 + x % 10;
		x /= 10;
	}
	return(num == reversedNum);
}

int main()
{
	std::cout << isPalindrome(121) << "\n";
	std::cout << isPalindrome(-121) << "\n";
	std::cout << isPalindrome(10) << "\n";
	std::cout << isPalindrome(212) << "\n";
	std::cout << isPalindrome(-212) << "\n";
	std::cout << isPalindrome(100) << "\n";
}