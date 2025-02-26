#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// ! print array element using recursion

// void printArr(int arr[], int n, int index)
// {
//     // base case
//     if (index >= n)
//     {
//         return;
//     }

//     // 1st recursive case solve
//     cout << arr[index] << " ";

//     // Then call nth recursive case
//     printArr(arr, n, index + 1);
// }

void printArr(int arr[], int n)
{
    // base case
    if (n == 0)
    {
        return;
    }

    // Then call nth recursive case
    printArr(arr, n - 1);

    // 1st recursive case solve
    cout << arr[n - 1] << " ";
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);
    // cout << n;
    // int index = 0;
    // printArr(arr, n, index);
    printArr(arr, n);

    return 0;
}