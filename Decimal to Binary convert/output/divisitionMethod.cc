#include <iostream>
#include <cmath>
using namespace std;

// int decimalToBinary(int n)
// {
//     // Division Method
//     while (n > 0)
//     {
//         int bit = n % 2;
//         cout << bit << ' ';
//         n = n / 2;
//     }
//     return 0;
// }

int decimalToBinaryMethodTwo(int n)
{
    // Division Method
    int binaryBit = 0;
    int i = 0;
    while (n > 0)
    {
        int bit = n % 2;
        binaryBit = binaryBit + bit * pow(10, i);
        i++;
        n = n / 2;
    }
    return binaryBit;
}

int main()
{
    int n;
    cout << "Enter the decimal number: ";
    cin >> n;

    cout << "\nBinary number is: ";
    // int binary = decimalToBinary(n);
    int binary = decimalToBinaryMethodTwo(n);
    cout << binary;
    cout << endl;

    return 0;
}