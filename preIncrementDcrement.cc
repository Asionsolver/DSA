#include <iostream>
using namespace std;

int main()
{
    // int a = 5;
    // cout << a << endl;   // 5
    // cout << ++a << endl; // 6
    // cout << a << endl;   // 6
    // cout << ++a << endl; // 7

    // int b = 6;
    // cout << b << endl;     // 6
    // cout << (++b) << endl; // 7

    // int c = 5;
    // cout << c << endl;         // 5
    // cout << (++c) * 2 << endl; // 12

    int d = 10;

    //            11  *   11  = 121
    // cout << ((++d) * (d++)) << endl; // 11 * 12 = 132
    // cout << d << endl;             // 12

    //           10  *   12  = 120
    cout << ((d++) * (++d)) << endl; // 10 * 12 = 120
    cout << d << endl;               // 12

    // int result1 = (++d);     // 11
    // cout << result1 << endl; // 11
    // int result2 = (d++);     // 11
    // cout << result2 << endl; // 11
    //  finalResult =   11    *   11    = 121
    // int finalResult = result1 * result2; // 11 * 11 = 121
    // cout << finalResult << endl;         // 121
    // cout << d << endl;                   // 12

    return 0;
}