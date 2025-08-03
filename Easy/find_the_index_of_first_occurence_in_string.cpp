#include <iostream>
#include <string>

int strStr(std::string haystack, std::string needle)
{
	int	i{};

	while (haystack[i])
	{
		int	j{};
		while (haystack[i + j] && needle[j] && haystack[i + j] == needle[j])
			++j;
		if (j == needle.size())
			return i;
		++i;
	}
	return -1;
}

/*

int main()
{
	std::cout << strStr("helloworld", "world") << "\n";
	std::cout << strStr("leetcode", "") << "\0";
	std::cout << strStr("a          ", "a");
}
*/