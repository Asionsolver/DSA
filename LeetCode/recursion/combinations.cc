// 77. Combinations

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void helper(vector<int> &nums, vector<int> ans, vector<vector<int>> &finalAns, int index, int k)
{
    if (index == nums.size())
    {
        if (ans.size() == k)
        {
            finalAns.push_back(ans);
        }
        return;
    }
    if ((ans.size() + (nums.size() - index)) < k) // time complexity better
        return;

    helper(nums, ans, finalAns, index + 1, k);
    ans.push_back(nums[index]);
    helper(nums, ans, finalAns, index + 1, k);
}

vector<vector<int>> combine(int n, int k)
{
    vector<int> nums;

    for (int i = 1; i <= n; i++)
    {
        nums.push_back(i);
    }

    vector<int> ans;
    vector<vector<int>> finalAns;
    helper(nums, ans, finalAns, 0, k);
    return finalAns;
}

int main()
{
    int n = 4, k = 2;
    vector<vector<int>> result = combine(n, k);
    // print using foreach
    for (const auto &subset : result) // Each subset is a vector<int>
    {
        cout << "[";
        for (int x : subset) // elements inside subset
        {
            cout << x;
        }
        cout << "]" << endl;
    }
    // cout << endl;
    return 0;
}