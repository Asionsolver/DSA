#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void fun(int a[])
{
    cout << "a[0]: " << a[0] << endl;
}
int main()
{
    int a[5] = {1, 2, 3, 4, 5};
    fun(a + 1);
    cout << a[0] << endl;
    return 0;
}