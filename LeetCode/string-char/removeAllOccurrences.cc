// ! 1910. Remove All Occurrences of a Substring

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

string removeAllOccurrences(string s, string part)
{
    int position = s.find(part);
    while (position != std::string::npos)
    {
        s.erase(position, part.length());
        position = s.find(part);
    }

    return s;
}

int main()
{
    string s = "daabcbaabcbc";
    string part = "abc";

    cout << removeAllOccurrences(s, part) << endl;
    return 0;
}