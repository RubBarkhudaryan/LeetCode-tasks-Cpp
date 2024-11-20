#include <iostream>
#include <string>
0
int myAtoi(std::string str) {
    int res = 0;
    int sign = 1;
    int i = 0;

    while (i < str.length() && str[i] == ' ')
        ++i;

    if (str[i] == '-' || str[i] == '+') {
        sign = (str[i] == '-') ? -1 : 1;
        i++;
    }

    while (i < str.length() && (str[i] >= '0' && str[i] <= '9'))
    {
        int digit = str[i] - '0';

        if (res > (INT_MAX - digit) / 10)
            return sign == 1 ? INT_MAX : INT_MIN;

        res = res * 10 + digit;
        ++i;
    }

    return res * sign;
}



int main() {
	std::cout << myAtoi("						1234") << std::endl;
	std::cout << myAtoi("1234cd03") << std::endl;
	std::cout << myAtoi("hello 1234") << std::endl;
	std::cout << myAtoi("			-042") << std::endl;
	std::cout << myAtoi("0-1") << std::endl;
	std::cout << myAtoi("058") << std::endl;
	std::cout << myAtoi("+1") << std::endl;
	std::cout << myAtoi("-91283472332") << std::endl;
}