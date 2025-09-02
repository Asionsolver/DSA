// Input a string of length n and count all the vowels in the given string.

#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    string s = "ashis";

    int count = 0;
    int i = 0;
    while (s[i] != '\0')
    {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
        {
            count++;
        }
        i++;
    }

    cout << "Total Vowel: " << count << endl;

    return 0;
}