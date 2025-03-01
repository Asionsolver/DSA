#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool arraySort(int arr[], int size, int index)
{

    // base case
    if (index >= size)
    {
        return true;
    }

    // 1st element check
    if (arr[index] > arr[index + 1])
    {
        return false;
    }

    return arraySort(arr, size, index + 1);
}

int main()
{
    int arr[] = {0, 0, 0, 0};
    int size = sizeof(arr) / sizeof(arr[0]);
    int index = 0;

    bool result = arraySort(arr, size, index);

    if (result)
    {
        cout << "This array is sorted." << endl;
    }
    else
    {
        cout << "This array is not sorted." << endl;
    }

    return 0;
}