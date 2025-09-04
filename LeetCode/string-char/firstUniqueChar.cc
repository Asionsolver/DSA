// 387. First Unique Character in a String

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int firstUniqueChar(string s)
{
    // lowercase English letters, so size 26
    vector<int> freq(26, 0);

    // First count frequency
    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        int asciiValue = (int)ch;
        freq[asciiValue - 97]++;
    }

    // Loop through string again, return index of character with freq == 1
    for (int i = 0; i < s.size(); i++)
    {
        if (freq[s[i] - 'a'] == 1)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    string s = "leetcode";
    int result = firstUniqueChar(s);
    cout << "First Unique Character index is : " << result << endl;
    return 0;
}