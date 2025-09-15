#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// not optimize way because its use extra space
// void removeChar(string ans, string original)
// {
//     if (original.length() == 0)
//     {
//         cout << ans;
//         return;
//     }

//     char ch = original[0];

//     if (ch == 'a')
//     {
//         removeChar(ans, original.substr(1));
//     }
//     else
//     {
//         removeChar(ans + ch, original.substr(1));
//     }
// }

// this is optimize way because its not use extra space
void removeChar(string ans, string original, int idx)
{
    if (original.length() == idx)
    {
        cout << ans;
        return;
    }

    char ch = original[idx];

    if (ch == 'a')
    {
        removeChar(ans, original, idx + 1);
    }
    else
    {
        removeChar(ans + ch, original, idx + 1);
    }
}

int main()
{
    string str = "physic wallah";
    removeChar("", str, 0);
    cout << endl;
    return 0;
}
