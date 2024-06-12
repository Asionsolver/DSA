#include <iostream>
using namespace std;

int main()
{

    // ! arithmetic operators -> +, -, *, /, %
    // int a

    // cout << a + b << endl;
    // cout << a - b << endl;
    // cout << a * b << endl;
    // cout << a / b << endl;
    // cout << a % b << endl;

    // ! relational operators -> ==, !=, >, <, >=, <=
    // cout << (a == b) << endl;
    // cout << (a != b) << endl;
    // cout << (a > b) << endl;
    // cout << (a < b) << endl;
    // cout << (a >= b) << endl;
    // cout << (a <= b) << endl;

    // ! assignment operators -> =, +=, -=, *=, /=, %=
    int a = 5;
    a += 2;
    cout << a << endl;
    a -= 2;
    cout << a << endl;
    a *= 2;
    cout << a << endl;
    a /= 2;
    cout << a << endl;
    a %= 2;
    cout << a << endl;

    // logical operators -> &&, ||, !
    // int value = 5;
    // cout << (value > 0 && value < 10) << endl;
    // cout << (value > 0 || value < 10) << endl;
    // cout << !(value > 0) << endl;

    // bitwise operators -> &, |, ^, ~, <<, >>
    // int a = 5; // 101
    // int b = 2; // 010

    // cout << (a & b) << endl; // 000
    // cout << (a | b) << endl; // 111
    // cout << (a ^ b) << endl; // 111
    // cout << (~a) << endl; // 11111111111111111111111111111010
    // cout << (a << 1) << endl; // 1010
    // cout << (a >> 1) << endl; // 10

    // conditional operators -> ?:
    // int a = 5;
    // int b = 2;
    // cout << ((a > b) ? a : b) << endl;

    // sizeof operator
    // int a = 5;
    // cout << sizeof(a) << endl;

    // comma operator
    // int a = 5, b = 2;
    // cout << a << " " << b << endl;

    // typecast operator
    // int a = 5;
    // cout << (float)a << endl;

    return 0;
}