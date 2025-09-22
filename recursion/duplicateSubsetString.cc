#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// store subset
void storeSubset(string ans, string original, vector<string> &store, bool flag)
{
    if (original == "")
    {

        store.push_back(ans);
        return;
    }
    char first = original[0];
    if (original.length() == 1)
    {
        if (flag == true)
            storeSubset(ans + first, original.substr(1), store, true);
        storeSubset(ans, original.substr(1), store, true);
        return; // prevents execution of subsequent code when original string length is 1
    }
    char second = original[1];

    if (first == second)
    {
        if (flag == true)
            storeSubset(ans + first, original.substr(1), store, true);
        storeSubset(ans, original.substr(1), store, false);
    }
    else
    {
        if (flag == true)
            storeSubset(ans + first, original.substr(1), store, true);
        storeSubset(ans, original.substr(1), store, true);
    }
}

int main()
{
    string str = "aaac";
    vector<string> store;
    storeSubset("", str, store, true);

    for (auto element : store)
    {
        cout << "[" << element << "]" << endl;
    }
    return 0;
}