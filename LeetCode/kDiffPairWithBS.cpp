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

//  Using Binary Search
int binarySearch(vector<int> nums, int start, int x)
{

    int end = nums.size() - 1;
    while (start <= end)
    {
        int mid = (end + start) / 2;
        if (nums[mid] == x)
        {
            return mid;
        }
        else if (x > nums[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return -1;
}

int findPair(vector<int> &nums, int k)
{
    set<pair<int, int>> ans;
    for (int i = 0; i < nums.size(); i++)
    {
        if (binarySearch(nums, i + 1, nums[i] + k) != -1)
        {
            ans.insert({nums[i], nums[i] + k});
        }
    }
    return ans.size();
}

int main()
{ // vector<int> nums = {3, 1, 4, 1, 5};
    vector<int> nums = {1, 1, 1, 1, 1};
    int k = 1; // Change k to the desired value.
    // vector<int> nums = {7, 1, 2, 4, 5};
    // int k = 2; // Change k to the desired value.
    sort(nums.begin(), nums.end());

    cout << "The number of unique k-diff pairs in the array is " << findPair(nums, k);
    return 0;
}