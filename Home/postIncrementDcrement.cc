#include <iostream>
using namespace std;

int main()
{
    int a = 5;

    cout << a << endl; // 5

    cout << a++ << endl; // 5
    cout << a << endl;   // 6

    cout << a++ << endl; // 6
    cout << a << endl;   // 7

    int c = 5;

    cout << c << endl; // 5

    cout << (c++) * 2 << endl; // 10
    cout << c << endl;         // 6

    return 0;
}