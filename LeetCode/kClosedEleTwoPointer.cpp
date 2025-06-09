#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Question 658: Find K Closet Elements
/**
 * Condition
 * Given a sorted integer array arr, two integers k and x, return the k closest integers to x in the array. The result should also be sorted in ascending order.
 * An integer a is closer to x than integer b if:
 * |a-x| < |b-x|, or
 * |a-x| == |b-x| and a < b
 */

vector<int> twoPointer(vector<int> arr, int x, int k)
{
    int low = 0;
    int high = arr.size() - 1;

    while (high - low >= k)
    {
        if (x - arr[low] > arr[high] - x)
        {
            low++;
        }
        else
        {
            high--;
        }
    }

    // vector<int> ans;
    // for (int i = low; i <= high; i++)
    // {
    //     ans.push_back(arr[i]);
    // }
    // return ans;

    return vector<int>(arr.begin() + low, arr.begin() + high + 1);
}
int main()
{
    // vector<int> arr = {1, 2, 3, 4, 5};
    vector<int> arr = {10, 16, 22, 30, 35, 39, 42, 45, 48, 50, 53, 55, 56};
    int x = 35, k = 4;
    vector<int> result = twoPointer(arr, x, k);

    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
    return 0;
}

// Time Complexity O(n)= O(n-k)
