// 78. Subsets

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

    helper(nums, ans, finalAns, index + 1);
    ans.push_back(nums[index]);
    helper(nums, ans, finalAns, index + 1);
}

vector<vector<int>> subsets(vector<int> &nums)
{
    vector<int> ans;
    vector<vector<int>> finalAns;
    helper(nums, ans, finalAns, 0);
    return finalAns;
}

int main()
{
    vector<int> arr = {1, 2, 3};
    vector<vector<int>> result = subsets(arr);
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