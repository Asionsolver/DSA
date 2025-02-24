#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    float f = 10.5;
    float p = 2.5;

    float *ptr = &f;

    (*ptr)++;
    *ptr = p;

    cout << "*ptr: " << *ptr << endl;
    cout << "f: " << f << endl;

    return 0;
}