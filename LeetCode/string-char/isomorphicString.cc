// 205. Isomorphic Strings

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// bool isIsomorphic(string s, string t)
// {
//     if (s.length() != t.length())
//     {
//         return false;
//     }

//     vector<int> flag(150, 1000);

//     return true;
// }

bool isIsomorphic(string s, string t)
{
    if (s.length() != t.length())
    {
        return false;
    }

    vector<int> flag(150, 1000);

    // focusing s perspective
    for (int i = 0; i < s.size(); i++)
    {
        int index = (int)s[i];
        if (flag[index] == 1000)
        {
            flag[index] = s[i] - t[i];
        }
        else if (flag[index] != (s[i] - t[i]))
        {
            return false;
        }
    }

    for (int i = 0; i < 150; i++)
    {
        flag[i] = 1000;
    }

    // focusing t perspective
    for (int i = 0; i < t.size(); i++)
    {
        int index = (int)t[i];
        if (flag[index] == 1000)
        {
            flag[index] = t[i] - s[i];
        }
        else if (flag[index] != (t[i] - s[i]))
        {
            return false;
        }
    }
    return true;
}
int main()
{

    // string s = "egg";
    // string t = "add";

    // string s = "foo";
    // string t = "bar";

    // string s = "badc";
    // string t = "baba";

    string s = "pat";
    string t = "tap";

    // string s = "paper";
    // string t = "title";

    if (isIsomorphic(s, t))
    {
        cout << "'" << s << "'" << "and" << "'" << t << "'" << "are isomorphic string." << endl;
    }
    else
    {
        cout << "'" << s << "'" << "and" << "'" << t << "'" << "are not isomorphic string." << endl;
    }

    return 0;
}