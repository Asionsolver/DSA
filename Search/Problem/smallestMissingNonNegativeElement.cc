// Given a sorted array on non-negative distinct integers, find the smallest missing non-negative element in it.

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Linear Search Approach
// int missingElement(vector<int> arr)
// {
//     for (int i = 0; i < arr.size(); i++)
//     {
//         if (i != arr[i])
//         {
//             return i;
//         }
//     }
// }

// Binary Search Approach
int missingElement(vector<int> arr)
{
    int start = 0;
    int end = arr.size() - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;
    while (start <= end)
    {
        if (arr[mid] == mid)
        {
            start = mid + 1;
        }
        else
        {
            ans = mid;
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

int main()
{
    // vector<int> arr = {0, 1, 2, 3, 4, 8, 9, 12};
    vector<int> arr = {0, 1, 3, 4, 8, 9, 12};
    int result = missingElement(arr);
    cout << "Missing element: " << result << endl;
    return 0;
}