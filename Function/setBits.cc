// ! Count all set bit of a number
#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "Enter any integer number: ";
    cin >> n;

    int k;
    cout << "Enter kth bit: ";
    cin >> k;

    int mask = 1 << k;

    int result = n | mask;
    cout << "The final result is " << result << endl;

    return 0;
}