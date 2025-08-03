#include <iostream>
#include <vector>


int maxProfit(std::vector<int>& prices)
{
	int	price = prices[0];
	int	profit = 0;

	for (std::size_t i = 1; i < prices.size(); ++i)
	{
		if (prices[i] < price)
			price = prices[i];
		else if (prices[i] - price > profit)
			profit = prices[i] - price;
	}

	return profit;
}

/*
int main()
{
	std::vector<int> vct1 = { 7,6,4,3,1 };
	std::cout << maxProfit(vct1) << "\n";

	std::vector<int> vct2 = { 7,1,5,3,6,4 };
	std::cout << maxProfit(vct2) << "\n";
}
*/