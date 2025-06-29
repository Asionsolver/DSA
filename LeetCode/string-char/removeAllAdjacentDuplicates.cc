// ! 1047. Remove All Adjacent Duplicates In String(Leet Code)

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

string removeAllAdjacent(string str)
{
    string ans = "";
    int i = 0;

    while (i < str.length())
    {
        if (ans.length() > 0)
        {
            if (ans[ans.length() - 1] == str[i])
            {
                ans.pop_back();
            }
            else
            {
                ans.push_back(str[i]);
            }
        }
        else
        {
            ans.push_back(str[i]);
        }
        i++;
    }

    return ans;
}

int main()
{
    string str = "azxxzy";
    cout << removeAllAdjacent(str) << endl;

    return 0;
}

// O(n)