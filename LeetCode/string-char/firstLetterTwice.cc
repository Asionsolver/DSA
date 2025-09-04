// 2351. First Letter to Appear Twice
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

char repeatedCharacter(string s)
{
    vector<bool> seen(26, false); // flag for all characters
    for (char c : s)
    {
        if (seen[c - 'a'])
        {
            return c; // if seen before, this is the answer
        }
        seen[c - 'a'] = true; // Mark when seen for the first time
    }
    return ' '; // won't come here, because problem states there is at least 1 repeat
}

int main()
{
    // string s = "nwcn";
    string s = "abccbaacz";
    char character = repeatedCharacter(s);
    cout << "First Letter to Appear Twice is " << "'" << character << "'" << endl;

    return 0;
}