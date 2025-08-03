#include <iostream>
#include <string>
#include <vector>

std::string longestCommonPrefix(std::vector<std::string>& strs)
{
	if (strs.empty())
		return "";

	std::string prefix = strs[0];

	for (std::size_t i = 1; i < strs.size(); ++i)
	{
		while (strs[i].find(prefix) != 0)
			prefix.pop_back();
		if (prefix == "")
			return "";
	}

	return prefix;
}


/*
int	main()
{
	std::vector<std::string> vct = { "flower", "flow", "flight" };
	std::cout << "case 1: " << longestCommonPrefix(vct) << "\n"; // passed

	std::vector<std::string> vct1 = { "flower", "fkow" };
	std::cout << "case 2: " << longestCommonPrefix(vct1) << "\n"; // passed

	std::vector<std::string> vct2 = { "car", "sar", "dar" };
	std::cout << "case 3: " << longestCommonPrefix(vct2) << "\n"; // passed

	std::vector<std::string> vct3 = { "flower" };
	std::cout << "case 4: " << longestCommonPrefix(vct3) << "\n"; // passed

	std::vector<std::string> vct4 = { "ab", "a" };
	std::cout << "case 5: " << longestCommonPrefix(vct4) << "\n"; // passed

	std::vector<std::string> vct5 = { "dog","racecar","car" };
	std::cout << "case 6: " << longestCommonPrefix(vct5) << "\n"; // passed

	std::vector<std::string> vct6 = { "aa","ab" };
	std::cout << "case 7: " << longestCommonPrefix(vct6) << "\n"; // passed

	std::vector<std::string> vct7 = { "","" };
	std::cout << "case 8: " << longestCommonPrefix(vct7) << "\n"; // passed

	std::vector<std::string> vct8 = { "abaa","abc","abca" };
	std::cout << "case 9: " << longestCommonPrefix(vct8) << "\n"; // passed

	std::vector<std::string> vct9 = { "froolic","froolic","fraodf","frloadsf","frlozcv" };
	std::cout << "case 10: " << longestCommonPrefix(vct9) << "\n"; // passed
}
*/
