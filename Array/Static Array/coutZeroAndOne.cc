#include <iostream>
using namespace std;

void countZeroAndOne(int arr[], int size)
{
    int countZero = 0;
    int countOne = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 0)
        {
            countZero++;
        }
        else
        {
            countOne++;
        }
    }

    cout << "The number of 0's in array" << countZero << endl;
    cout << "The number of 1's in array" << countOne << endl;
}

int main()
{
    int arr[10] = {0, 1, 1, 1, 0, 1, 1, 1, 0, 0};
    int size = 10;

    countZeroAndOne(arr, size);

    return 0;
}