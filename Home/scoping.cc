#include <iostream>
using namespace std;

int main()
{
    // Variable Scoping
    // 1. Local Scope
    // 2. Global Scope

    // Local Scope
    for (int i = 0; i < 5; i++)
    {
        cout << "Local Scope: " << i << endl;
    }

    // cout << i << endl; // Error: i is not defined. It is out of scope.

    // Global Scope
    int j = 0;
    for (; j < 5; j++)
    {
        cout << "Global Scope: " << j << endl;
    }

    cout << "Global Scope: " << j << endl; // It will print 5. j is in scope.

    return 0;
}