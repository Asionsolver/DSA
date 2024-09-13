#include <iostream>
using namespace std;

// Question : Binary Search Algorithm

// Condition: Binary Search Algorithm
// 1. Element should be in monotonic order or sorted. For example asc or dec order.

int binarySearch(int arr[], int size, int targetValue)
{
    int start = 0;
    int end = size - 1;
    int mid = (start + end) / 2;

    while (start <= end)

    {
        int element = arr[mid];
        if (element == targetValue)
        {
            return mid;
        }
        else if (targetValue < element)
        {
            // Logic:
            // search in left
            end = mid - 1;
        }
        else
        {
            // search in right
            start = mid + 1;
        }

        mid = (start + end) / 2;
    }

    return -1;
}

int main()
{
    int arr[] = {
        1,
        3,
        4,
        5,
        7,
        11,
        15,
        17,
        21,
        25,
        27,
    };

    int targetValue = 5;

    int size = sizeof(arr) / sizeof(arr[0]);
    // cout << "Size: " << size;

    int indexOfTarget = binarySearch(arr, size, targetValue);

    if (indexOfTarget == -1)
    {
        cout << "The target value in not found 😔.";
    }
    else
    {
        cout << "The target value in found 😊 and target value index is " << indexOfTarget << " .";
    }

    return 0;
}