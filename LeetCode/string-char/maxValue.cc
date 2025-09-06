// 2496. Maximum Value of a String in an Array

#include <bits/stdc++.h>
using namespace std;

bool isAllDigits(const string &s)
{
    for (char c : s)
    {
        if (!isdigit(c))
            return false;
    }
    return !s.empty(); // return false if string is empty
}

int maximumValue(vector<string> &strs)
{
    int ans = 0;
    for (auto &element : strs)
    {
        if (isAllDigits(element))
        {
            ans = max(ans, (int)stoll(element)); // convert to number
        }
        else
        {
            ans = max(ans, (int)element.size()); // if not a number, take the length
        }
    }
    return ans;
}
int main()
{
    vector<string> value = {"alic3", "bob", "3", "4", "00000"};
    int result = maximumValue(value);

    cout << "RESULT " << result << endl;
    return 0;
}