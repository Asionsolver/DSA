#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    // string str = "Hello good morning!";

    // cout << str.size() << endl;
    // cout << str.length() << endl;

    // str.push_back('H');
    // cout << str << endl;

    // string s = "asion";
    // string b = s + " solver";
    // string c = s + 'a';
    // string d = s + 84; // number not allow

    // cout << c << endl;

    // string s = "abcdef";
    // cout << s << endl;

    // reverse(s.begin(), s.end());
    // reverse(s.begin(), s.end());
    // reverse(s.begin() + 2, s.end() - 1); // or
    // reverse(s.begin() + 2, s.begin() + 5);

    // s.substr(index, length)
    // cout << s.substr(0) << endl;
    // cout << s.substr(2) << endl;
    // cout << s.substr(2, 2) << endl;

    // int x = 12324;
    // string s = to_string(x);
    // string s = "ashis";
    // string s;
    // getline(cin, s);
    // cout << s << endl;
    // sort(s.begin(), s.end());
    // cout << s << endl;

    string str = "123456";
    int x = stoi(str);
    cout << x + 1 << endl;

    int a = 123455;
    string s = to_string(a);
    cout << s << endl;

    string longs = "1234567891233";
    int xl = stoll(longs);
    cout << xl + 1 << endl;

    return 0;
}