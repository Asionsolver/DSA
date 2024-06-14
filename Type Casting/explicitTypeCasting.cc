#include <iostream>
using namespace std;

int main()
{
    // int num1 = 10;
    // float num2 = 5.5;
    // float result1 = num1 + (int)num2;
    // cout << "Explicit Type Casting: " << result1 << endl;

    // ! Double to int
    double pi = 3.14159265;
    int intPi = (int)pi;
    cout << "Integer: " << intPi << endl;

    // ! Float to char
    float num = 65.5;
    char charValue = (char)num;
    cout << "Char: " << charValue << endl;

    // ! int to float
    int a = 10;
    int b = 3.9;
    float d = a / b;
    cout << "Integer: " << d << endl;
    float c = ((float)a) / ((float)b);
    cout << "Float: " << c << endl;
    return 0;
}

// ! Always you know this three point
// 1. int/int = int
// 2. int/float = float
// 3. float/int = float