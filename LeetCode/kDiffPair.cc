// Question: 532. K-diff Pairs in an Array

#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

/**
 * Condition:
 ** Given an array of integers nums and an integer k, return the number of unique k-diff pairs in the array.

 ** A k-diff pair is an integer pair (nums[i], nums[j]), where the following are true:

 ** 0 <= i, j < nums.length
 ** i != j
 ** |nums[i] - nums[j]| == k

 *! Notice: that |val| denotes the absolute value of val.
 */

// Brute force way
int twoPointerApproach(vector<int> nums)
{
    int k = 0;
    int i = 0, j = 1;
    set<pair<int, int>> ans;
    while (j < nums.size())
    {
        int diff = nums[j] - nums[i];
        if (diff == k)
        {
            // cout << "(" << nums[i] << ", " << nums[j] << ")" << endl;
            ans.insert({nums[i], nums[j]});
            i++, j++;
        }
        else if (diff > k)
        {
            i++;
        }
        else
        {
            j++;
        }

        // ! Check: i != j
        if (i == j)
        {
            j++;
        }
    }

    return ans.size();
}

int main()
{

    // vector<int> nums = {3, 1, 4, 1, 5};
    vector<int> nums = {1, 1, 1, 1, 1};
    sort(nums.begin(), nums.end());
    cout << "The number of unique k-diff pairs in the array is " << twoPointerApproach(nums);
    return 0;
}