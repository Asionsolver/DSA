#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// void util(int *p)
// {
//     cout << endl;
//     cout << "Inside fuction" << endl;
// p = p + 1;
// cout << "p = p + 1: " << p << endl;

//     *p = *p + 1;
//     cout << "*p = *p + 1: " << *p << endl;
//     cout << "Inside fuction" << endl;
//     cout << endl;
// }

// void solve(int **q)
// {
// cout << "Inside fuction" << endl;
// q = q + 1;
// cout << "q = q + 1: " << q << endl;
// *q = *q + 1;
// cout << "*q = *q + 1: " << *q << endl;
// **q = **q + 1;
// cout << "**q = **q + 1: " << **q << endl;
// cout << "Inside fuction" << endl;
// }

int main()
{

    // int a = 5;

    // int *p = &a;
    // int **q = &p;

    // cout << "&a : " << &a << endl; // address of a (0x7ffd3858c034)
    // cout << "a : " << a << endl;   // print a value

    // cout << "p : " << p << endl;  // point a address (0x7ffd3858c034)
    // cout << "*p: " << *p << endl; // point a address pointer so print a value
    // cout << "&p: " << &p << endl; // print p address (0x7ffd3858c038)

    // cout << "q : " << q << endl;    // point p pointer address (0x7ffd3858c038)
    // cout << "*q: " << *q << endl;   // print *p pointer value. Means print a address (0x7ffd3858c034)
    // cout << "**q: " << **q << endl; // point first p address then p point a address pointer so print a value
    // cout << "&q: " << &q << endl;   // print q address (0x7ffd3858c040)

    // cout << "Before calling function:" << endl;
    // cout << "a: " << a << endl;
    // cout << "p: " << p << endl;
    // cout << "*p: " << *p << endl;
    // cout << "&p: " << &p << endl;
    // cout << "Before calling function:" << endl;

    // util(p);

    // cout << "After calling function:" << endl;
    // cout << "a: " << a << endl;
    // cout << "p: " << p << endl;
    // cout << "*p: " << *p << endl;
    // cout << "&p: " << &p << endl;
    // cout << "After calling function:" << endl;

    // int x = 5;
    // int *p = &x;
    // int **q = &p;

    // cout << "Before calling function:" << endl;
    // cout << "x: " << x << endl;     // 5
    // cout << "p: " << p << endl;     // address of x: 0x7ffebf7b3bdc
    // cout << "*p: " << *p << endl;   // 5
    // cout << "&p: " << &p << endl;   // address of p: 0x7ffebf7b3bd0
    // cout << "q: " << q << endl;     // address of p: 0x7ffebf7b3bd0
    // cout << "*q: " << *q << endl;   // address of x: 0x7ffebf7b3bdc
    // cout << "**q: " << **q << endl; // 5
    // cout << "&q: " << &q << endl;   // address of q: 0x7ffebf7b3bd8
    // cout << "Before calling function:" << endl;
    // cout << endl;

    // solve(q);

    // cout << endl;
    // cout << "After calling function:" << endl;
    // cout << "x: " << x << endl;
    // cout << "p: " << p << endl;
    // cout << "*p: " << *p << endl;
    // cout << "&p: " << &p << endl;
    // cout << "q: " << q << endl;
    // cout << "*q: " << *q << endl;
    // cout << "**q: " << **q << endl;
    // cout << "&q: " << &q << endl;
    // cout << "After calling function:" << endl;

    return 0;
}