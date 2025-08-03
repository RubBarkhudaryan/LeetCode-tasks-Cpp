#include <iostream>
#include <stack>
#include <string>

/*
bool isValid(std::string str)
{
	std::string	opening_braces = "";
	std::size_t	size_changed = 0;

	for (int i = 0; i < str.size(); ++i)
	{
		if (str[i] == '{' || str[i] == '[' || str[i] == '(')
		{
			opening_braces += str[i];
			++size_changed;
		}
		else if ((str[i] == '}' || str[i] == ']' || str[i] == ')') && opening_braces != "")
		{
			if (opening_braces[opening_braces.length() - 1] == '{' && str[i] == '}')
				opening_braces.pop_back();
			else if (opening_braces[opening_braces.length() - 1] == '(' && str[i] == ')')
				opening_braces.pop_back();
			else if (opening_braces[opening_braces.length() - 1] == '[' && str[i] == ']')
				opening_braces.pop_back();
		}
	}
	return (opening_braces == "" && size_changed == (str.length() / 2.0));
}

//or
*/

bool isValid(std::string str)
{
	std::stack<char>	stack;

	for (int i = 0; i < str.size(); ++i)
	{
		if (str[i] == '[' || str[i] == '{' || str[i] == '(')
			stack.push(str[i]);
		else
		{
			if (stack.empty())
				return false;
			char top = stack.top();
			if (str[i] == ']' && top != '[' || str[i] == '}' && top != '{' || str[i] == ')' && top != '(')
				return false;
			stack.pop();
		}
	}
	return stack.empty();
}

//int main()
//{
//	std::cout << isValid("()") << "\n";
//	std::cout << isValid("(])") << "\n";
//	std::cout << isValid("((([{}])))") << "\n";
//	std::cout << isValid("(]") << "\n";
//	std::cout << isValid("]]") << "\n";
//	std::cout << isValid("[[") << "\n";
//	std::cout << isValid("[)") << "\n";
//	std::cout << isValid("(][)") << "\n";
//	std::cout << isValid("](){}") << "\n";
//}