// 852. Peak Index in a Mountain Array
#include <iostream>
using namespace std;

// using linear search
// int peakIndexLinear(int arr[], int size)
// {
//     for (int i = 1; i < size - 2; i++)
//     {
//         if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1])
//         {
//             return i;
//         }
//     }
//     return -1;
// }

// using binary search
int peakIndexInMountainArray(int arr[], int size)
{
    int s = 0;
    int e = size - 1;
    int mid = s + (e - s) / 2;
    while (s < e)
    {
        if (arr[mid] < arr[mid + 1])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = s + (e - s) / 2;
    }
    return s;
}
int main()
{
    int arr[] = {0, 10, 5, 2};
    int size = sizeof(arr) / sizeof(arr[0]);
    int result = peakIndexInMountainArray(arr, size);
    cout << "The Peak Index in Mountain Array is " << result << endl;
    return 0;
}