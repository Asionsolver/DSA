#include <iostream>
#include <cmath>
using namespace std;

// Bitwise method pseudo code
// 1. Obtain bit with bitwise AND operation i.e., (N & 1)
// 2. Shift the number to the right by 1 bit i.e., (N >> 1)
// 3. Repeat the above steps until the number becomes 0 i.e., (N > 0)
// 4. Reverse the bits so obtained

int decimalToBinary(int n)
{
    // Bitwise method
    int binary = 0;
    int i = 0;
    while (n > 0)
    {
        int bit = (n & 1);
        binary = bit * pow(10, i) + binary;
        i++;
        n = n >> 1;
    }
    return binary;
}

int main()
{
    int n;
    cout << "Enter the decimal number: ";
    cin >> n;
    int binary = decimalToBinary(n);
    cout << "\nThe binary equivalent is: " << binary << endl;
    return 0;
}