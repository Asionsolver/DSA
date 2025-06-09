#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int fib(int n)
{
    cout << "Calculating fibonacci of " << n << endl;

    // ! Base condition
    if (n == 1)
    {
        return 0;
    }
    if (n == 2)
    {
        return 1;
    }

    // ! Recursive relation or recursive call
    return fib(n - 1) + fib(n - 2);
}

int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;

    int result = fib(n);

    cout << "Fibonacci of " << n << " is: " << result << endl;

    return 0;
}