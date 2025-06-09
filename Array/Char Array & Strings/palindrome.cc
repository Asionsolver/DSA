#include <iostream>
#include <string.h>
using namespace std;

bool isPalindrome(char name[])
{
    int i = 0;
    int size = strlen(name);
    int j = size - 1;
    while (i <= j)
    {
        if (name[i] != name[j])
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

int main()
{
    char name[] = "racecar";
    if (isPalindrome(name))
    {
        cout << name << " is palindrome word." << endl;
    }
    else
    {
        cout << name << " is not palindrome word." << endl;
    }
    // int j=(sizeof(name)/sizeof(name[0]))-1;

    return 0;
}