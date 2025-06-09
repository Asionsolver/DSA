#include <iostream>
using namespace std;

int main()
{
    int n = 10; // normal integer variable
    int &k = n; // nickname of n. Officially its called reference variable

    int &i = n; // nickname of n. Officially its called reference variable

    int &j = n; // nickname of n. Officially its called reference variable.

    cout << "n: " << n << endl;
    cout << "&k: " << k << endl;
    cout << "&i: " << i << endl;
    cout << "&j: " << j << endl;

    cout << endl;

    k++;
    cout << "after k++" << endl;
    cout << "n: " << n << endl;
    cout << "&k: " << k << endl;
    cout << "&i: " << i << endl;
    cout << "&j: " << j << endl;

    return 0;
}