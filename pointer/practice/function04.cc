#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void Q(int z)
{
    z = z + z;
    cout << "z: " << z << endl;
}

void P(int *y)
{
    int x = *y + 2;
    Q(x);
    *y = x - 1;
    cout << "x: " << x << endl;
}
int main()
{
    int x = 5;
    P(&x);
    cout << "x: " << x << endl;

    return 0;
}