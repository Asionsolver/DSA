#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void changeSign(int *p)
{
    *p = *p * -1;
}

int main()
{

    int a = 10;
    changeSign(&a);
    cout << a << endl;

    return 0;
}