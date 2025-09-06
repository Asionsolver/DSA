//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<string> mySplit(string s)
{
    vector<string> result;
    string word;

    for (char c : s)
    {
        if (c == ' ')
        {
            // found space - word ends
            if (!word.empty())
            {
                result.push_back(word);
                word.clear();
            }
        }
        else
        {
            word.push_back(c); // continue building word
        }
    }

    // need to push the last word
    if (!word.empty())
    {
        result.push_back(word);
    }

    return result;
}

int main()
{
    string str = "hello world this is test";
    vector<string> words = mySplit(str);

    for (string w : words)
    {
        cout << w << endl;
    }
    return 0;
}