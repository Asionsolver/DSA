#include <iostream>
using namespace std;

void extremePrint(int arr[], int size)
{
    int left = 0;
    int right = size - 1;

    while (right >= left)
    {
        if (left == right)
        {
            cout << arr[left];
        }
        else
        {
            cout << arr[left] << endl;
            cout << arr[right] << endl;
        }

        left++;
        right--;
    }
}

int main()
{
    // int arr[10] = {8, 9, 3, 6, 4, 99, 23, 74, 25, 63};
    // int size = 10;
    int arr[9] = {8, 9, 3, 6, 4, 99, 23, 74, 25};
    int size = 9;
    extremePrint(arr, size);

    return 0;
}