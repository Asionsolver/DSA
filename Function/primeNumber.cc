#include <iostream>
using namespace std;

bool primeNumber(int n)
{
    for (int i = 2; i < n; i++)
    {
        if (n % 2 == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;

    bool result = primeNumber(n);
    if (result == true)
    {
        cout << n << " is Prime number.";
    }
    else
    {
        cout << n << " is not Prime number";
    }

    return 0;
}