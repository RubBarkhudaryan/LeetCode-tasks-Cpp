#include <iostream>
#include <string>

//for 8 bit binary numbers

/*
std::string addBinary(std::string num_str_1, std::string num_str_2)
{
	std::size_t num1 = std::stoull(num_str_1, nullptr, 2);
	std::size_t num2 = std::stoull(num_str_2, nullptr, 2);

	std::size_t res = num1 + num2;

	if (res == 0)
		return "0";

	std::string res_str;

	while (res)
	{
		res_str += (res % 2) + '0';
		res /= 2;
	}

	std::reverse(res_str.begin(), res_str.end());

	return res_str;
}
*/

std::string addBinary(std::string str1, std::string str2)
{
	std::string result = "";
	int i = str1.size() - 1;
	int j = str2.size() - 1;
	int carry = 0;

	while (i >= 0 || j >= 0 || carry)
	{
		int sum = carry;

		if (i >= 0)
			sum += str1[i--] - '0';
		if (j >= 0)
			sum += str2[j--] - '0';

		result += (sum % 2) + '0';
		carry = sum / 2;
	}

	std::reverse(result.begin(), result.end());
	return result;
}

/*
int main()
{
	std::cout << addBinary("1001", "1010");
}
*/