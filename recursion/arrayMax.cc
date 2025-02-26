#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

// ! print maximum number in array element using recursion

void maxElement(int arr[], int n, int &max)
{

    // base case
    if (n == 0)
    {
        return;
    }

    // processing
    if (max < arr[n - 1])
    {
        max = arr[n - 1];
    }

    // Then call nth recursive case
    maxElement(arr, n - 1, max);
}

int main()
{
    int arr[] = {10, 90, 70, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);
    int max = INT_MIN;
    maxElement(arr, n, max);

    cout << "Maximum number is " << max << endl;
    return 0;
}