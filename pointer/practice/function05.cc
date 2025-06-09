#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void increment(int **p)
{
    **p = **p + 1;
}

int main()
{
    int num = 10;
    int *p = &num;
    increment(&p);
    cout << "num = " << num << endl;

    return 0;
}