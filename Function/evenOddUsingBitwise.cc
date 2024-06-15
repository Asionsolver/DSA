// ! Check Even or Odd using bitwise operator.

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter any integer number: ";
    cin >> n;

    if ((n & 1) == 0)
    {
        cout << n << " is Even number.";
    }
    else
    {
        cout << n << " is Odd number.";
    }

    return 0;
}