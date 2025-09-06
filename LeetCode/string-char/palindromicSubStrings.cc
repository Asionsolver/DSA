// 647. Palindromic Substrings

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int expandAroundIndex(string s, int left, int right)
{
    int count = 0;
    while (left >= 0 && right < s.length() && s[left] == s[right])
    {
        count++;
        left--;
        right++;
    }
    return count;
}

int countSubstrings(string s)
{
    int size = s.size();
    int totalCount = 0;
    for (int i = 0; i < size; i++)
    {
        // odd
        int oddAns = expandAroundIndex(s, i, i);
        totalCount = totalCount + oddAns;

        // even
        int evenAns = expandAroundIndex(s, i, i + 1);
        totalCount = totalCount + evenAns;
    }

    return totalCount;
}

int main()
{

    string s = "abc";
    // string s = "aaa";
    int result = countSubstrings(s);
    cout << "Palindromic Substrings: " << result << endl;
    return 0;
}