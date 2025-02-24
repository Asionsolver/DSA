#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{

    int *ptr = 0;
    int a = 10;
    *ptr = a;

    cout << "*ptr " << *ptr << endl; // runtime error

    return 0;
}