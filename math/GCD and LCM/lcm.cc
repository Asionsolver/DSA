#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int gcd(int a, int b)
{
    if (a == 0)
    {
        return b;
    }
    if (b == 0)
    {
        return a;
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

    return a == 0 ? b : a;
}
int main()
{
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    int result = gcd(a, b);

    cout << "This two number Greatest Common Divisor is " << result << endl;

    int lcm = (a * b) / result;

    cout << "This two number Least Common Multiple is " << lcm << endl;

    return 0;
}