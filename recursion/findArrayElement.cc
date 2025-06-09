#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

// ! print find number in array element using recursion

bool findElement(int arr[], int n, int element)
{

    // base case
    if (n == 0)
    {
        return false;
    }

    // processing
    if (element == arr[n - 1])
    {
        return true;
    }

    // Then call nth recursive case
    findElement(arr, n - 1, element);
}

int main()
{
    int arr[] = {10, 90, 70, 40, 5, 50};
    int n = sizeof(arr) / sizeof(arr[0]);

    int element;
    cout << "What's number you find it: ";
    cin >> element;

    bool result = findElement(arr, n, element);

    if (result)
    {
        cout << "Your number exits." << endl;
    }
    else
    {
        cout << "Your number is not exits." << endl;
    }

    return 0;
}