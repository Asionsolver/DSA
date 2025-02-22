#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// void variablePointer(int *p)
// {
//     *p = *p + 10;
// }

void update(int *p, int *q)
{
    *p = 10;
    *q = 20;
}

// void solve(int arr[])
// {
//     cout << "Size of function arr: " << sizeof(arr) << endl;
//     arr[0] = 10;
//     cout << "arr: " << arr << endl;
//     cout << "&arr: " << &arr << endl;
// }
int main()
{

    // int arr[5] = {1, 5, 8, 7, 5};

    // cout << endl;
    // cout << "Size of arr: " << sizeof(arr) << endl;
    // cout << "arr: " << arr << endl;
    // cout << "&arr: " << &arr << endl;
    // cout << "Printing array elements inside main before calling function: " << endl
    //      << endl;
    // for (int i = 0; i < 5; i++)
    // {
    //     cout << arr[i] << " ";
    // }

    // cout << endl;
    // solve(arr);

    // cout << endl
    //      << "Printing array elements inside main after calling function: " << endl;
    // for (int i = 0; i < 5; i++)
    // {
    //     cout << arr[i] << " ";
    // }

    // int a = 10;
    // int *p = &a;
    // cout << "Before calling function: " << a << endl;
    // variablePointer(p);
    // cout << "After calling function: " << a << endl;

    int arr[5] = {1, 5, 8, 7, 5};

    int *p = &arr[1];
    int *q = &arr[2];

    cout << "Before calling function: " << *p << " " << *q << endl;

    update(p, q);

    cout << "After calling function: " << *p << " " << *q << endl;

    return 0;
}