#include <iostream>
#include <vector>

std::vector<int> getRow(int rowIndex)
{
	std::vector<std::vector<int>> triangle(rowIndex + 1, { 1 });

	for (std::size_t i = 0; i < rowIndex + 1; ++i)
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

	return (triangle[rowIndex]);
}

/*
int main()
{
	std::vector<int> row = getRow(2);

	for (int i = 0; i < row.size(); ++i)
	{
		std::cout << row[i] << " ";
	}

	return (0);
}
*/