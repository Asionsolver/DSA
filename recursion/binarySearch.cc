#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int binarySearch(vector<int> arr, int start, int end, int element)
{
    // base case: key not found
    if (start > end)
    {
        return -1;
    }

    int mid = start + (end - start) / 2;

    // base case: key found
    if (arr[mid] == element)
    {
        return mid;
    }

    // arr[mid] < key -> right side search
    if (arr[mid] < element)
    {
        return binarySearch(arr, mid + 1, end, element);
    }
    else
    {
        binarySearch(arr, start, mid - 1, element);
    }
}

int main()
{
    vector<int> arr{10, 25, 34, 44, 59, 50, 55, 59, 63, 67, 69, 88};
    int n = arr.size();
    int start = 0;
    int end = n - 1;

    int element = 50;
    int result = binarySearch(arr, start, end, element);
    cout << "Element search by " << (result + 1) << " this location." << endl;

    return 0;
}