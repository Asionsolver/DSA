#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int a = 7;
    int b = 17;

    int *c = &b;
    *c = 7;

    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    return 0;
}