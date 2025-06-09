

#include <iostream>
using namespace std;
#include <algorithm>
#include <vector>
using namespace std;
// ! Find missing elements from an array with duplicates.

// sorting and swapping method

void missingWithSortAndSwap(vector<int> nums)
{
    int i = 0;
    while (i < nums.size())
    {

        int index = nums[i] - 1;
        if (nums[i] != nums[index])
        {
            swap(nums[index], nums[i]);
        }
        else
        {
            i++;
        }
    }

    // all positive indexes are missing
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] != i + 1)
        {
            cout << "Missing Elements: " << i + 1;
        }
        cout << endl;
    }
}

int main()
{

    vector<int> nums = {2, 4, 4, 4, 5};
    sort(nums.begin(), nums.end());
    missingWithSortAndSwap(nums);
    return 0;
}

// T.C -> O(n)
// S.C -> O(1)