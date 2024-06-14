#include <iostream>
using namespace std;

int main()
{
    // Implicit Type Casting Examples
    // int num1 = 10;
    // float num2 = 5.5;

    // float result1 = num1 + num2; // Implicit conversion of num1 from int to float
    // int result2 = num1 + num2;
    // cout << "Float: " << result1 << endl;
    // cout << "Integer: " << result2 << endl;

    // char ch = 'A';
    // int a = ch + 1;
    // char result3 = ch + a;
    // cout << "Integer: " << a << endl;    // Implicit conversion from chat to int
    // cout << "Char: " << result3 << endl; // Implicit conversion from int to char

    // char ch = 'A';
    // char a = ch + 1;
    // cout << "Char: " << a << endl; // Implicit conversion from int to char

    int a = 97;
    char ch = a;
    cout << "Char: " << ch << endl; // Implicit conversion from int to char

    return 0;
}