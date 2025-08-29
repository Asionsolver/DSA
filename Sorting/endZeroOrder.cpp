// ! Push zeroes to end while maintaining the relative order of other elements.

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void pushZeroEnd(int arr[], int size)
{
    // size -1 passes
    for (int i = 0; i < size - 1; i++)
    {
        // traverse
        for (int j = 0; j < size - 1 - i; j++)
        {
            // compare zero or not
            if (arr[j] == 0)
            {
                swap(arr[j], arr[j + 1]); // swap two element
            }
        }
    }
}

int main()
{
    int arr[] = {0, 0, 2, 5, 1, 0, 7, 4, 8, 0};

    cout << "Befor Sorting: " << endl;
    for (auto element : arr)
    {
        cout << element << " ";
    }
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << endl;

    pushZeroEnd(arr, size);

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