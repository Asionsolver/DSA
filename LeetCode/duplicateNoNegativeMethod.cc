#include <iostream>
using namespace std;
#include <algorithm>
#include <vector>
using namespace std;
// ! LeetCode problem no: 287
// ! Find the Duplicate Number

// Negative marking method

int negativeMarkingMethod(vector<int> nums)
{
    // visited solution
    int ans = -1;
    for (int i = 0; i < nums.size(); i++)
    {
        // already visited?
        int index = abs(nums[i]);
        if (nums[index] < 0)
        {
            ans = index;
            break;
        }
        // visited mark
        nums[index] *= -1;
    }
    return ans;
}

int main()
{

    vector<int> nums = {5, 1, 3, 4, 2, 5};
    sort(nums.begin(), nums.end());
    cout << negativeMarkingMethod(nums);
    return 0;
}
