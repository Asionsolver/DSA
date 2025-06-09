#include <iostream>
using namespace std;

void passByRef(int &n)
{
    n = n + 1;
}

int main()
{
    int n;
    cout << "n: ";
    cin >> n;

    cout << "n: " << n << endl;

    passByRef(n);
    cout << "After pass by reference n: " << n << endl;

    // cout << "When not store pass by value n: " << n << endl;

    return 0;
}