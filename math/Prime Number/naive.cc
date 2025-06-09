// ! Print all prime number 1 to N.

#include <iostream>
using namespace std;

// void printAllPrime(int n)
// {
//     for (int i = 2; i <= n; i++)
//     {
//         if (i % 2 != 0)
//         {
//             cout << i << " is Prime number.";
//         }
//     }
// }

bool printAllPrime(int n)
{
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int n;
    cout << "Enter any positive integer number: ";
    cin >> n;

    cout << "The prime number is ";
    for (int i = 2; i <= n; i++)
    {
        bool prime = printAllPrime(i);
        if (prime)
        {
            cout << i << " ";
        }
    }
    return 0;
}