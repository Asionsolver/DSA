// Question: Find the first & last occurrence of an element

#include <iostream>
using namespace std;

int firstOccurrence(int arr[], int size, int target)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    int firstOccur = -1;
    while (start <= end)
    {
        if (arr[mid] == target)
        {
            // Logic: first occurrence store
            firstOccur = mid;
            // Logic: left search
            end = mid - 1;
        }
        else if (target < arr[mid])
        {
            end = mid - 1;
        }
        else if (target > arr[mid])
        {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }

    return firstOccur;
}

int lastOccurrence(int arr[], int size, int target)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    int lastOccur = -1;
    while (start <= end)
    {
        if (arr[mid] == target)
        {
            // Logic: last occurrence store
            lastOccur = mid;
            // Logic: right search
            start = mid + 1;
        }
        else if (target < arr[mid])
        {
            end = mid - 1;
        }
        else if (target > arr[mid])
        {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }

    return lastOccur;
}
int main()
{

    int arr[] = {1, 1, 1, 2, 3, 4, 4, 4, 4, 5, 7, 7, 7, 8, 9, 9, 9, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 1;

    int resultFirstOccurrence = firstOccurrence(arr, size, target);
    cout << "The first occurrence index is " << resultFirstOccurrence << endl;

    int resultLastOccurrence = lastOccurrence(arr, size, target);
    cout << "The last occurrence index is " << resultLastOccurrence << endl;
    return 0;
}

// *: T.C O(k)= O(log n)