// 242. Valid Anagram

#include <iostream>
#include <algorithm>

using namespace std;

int main()
{

    string s = "ashis";
    string t = "sshia";
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());

    if (s == t)
    {
        cout << "This is anagram." << endl;
    }
    else
    {

        cout << "This is not anagram." << endl;
    }

    return 0;
}