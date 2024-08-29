#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
// ! LeetCode problem no: 287
// Find the Duplicate Number
int main()
{

    vector<int> nums = {1, 5, 4, 2, 3, 5};

    sort(nums.begin(), nums.end());

    for (int i = 0; i < nums.size() - 1; i++)
    {
        if (nums[i] == nums[i + 1])
        {
            cout << "Duplicate Number is: " << nums[i];
        }
    }

    return 0;
}
