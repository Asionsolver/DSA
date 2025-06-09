#include <iostream>
#include <vector>
using namespace std;

// ! print find match character index in string element using recursion

void checkCharacter(string str, int n, char character, int index, vector<int> &ans, int &count)
{

    // base case
    if (index >= n)
    {
        return;
    }

    // processing
    if (character == str[index])
    {
        ans.push_back(index);
        count++;
    }

    // Then call nth recursive case
    checkCharacter(str, n, character, index + 1, ans, count);
}

int main()
{
    string str = "asionsolverashisasis";
    int n = str.length();
    int index = 0;
    int count = 0;
    vector<int> ans;
    char character = 'i';

    checkCharacter(str, n, character, index, ans, count);

    cout << "Printing match character index: ";
    if (ans.empty())
    {
        cout << "Not Match" << endl;
    }
    else
    {
        for (auto val : ans)
        {
            cout << (val + 1) << " ";
        }
    }

    cout << endl;
    cout << "Total " << "'" << character << "'" << ": " << count << endl;
    return 0;
}