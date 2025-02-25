#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int factorial(int n)
{

    cout << "Calculating factorial of " << n << endl;

    // ! Base condition
    if (n == 0)
    {
        return 1;
    }

    // ! Recursive relation or recursive call
    int smallOutput = factorial(n - 1);
    int bigOutput = n * smallOutput;
    return bigOutput;
}

int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;

    int ans = factorial(n);
    cout << "Factorial of " << n << " is: " << ans << endl;

    return 0;
}