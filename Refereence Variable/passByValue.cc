#include <iostream>
using namespace std;

int passByValues(int n)
{
    n = n + 1;
    return n;
}

int main()
{
    int n;
    cout << "n: ";
    cin >> n;

    cout << "n: " << n << endl;

    // n = passByValues(n);
    cout << "After pass by value n: " << n << endl;

    cout << "When not store pass by value n: " << n << endl;

    return 0;
}