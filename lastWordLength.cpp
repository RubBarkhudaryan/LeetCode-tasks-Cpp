#include <iostream>
#include <string>

int lengthOfLastWord(std::string str) {

	int lastIndex = str.length() - 1;
	int count = 0;

	while ((str[lastIndex] >= 9 && str[lastIndex] <= 13) || str[lastIndex] == ' ')
		--lastIndex;

	while (lastIndex >= 0  && (str[lastIndex] < 9 || str[lastIndex] > 13) && str[lastIndex] != 32)
	{
		--lastIndex;
		++count;
	}
	return(count);
}

int main()
{
	std::cout << lengthOfLastWord("Hello world");
	std::cout << lengthOfLastWord("	    	 Hello world	      	 ");
	std::cout << lengthOfLastWord("		fly me 	     to theeee 				moon             	");
	std::cout << lengthOfLastWord("		");
	return 0;
}