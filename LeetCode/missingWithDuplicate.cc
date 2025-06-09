

#include <iostream>
using namespace std;
#include <algorithm>
#include <vector>
using namespace std;
// ! Find missing elements from an array with duplicates.

// Negative marking method

void missingWithDuplicate(vector<int> nums)
{
    for (int i = 0; i < nums.size(); i++)
    {
        int index = abs(nums[i]);
        if (nums[index - 1] > 0)
        {
            nums[index - 1] *= -1;
        }
    }

    for (auto value : nums)
    {
        cout << value << " ";
    }
    cout << endl;

    // all positive indexes are missing
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] > 0)
        {
            cout << "Missing element: " << i + 1 << endl;
        }
    }
}

int main()
{

    vector<int> nums = {3, 3, 3, 3, 3};
    sort(nums.begin(), nums.end());
    missingWithDuplicate(nums);
    return 0;
}

// T.C -> O(n)
// S.C -> O(1)