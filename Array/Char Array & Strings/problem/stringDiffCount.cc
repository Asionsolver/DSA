// Input a string and return the number of times the neighboring characters are different from each other.

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    // string str = "a";
    // string str = "aa";
    // string str = "ab";
    string str = "abc";
    // string str = "aab";
    // string str = "abb";
    // string str = "abbcddeffghhijjkll";
    int count = 0;
    int n = str.length();
    for (int i = 0; i < n; i++)
    {
        if (n == 1)
        {
            break;
        }
        else if (n == 2 && str[0] != str[1])
        {
            count = 1;
            break;
        }

        else if (i == 0)
        {
            if (str[i] != str[i + 1])
            {
                count++;
            }
        }
        else if (i == n - 1)
        {
            if (str[i] != str[i - 1])
            {
                count++;
            }
        }

        else if (str[i] != str[i + 1] && str[i] != str[i - 1])
        {

            count++;
        }
    }
    cout << "Total neighboring characters: " << count << endl;

    return 0;
}