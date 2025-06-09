#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int *p = (arr + 1);

    cout << "*arr + 9 = " << *arr + 9 << endl;
    cout << "*p = " << *p << endl;

    return 0;
}