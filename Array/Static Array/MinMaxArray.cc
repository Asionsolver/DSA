#include <iostream>
#include <limits.h>
using namespace std;

void minMaxArray(int arr[], int size)
{
    int max = INT_MIN;
    int min = INT_MAX;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    cout << "The minimum number is " << min << endl;
    cout << "The maximum number is " << max << endl;
}

int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 78, 5, 86, 2};
    int size = 10;

    minMaxArray(arr, size);

    return 0;
}