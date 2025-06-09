#include <iostream>
using namespace std;

int main()
{
    // bitwise operators -> &, |, ^, ~, <<, >>
    // int a = 5; // 101
    // int b = 2; // 010
    // int n = 1;
    // bool c = 1;

    // cout << (a & b) << endl; // 000
    // cout << (a | b) << endl; // 111
    // cout << (a ^ b) << endl; // 111
    // cout << ~n << endl;      //-2
    // cout << (~n) << endl;    //-2
    // cout << ~(n) << endl;    //-2
    // cout << ~c << endl;   //-2
    // cout << (~c) << endl; //-2
    // cout << ~(c) << endl; //-2

    // int x = 5;               // 101
    // int y = 7;               // 111
    // cout << (x ^ y) << endl; // 010

    // int x1 = 5;  // 101
    // int y1 = -7; // 111
    // cout << (x1 ^ y1) << endl;

    // int leftShift = 5;                // 101
    // cout << (leftShift << 1) << endl; // 1010
    // // cout << (leftShift << 2) << endl; // 10100
    // // cout << (leftShift << 3) << endl; // 101000

    // int rightShift = 5;                // 101
    // cout << (rightShift >> 1) << endl; // 10
    // cout << (rightShift >> 2) << endl; // 1

    // int rightShiftNegative = -5;               // 101
    // cout << (rightShiftNegative >> 1) << endl; // 110

    // unsigned int rightShiftUnsigned = -100;
    // cout << (rightShiftUnsigned >> 1) << endl;

    int a = 5;
    cout << (a << -1) << endl;
    return 0;
}