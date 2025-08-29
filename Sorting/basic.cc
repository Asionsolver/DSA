// ! Bubble sort algorithm

/**
 * @Observation
 * In each pass the nth max element goes to its right position.
 * If three are 'n' elements, then we require at most 'n-1' passes to sort.
 *
 * @Algorithm
 * In each pass swap 2 adjacent elements if arr[i]>arr[i+1].
 * Iteration ineach pass also reduces.
 */

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
// good bubble sort
void nonOptimizeVersion(int arr[], int size)
{
    // size -1 passes
    for (int i = 0; i < size - 1; i++)
    {
        // traverse
        for (int j = 0; j < size - 1; j++)
        {
            // compare two element
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]); // swap two element
            }
        }
    }
}

// better bubble sort
void optimizeVersion(int arr[], int size)
{
    // size -1 passes
    for (int i = 0; i < size - 1; i++)
    {
        // traverse
        for (int j = 0; j < size - 1 - i; j++)
        {
            // compare two element
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]); // swap two element
            }
        }
    }
}

// best bubble sort

bool isArraySort(int arr[], int size)
{
    bool isSort = true;
    for (int i = 0; i < size - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            isSort = false;
            break;
        }
    }
    return isSort;
}

void bestVersion(int arr[], int size)
{
    int isSwaping = 0;
    // size -1 passes
    for (int i = 0; i < size - 1; i++)
    {
        // traverse
        for (int j = 0; j < size - 1 - i; j++)
        {
            // cout << "Number of iteration (i): " << i << endl;
            // cout << "Number of iteration: (j)" << j << endl;
            // cout << "Number of swapping:" << isSwaping << endl;

            // this condition check array is already sort or not
            // compare two element
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]); // swap two element
                isArraySort(arr, size);
            }
        }
        // swap did't happen
        if (isArraySort(arr, size))
        {
            break;
        }
    }
}

int main()
{
    // int arr[] = {9, 3, 2, 5, 1, 6, 7, 4, 8, -90};
    int arr[] = {1, 2, 3};
    cout << "Befor Sorting: " << endl;
    for (auto element : arr)
    {
        cout << element << " ";
    }
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << endl;

    // nonOptimizeVersion(arr, size);
    // optimizeVersion(arr, size);
    bestVersion(arr, size);
    cout << endl;

    cout << "After Sorting: " << endl;
    for (auto element : arr)
    {
        cout << element << " ";
    }
    cout << endl;
    return 0;
}

// nonOptimizeVersion
// T.C:O(n2)
// S.C:O(1)

// optimizeVersion
// T.C:O(n2) // not improve time complexity but improve operation
// S.C:O(1)