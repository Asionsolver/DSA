// Question: Search element in 2d array using binary search

#include <iostream>
using namespace std;

bool binarySearch2D(int arr[5][4], int rows, int cols, int target)
{
    int start = 0;
    int end = rows * cols - 1;
    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        int rowIndex = mid / cols;
        int colIndex = mid % cols;
        int element = arr[rowIndex][colIndex];

        if (element == target)
        {
            cout << "Element found at row " << rowIndex << " and column " << colIndex << endl;
            return true;
        }
        else if (element < target)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return false;
}

int main()
{
    int arr[5][4] = {{1, 2, 3, 4},
                     {5, 6, 7, 8},
                     {9, 10, 11, 12},
                     {13, 14, 15, 16},
                     {17, 18, 19, 20}};

    int target = 5;

    int rows = 5;
    int cols = 4;
    if (binarySearch2D(arr, rows, cols, target))
    {
        cout << "Element found ";
    }
    else
    {
        cout << "Element not found" << endl;
    }
    return 0;
}