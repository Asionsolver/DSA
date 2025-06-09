#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int ***r, **q, *p, i = 10;
    p = &i;
    (*p)++;
    q = &p;
    (**q)++;
    r = &q;

    cout << "*p = " << *p << endl;
    cout << "**q = " << **q << endl;
    cout << "***r = " << ***r << endl;

    return 0;
}