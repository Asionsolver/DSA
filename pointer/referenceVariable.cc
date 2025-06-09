#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
// same memory location different name is called reference variable
// void solve(int &a)
// {

//     a++;
// }

// void solve2(int value)
// {
//     value++;
// }

void solve(int *&p)
{
    p = p + 1;
}
int main()
{
    // int a = 5;

    // creating a reference variable
    // int &b = a;

    // cout << "a: " << a << endl;
    // cout << "b: " << b << endl;

    // a++;
    // cout << "a: " << a << endl;
    // cout << "b: " << b << endl;

    // b++;
    // cout << "a: " << a << endl;
    // cout << "b: " << b << endl;

    // cout << "Before calling solve function" << endl;
    // cout << "a: " << a << endl;
    // cout << "Before calling solve function" << endl;

    // solve(a);
    // cout << "After calling solve function" << endl;
    // cout << "a: " << a << endl;
    // cout << "After calling solve function" << endl;

    // cout << "Before calling solve2 function" << endl;
    // cout << "a: " << a << endl;
    // cout << "Before calling solve2 function" << endl;

    // solve2(a);

    // cout << "After calling solve2 function" << endl;
    // cout << "a: " << a << endl;
    // cout << "After calling solve2 function" << endl;

    int a = 5;
    int *p = &a;

    cout << "Before calling solve function" << endl;

    cout << "p: " << p << endl;

    cout << "Before calling solve function" << endl;

    solve(p);

    cout << "After calling solve function" << endl;

    cout << "p: " << p << endl;

    cout << "After calling solve function" << endl;
    return 0;
}