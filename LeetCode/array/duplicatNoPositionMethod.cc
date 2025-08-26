#include <iostream>
using namespace std;
#include <algorithm>
#include <vector>
using namespace std;
// ! LeetCode problem no: 287
// ! Find the Duplicate Number

// Negative marking method

int positioningMethod(vector<int> nums)
{
    int i = 0;
    while (nums[i] != nums[nums[i]])
    {
        swap(nums[i], nums[nums[i]]);
    }
    return nums[i];
}

int main()
{

    vector<int> nums = {3, 1, 3, 4, 2, 5};
    sort(nums.begin(), nums.end());
    cout << positioningMethod(nums);
    return 0;
}

// T.C -> O(n)
// S.C -> O(1)
