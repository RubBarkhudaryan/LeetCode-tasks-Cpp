#include <iostream>
#include <string>

/*
bool isPalindrome(std::string str)
{
	int	i = 0;
	std::string res = "";

	while (str[i])
	{
		if (isalnum(str[i]))
		{
			if (str[i] >= 'A' && str[i] <= 'Z')
				str[i] += 32;
			res += str[i];
		}
		++i;
	}
	std::string rev_res = res;

	std::reverse(rev_res.begin(), rev_res.end());
	return res == rev_res;
}
*/

bool isPalindrome(std::string str)
{
	int	start = 0;
	int	end = str.size() - 1;

	while (start < end)
	{
		if (!isalnum(str[start]))
			++start;
		else if (!isalnum(str[end]))
			--end;
		else if (tolower(str[start]) != tolower(str[end]))
			return false;
		else
		{
			++start;
			--end;
		}
	}
	return true;
}

/*

int main()
{
	std::cout << isPalindrome("A man, a plan, a canal: Panama") << "\n";
	std::cout << isPalindrome("race a car") << "\n";
	std::cout << isPalindrome("   ") << "\n";
}

*/