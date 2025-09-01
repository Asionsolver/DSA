// Question 658: Find K Closet Elements
/**
 * Condition
 * Given a sorted integer array arr, two integers k and x, return the k closest integers to x in the array. The result should also be sorted in ascending order.
 * An integer a is closer to x than integer b if:
 * |a-x| < |b-x|, or
 * |a-x| == |b-x| and a < b
 */

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int lowerBound(vector<int> arr, int x)
{
    int start = 0;
    int end = arr.size() - 1;
    int ans = end;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] >= x)
        {
            ans = mid;
            end = mid - 1;
        }
        else if (x > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return ans;
}

vector<int> bsMethod(vector<int> arr, int x, int k)
{
    // lower bound
    int high = lowerBound(arr, x);
    int low = high - 1;
    while (k--)
    {
        if (low < 0)
        {
            high++;
        }
        else if (high >= arr.size())
        {
            low--;
        }

        else if (x - arr[low] > arr[high] - x)
        {
            high++;
        }
        else
        {
            low--;
        }
    }
    return vector<int>(arr.begin() + low + 1, arr.begin() + high);
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    // vector<int> arr = {3, 5, 8, 10};
    // int x = 3;
    // int x = -1;
    // int x = 6;
    int x = 15;
    // int k = 4;
    int k = 2;
    vector<int> result = bsMethod(arr, x, k);

    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }

    return 0;
}