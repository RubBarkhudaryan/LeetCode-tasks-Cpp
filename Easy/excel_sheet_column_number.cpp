#include <iostream>
#include <cmath>
#include <string>

int titleToNumber(std::string columnTitle)
{
	int i = 0;
	int res = 0;

	if (columnTitle.length() == 1)
		return columnTitle[0] - 'A' + 1;

	while (columnTitle[i])
	{
		res += pow(26, columnTitle.size() - i - 1) * (columnTitle[i] - 'A' + 1);
		++i;
	}

	return res;
}

/*
int main()
{
	std::string title;

	while (true)
	{
		std::cin >> title;
		std::cout << titleToNumber(title) << "\n\n";
	}
}
*/