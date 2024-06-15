#include <iostream>
using namespace std;

long long int findFactorial(long long int n)
{
    long long int factorial = 1;
    for (int i = 1; i <= n; i++)
    {
        factorial = factorial * i;
    }
    return factorial;
}

int main()
{
    int n;
    cout << "Enter any positive integer number: ";
    cin >> n;

    long long int result = findFactorial(n);
    cout << "This number factorial is " << result << endl;

    return 0;
}