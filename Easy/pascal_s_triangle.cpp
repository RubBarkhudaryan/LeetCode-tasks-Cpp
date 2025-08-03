#include <iostream>
#include <vector>


/*

Pascal's Triangle

		1
	   1 1
	  1 2 1
	 1 3 3 1
	1 4 6 4 1

*/

std::vector<std::vector<int>> generate(int numRows)
{
	std::vector<std::vector<int>> triangle(numRows, {1});
	
	for (std::size_t i = 0; i < numRows; ++i)
	{
		std::vector<int> row(i + 1, 1);

		triangle[i] = row;

		if (i > 1)
		{
			for (std::size_t j = 1; j < row.size() - 1; ++j)
				row[j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
			triangle[i] = row;
		}
	}

	return (triangle);
}


/*
int main()
{
	std::vector<std::vector<int>> triangle = generate(10);

	for (int i = 0; i < triangle.size(); ++i)
	{
		for (int j = 0; j < triangle[i].size(); ++j)
			std::cout << triangle[i][j] << " ";
		std::cout << "\n";
	}

	return (0);
}
*/
