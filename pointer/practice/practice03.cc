#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int a = 7;
    int *c = &a;

    c = c + 1;

    cout << "a: " << a << endl;
    cout << "*c: " << *c << endl; // Garbage value
    return 0;
}