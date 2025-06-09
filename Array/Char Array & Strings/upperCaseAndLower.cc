#include <iostream>
#include <string.h>
using namespace std;

void convertUppercase(char ch[])
{
    int size = strlen(ch);
    for (int i = 0; i < size; i++)
    {
        if (ch[i] >= 'a' && ch[i] <= 'z')
        {
            ch[i] = ch[i] - 'a' + 'A';
        }
    }
}

void convertLowerCase(char ch1[])
{
    int size = strlen(ch1);
    for (int i = 0; i < size; i++)
    {
        ch1[i] = ch1[i] - 'A' + 'a';
        // if (ch1[i]>='a'&&ch1[i]<='z')
        // {

        // }
    }
}

int main()
{
    char ch[] = "Ashis";
    char ch1[] = "ASHIS";
    convertUppercase(ch);
    cout << "The UPPERCASE value is " << ch << endl;
    convertLowerCase(ch1);
    cout << "The lowercase value is " << ch1 << endl;

    return 0;
}