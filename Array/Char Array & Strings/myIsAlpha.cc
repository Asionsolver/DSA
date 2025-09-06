// Program to check if a character is an alphabet using custom function

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool myIsAlpha(char c)
{
    return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

int main()
{
    cout << myIsAlpha('a') << endl; // 1 (true)
    cout << myIsAlpha('Z') << endl; // 1 (true)
    cout << myIsAlpha('!') << endl; // 0 (false)

    return 0;
}