#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

// ! print minimum number in array element using recursion

void minElement(int arr[], int n, int &min)
{

    // base case
    if (n == 0)
    {
        return;
    }

    // processing
    if (min > arr[n - 1])
    {
        min = arr[n - 1];
    }

    // Then call nth recursive case
    minElement(arr, n - 1, min);
}

int main()
{
    int arr[] = {10, 90, 70, 40, 5, 50};
    int n = sizeof(arr) / sizeof(arr[0]);
    int min = INT_MAX;
    minElement(arr, n, min);

    cout << "Minimum number is " << min << endl;
    return 0;
}