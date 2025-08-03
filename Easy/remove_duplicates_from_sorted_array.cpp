#include <iostream>
#include <vector>

/*
int removeDuplicates(std::vector<int>& nums)
{
    for (std::vector<int>::iterator it = nums.begin(); it != nums.end(); ++it)
    {
        std::vector<int>::iterator it2 = it + 1;
        while (it2 != nums.end())
        {
            if (*it == *it2)
                it2 = nums.erase(it2);
            else
                ++it2;
        }
    }
    return nums.size();
}

// or 

*/

int removeDuplicates(std::vector<int>& nums)
{
    int dir{};

    for (std::size_t i = 1; i < nums.size(); ++i)
    {
        if (nums[dir] != nums[i])
        {
            ++dir;
            nums[dir] = nums[i];
        }
    }
    return dir + 1;
}

/*
int main()
{
    std::vector<int> vct = { 1,1,1 };
    std::cout << removeDuplicates(vct) << "\n";

    for (int i = 0; i < vct.size(); ++i)
        std::cout << vct[i] << " ";
}
*/