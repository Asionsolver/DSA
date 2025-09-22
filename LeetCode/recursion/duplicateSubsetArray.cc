// 90. Subsets II
// Given an integer array nums that may contain duplicates, return all possible subsets (the power set).

// The solution set must not contain duplicate subsets. Return the solution in any order.

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void helper(vector<int> &nums, vector<int> ans, vector<vector<int>> &finalAns, int index)
{
    if (index == nums.size())
    {
        finalAns.push_back(ans);
        return;
    }

    // choice 1: not taking nums[index]
    int nextIndex = index + 1;
    while (nextIndex < nums.size() && nums[nextIndex] == nums[index])
    {
        nextIndex++; // Skipped duplicates
    }
    helper(nums, ans, finalAns, nextIndex);

    // choice 2: taking nums[index]
    ans.push_back(nums[index]);
    helper(nums, ans, finalAns, index + 1);
}

vector<vector<int>> subsetsWithDup(vector<int> &nums)
{
    vector<int> ans;
    vector<vector<int>> finalAns;
    sort(nums.begin(), nums.end()); // First we need to sort
    helper(nums, ans, finalAns, 0);
    return finalAns;
}

int main()
{
    vector<int> arr = {1, 2, 2};
    vector<vector<int>> result = subsetsWithDup(arr);

    for (const auto &subset : result)
    {
        cout << "[";
        for (int x : subset)
        {
            cout << x;
        }
        cout << "]" << endl;
    }
    return 0;
}