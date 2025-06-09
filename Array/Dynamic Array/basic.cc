#include <iostream>
using namespace std;

void dynamicArr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
}

int main()
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        int data;
        cin >> data;
        arr[i] = data;
    }

    // arr[n] = 80;

    // ! not recommended
    // for (int i = 0; i < 100; i++)
    // {
    //     arr[n + i] = 8;
    // }

    cout << endl
         << endl;

    dynamicArr(arr, n);

    return 0;
}