#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Euclidean algorithm
// GCD(a,b) = GCD(a-b,b) a>b
// GCD(a,b) = GCD(b-a,a) a<b

int main()
{
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    if (a == 0)
    {
        return a;
    }
    if (b == 0)
    {
        return b;
    }

    while (a > 0 && b > 0)
    {
        if (a > b)
        {
            a = a - b;
        }
        else
        {
            b = b - a;
        }
    }

    a == 0 ? cout << "This two number Greatest Common Divisor is " << b : cout << "This two number Greatest Common Divisor is " << a;

        return 0;
}