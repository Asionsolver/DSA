

#include <iostream>
using namespace std;
#include <algorithm>
#include <vector>
using namespace std;
// ! Find missing elements from an array with duplicates.

// Negative marking method

// void missingWithDuplicate(vector<int> nums)
// {
//     for (int i = 0; i < nums.size(); i++)
//     {
//         int index = abs(nums[i]);
//         if (nums[index - 1] > 0)
//         {
//             nums[index - 1] *= -1;
//         }
//     }

//     for (auto value : nums)
//     {
//         cout << value << " ";
//     }
//     cout << endl;

//     // all positive indexes are missing
//     for (int i = 0; i < nums.size(); i++)
//     {
//         if (nums[i] > 0)
//         {
//             cout << "Missing element: " << i + 1 << endl;
//         }
//     }
// }

// Performing in-place sorting

vector<int> inPlaceSorting(vector<int> nums)
{
    int i = 0;
    int N = nums.size();
    while (i < N)
    {
        // as 0 based indexing
        int correct = nums[i] - 1;
        if (nums[i] != nums[correct])
        {
            swap(nums[i], nums[correct]);
        }
        else
        {
            i++;
        }
    }

    vector<int> ans;
    for (i = 0; i < N; i++)
    {
        if (nums[i] != i + 1)
        {
            ans.push_back(i + 1);
        }
    }
    return ans;
}

int main()
{

    vector<int> nums = {3, 3, 3, 3, 3};
    sort(nums.begin(), nums.end());
    // missingWithDuplicate(nums);
    vector<int> res = inPlaceSorting(nums);

    for (int x : res)
        cout << x << " ";
    return 0;
}

// missingWithDuplicate
// T.C -> O(n)
// S.C -> O(1)

// inPlaceSorting
// T.C -> O(n)
// S.C -> O(1)