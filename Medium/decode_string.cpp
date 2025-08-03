#include <string>

std::string decode(std::string str, int num)
{
	if (num == 0)
		return str;

	std::string result;

	for (; num > 0; --num)
		result += str;

	return result;
}

std::string decodeString(std::string str)
{
	if (str[0] == '\0')
		return "";

	int i{};
	int count{};
	int braces = 0;
	std::string temp;
	std::string alpha = "";
	std::string result = "";

	while (i < str.size())
	{
		count = 0;
		temp = "";
		alpha = "";

		if (str[i] != '[' && str[i] != ']' && !isdigit(str[i]))
		{
			while (str[i] != '[' && str[i] != ']' && !isdigit(str[i]) && str[i])
			{
				alpha += str[i];
				++i;
			}

			if (i == str.size())
				return result + alpha;
		}

		if (isdigit(str[i]))
		{
			while (isdigit(str[i]) && str[i])
			{
				count = count * 10 + (str[i] - '0');
				++i;
			}
		}

		if (str[i] == '[')
		{
			++i;
			++braces;
			while (str[i])
			{
				if (str[i] == '[')
					++braces;
				else if (str[i] == ']')
					--braces;
				if (braces == 0)
					break;
				temp += str[i];
				++i;
			}
			result += (alpha + decode(decodeString(temp), count));
		}

		++i;
	}
	return result;
}
