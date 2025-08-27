#include <iostream>
using namespace std;

int main()
{
    int arr[] = {0, 0, 1, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    // cout << size << endl;

    int decimal = 0;
    int x = 1;
    for (int i = size - 1; i > 0; i--)
    {
        int multiply = arr[i] * x;
        decimal = decimal + multiply;
        x *= 2;
    }
    cout << "X:" << x << endl;
    cout << "Decimal Value:" << decimal << endl;

    return 0;
}