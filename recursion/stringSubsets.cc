

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// only print subset but not store
// void printSubset(string ans, string original)
// {
//     if (original == "")
//     {
//         cout << ans << endl;
//         return;
//     }
//     char first = original[0];
//     printSubset(ans + first, original.substr(1));
//     printSubset(ans, original.substr(1));
// }

// store subset
void storeSubset(string ans, string original, vector<string> &store)
{
    if (original == "")
    {
        // if (ans == "")
        // {
        //     store.push_back("[]");
        // }
        // else
        store.push_back(ans);
        return;
    }
    char first = original[0];
    storeSubset(ans + first, original.substr(1), store);
    storeSubset(ans, original.substr(1), store);
}

int main()
{
    string str = "abc";
    vector<string> store;
    // printSubset("", str);
    storeSubset("", str, store);

    for (auto element : store)
    {
        cout << "[" << element << "]" << endl;
    }

    // cout << endl;
    return 0;
}