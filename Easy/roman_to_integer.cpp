#include <iostream>
#include <string>
#include <map>

/*
Symbol       Value
I             1
V             5
X             10
L             50
C             100
D             500
M             1000


I can be placed before V (5) and X (10) to make 4 and 9.
X can be placed before L (50) and C (100) to make 40 and 90.
C can be placed before D (500) and M (1000) to make 400 and 900.
*/

int	romanToInt(std::string str)
{
	int					res = 0;
	std::map<char, int>	roman_values =
	{
		{'I', 1}, {'V', 5}, {'X', 10},
		{'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}
	};

	int	i = 0;
	while (str[i])
	{
		if (str[i] == 'I' && (str[i + 1] == 'V' || str[i + 1] == 'X'))
		{
			res += roman_values[str[i + 1]] - 1;
			++i;
		}
		else if (str[i] == 'X' && (str[i + 1] == 'L' || str[i + 1] == 'C'))
		{
			res += roman_values[str[i + 1]] - 10;
			++i;
		}
		else if (str[i] == 'C' && (str[i + 1] == 'D' || str[i + 1] == 'M'))
		{
			res += roman_values[str[i + 1]] - 100;
			++i;
		}
		else
			res += roman_values[str[i]];
		++i;
	}
	return res;
}

/*
int	main()
{
	std::cout << romanToInt("III") << "\n";
	std::cout << romanToInt("LVIII") << "\n";
	std::cout << romanToInt("MCMXCIV") << "\n";
}
*/