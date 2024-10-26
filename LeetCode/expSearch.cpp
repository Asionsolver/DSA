#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Question: Exponential Search or Doubling Search or Strazic Search

int binarySearch(int arr[], int start, int end, int searchElement)
{
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] == searchElement)
        {
            return mid;
        }
        else if (searchElement > arr[mid])
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

int expSearch(int arr[], int size, int searchElement)
{
    if (arr[0] == searchElement)
    {
        return 0;
    }
    int i = 1;
    while (i < size && arr[i] <= searchElement) // T.C -> O(log m)
    {
        i = i * 2;
    }

    return binarySearch(arr, i / 2, min(i, size - 1), searchElement);
}

int main()
{
    int arr[] = {1, 2, 4, 5, 6, 8, 9, 11, 12, 14, 15, 17, 18, 19, 32, 34, 39, 41, 44, 48, 55, 56, 59, 64, 68};
    int size = sizeof(arr) / sizeof(arr[0]);
    int searchElement = 4;
    cout << "Your search element index is " << expSearch(arr, size, searchElement);
    return 0;
}
// T.C -> O(log(2^log(m-1)))

// 1,2....4....8....16....32
// 2^0,2^1....2^2....2^3....2^4....2^5....2^m
// Binary Search on Sub array
// Size of sub array m
// 2^log(m) - 2^log(m-1)
// 2^log(m) - 2^log(m).2^-1
// 2^log(m){1-2^-1}
// 2^log(m-1)
