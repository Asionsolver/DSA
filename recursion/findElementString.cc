#include <iostream>
using namespace std;

// ! print find character in string element using recursion

bool checkCharacter(string str, int n, char character, int index)
{

    // base case
    if (index >= n)
    {
        return false;
    }

    // processing
    if (character == str[index])
    {
        return true;
    }

    // Then call nth recursive case
    return checkCharacter(str, n - 1, character, index + 1);
}

int main()
{
    string str = "asionsolver";
    int n = str.length();
    int index = 0;

    char character = 'a';

    bool result = checkCharacter(str, n, character, index);

    if (result)
    {
        cout << "Your character is exits." << endl;
    }
    else
    {
        cout << "Your character is not exits." << endl;
    }

    return 0;
}