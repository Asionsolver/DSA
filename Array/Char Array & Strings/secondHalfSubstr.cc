// Input a string of even length and return the second half of that string using inbuild substr function

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    string str = "asionsolverr";
    int length = str.length();
    cout << str << endl;

    cout << str.substr(length / 2) << endl;

    return 0;
}