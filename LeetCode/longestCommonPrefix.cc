// 14. Longest Common Prefix

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
string longestCommonPrefix(vector<string> &strs)
{
    int size = strs.size();
    sort(strs.begin(), strs.end());
    string start = strs[0];
    string end = strs[size - 1];

    if (size == 1)
    {
        return strs[0];
    }
    string result = "";
    for (int i = 0; i < (min(start.size(), end.size())); i++)
    {
        if (start[i] == end[i])
        {
            result += start[i];
        }
        else
        {
            return result;
        }
    }
    return result;
}
int main()
{
    // vector<string> strs = {"flower", "flow", "flight"};
    // vector<string> strs = {"dog", "racecar", "car"};
    vector<string> strs = {"dog"};
    string result = longestCommonPrefix(strs);
    cout << "Longest Common Prefix: " << result << endl;
    return 0;
}