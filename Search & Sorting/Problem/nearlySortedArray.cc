// Question: Binary Search in a nearly Sorted Array.

#include <iostream>
#include <vector>
using namespace std;

int binarySearchNearlySorted(vector<int> arr, int target)
{
    int start = 0;
    int end = arr.size() - 1;
    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (arr[mid] == target)
        {
            return mid;
        }
        else if (mid - 1 >= start && arr[mid - 1] == target)
        {
            return mid - 1;
        }
        else if (mid + 1 < end && arr[mid + 1] == target)
        {
            return mid + 1;
        }
        else if (target > arr[mid])
        {
            start = mid + 2;
        }
        else
        {
            end = mid - 2;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}

int main()
{
    //               3  10 30  50  60  70  80  90
    //               0  1  2   3   4   5   6   7
    vector<int> arr{10, 3, 40, 20, 50, 80, 70, 90};

    int target = 700;

    int ans = binarySearchNearlySorted(arr, target);

    cout << "Index of " << target << " is " << ans << endl;

    return 0;
}