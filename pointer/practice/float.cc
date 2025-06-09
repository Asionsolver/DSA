#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    float arr[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
    float *p = &arr[0];

    float *q = p + 3;

    cout << "*q: " << *q << endl;

    cout << "p: " << p << endl;
    cout << "q: " << q << endl;

    cout << "q-p: " << q - p << endl;

    return 0;
}