#include <iostream>
using namespace std;

void printAllPairs(int arr[], int size)
{

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << "(" << arr[i] << ", " << arr[j] << ")" << endl;
        }
    }
}

int main()
{
    // int arr[] = {4, 5, 9, 11, 7, 8, 6, 5, 2, 3, 1};
    // int size = 11;
    int arr[] = {4, 5, 9};
    int size = 3;

    cout << "Printing all pairs of numbers " << endl;
    printAllPairs(arr, size);

    return 0;
}