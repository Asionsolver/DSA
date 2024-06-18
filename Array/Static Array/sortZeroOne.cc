#include <iostream>
using namespace std;

void sortByZeroOne(int arr[], int size)
{
    int zero = 0;
    int one = 0;
    int i;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 0)
        {

            zero++;
        }
        else
        {
            one++;
        }
    }

    // for (i = 0; i < zero; i++)
    // {
    //     arr[i] = 0;
    // }
    // for (int j = i; j < size; j++)
    // {
    //     arr[j] = 1;
    // }

    int index = 0;
    while (zero--)
    {
        arr[index] = 0;
        index++;
    }
    while (one--)
    {
        arr[index] = 1;
        index++;
    }
}

int main()
{
    int arr[] = {0, 1, 0, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1, 0, 1};
    int size = 15;

    sortByZeroOne(arr, size);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i];
    }

    return 0;
}