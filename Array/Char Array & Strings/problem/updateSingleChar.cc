// Input a string of size n and update all the even positions in the string to character 'a'. Consider 0-based indexing.

#include <iostream>

using namespace std;

int main()
{
    string s = "ashis";
    for (auto element : s)
    {
        cout << element << ' ';
    }
    cout << endl;

    for (int i = 0; s[i] != '\0'; i++)
    {
        if (i % 2 == 0)
        {
            s[i] = 'a';
        }
    }

    for (auto element : s)
    {
        cout << element << ' ';
    }
    cout << endl;

    return 0;
}