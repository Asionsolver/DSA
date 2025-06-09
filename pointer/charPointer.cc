#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{

    char ch = 'a';
    char *p = &ch;
    cout << p << endl;
    cout << *p << endl;
    cout << &p << endl;

    // char name[10] = "Hello";
    // cout << "Name: " << name << endl;
    // char *q = "Hello"; // ! Bad practice
    // cout << "q: " << q << endl;

    return 0;
}