#include <iostream>
#include <string>
#include <limits.h>


/*
    bool isPalindrome(int x) {
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

    //or
*/

bool isPalindrome(int x) {
	if (x < 0 || (x % 10 == 0 && x != 0))
		return false;

	std::string str = std::to_string(x);
	std::string rev_str(str.rbegin(), str.rend());

	return (str == rev_str);
}

//int main()
//{
//	std::cout << isPalindrome(121) << "\n";
//	std::cout << isPalindrome(12) << "\n";
//	std::cout << isPalindrome(111) << "\n";
//	std::cout << isPalindrome(96) << "\n";
//}