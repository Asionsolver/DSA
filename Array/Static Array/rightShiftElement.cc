#include <iostream>
using namespace std;

void rightShiftElementsByOne(int arr[], int size)
{
    int temp = arr[size - 1];
    for (int i = size - 1; 1 <= i; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[0] = temp;
}

int main()
{
    int arr[] = {4, 5, 9, 11, 7, 8, 6, 5, 2, 3, 1};
    int size = 11;

    rightShiftElementsByOne(arr, size);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}