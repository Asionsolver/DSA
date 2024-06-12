#include <iostream>
#include <cmath>
using namespace std;

// Bitwise method pseudo code
// 1. Multiple each digit with its place value.
// 2. Add up all place values.
// 3. Sum is the decimal number.

int binaryToDecimal(int n)
{
    int decimal = 0;
    int i = 0;
    while (n)
    {
        int bit = n % 10;
        decimal = decimal + bit * pow(2, i);
        i++;
        n = n / 10;
    }
    return decimal;
}

int main()
{
    int n;
    cout << "Enter the binary number: ";
    cin >> n;

    int result = binaryToDecimal(n);
    cout << "\nThe decimal equivalent is: " << result << endl;

    return 0;
}