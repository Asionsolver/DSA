// ! 680. Valid Palindrome II

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool checkPalindrome(string s, int i, int j)
{
    while (i <= j)
    {
        if (s[i] != s[j])
        {
            return false;
        }
        else
        {
            i++;
            j--;
        }
    }
    return true;
}

bool validPalindrome(string s)
{
    int i = 0;
    int j = s.length() - 1;
    while (i <= j)
    {
        if (s[i] != s[j])
        {
            // remove i and remove j
            return checkPalindrome(s, i + 1, j) || checkPalindrome(s, i, j - 1);
        }
        else
        {
            i++;
            j--;
        }
    }
    return true;
}

int main()
{
    string s = "abddc";
    if (validPalindrome(s) == 1)
    {
        cout << "This string is Valid Palindrome" << endl;
    }
    else
    {
        cout << "This string is not Valid Palindrome" << endl;
    }

    return 0;
}