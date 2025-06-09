#include <iostream>
using namespace std;

void reverseArray(int arr[], int size)
{
    int left = 0;
    int right = size - 1;

    // using for loop
    // for (left, right; right >= left; left++, right--)
    // {
    //     swap(arr[right], arr[left]);
    // }

    // using while loop even array size
    // while (right >= left)
    // {
    //     swap(arr[right], arr[left]);
    //     right--;
    //     left++;
    // }
    // using while loop even array size
    while (right > left)
    {
        swap(arr[right], arr[left]);
        right--;
        left++;
    }

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    // int arr[10] = {1, 2, 3, 4, 5, 6, 78, 5, 86, 2};
    // int size = 10;
    int arr[9] = {1, 2, 3, 4, 5, 6, 78, 5, 86};
    int size = 9;

    reverseArray(arr, size);

    return 0;
}