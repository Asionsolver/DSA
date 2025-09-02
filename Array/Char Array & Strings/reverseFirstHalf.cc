// Input a string of even length and reverse the first half of the string.

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    string s;
    getline(cin, s);

    cout << s << endl;
    int length = s.length();
    // reverse first half
    reverse(s.begin(), s.begin() + length / 2);
    cout << s << endl;

    return 0;
}