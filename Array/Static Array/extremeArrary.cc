#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void extremeArrayPrint(int arr[], int size)
{
    int left = 0;
    int right = size - 1;
    int resultLeft = 0;
    int result[size];

    while (right >= left)
    {
        if (left == right)
        {
            result[left + resultLeft] = arr[left];
        }
        else
        {
            result[left + resultLeft] = arr[left];
            result[left + resultLeft + 1] = arr[right];
        }
        left++;
        resultLeft = resultLeft + 1;
        right--;
    }
    cout << "[";
    for (int i = 0; i < size; i++)
    {
        cout << result[i] << ", ";
    }
    cout << "]";
}

int main()

{
    int arr[9] = {8, 9, 3, 6, 4, 99, 23, 74, 25};
    int size = 9;
    extremeArrayPrint(arr, size);
    cout << endl;
    return 0;
}

// Time Complexity: O(n)

// Space Complexity: O(n)