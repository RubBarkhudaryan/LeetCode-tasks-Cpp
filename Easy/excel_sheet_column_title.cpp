#include <iostream>
#include <string>

std::string convertToTitle(int columnNumber)
{
	std::string str = "";

	if (columnNumber >= 1 && columnNumber <= 26)
	{
		str += (columnNumber + 64);
		return str;
	}

	while (columnNumber)
	{
		columnNumber--;
		str += ((columnNumber % 26) + 'A');
		columnNumber /= 26;
	}

	std::reverse(str.begin(), str.end());
	return (str);
}


//int main()
//{
//	int num{};
//
//	while (true)
//	{
//		std::cin >> num;
//		std::cout << convertToTitle(num) << "\n\n";
//	}
//}
