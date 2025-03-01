#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// ! Subsequences of a string

void printSubsequences(string str, string output, int start, vector<string> &print)
{
    // base case
    if (start >= str.length())
    {
        // cout << output << endl;
        print.push_back(output);
        return;
    }

    // exclude logic
    printSubsequences(str, output, start + 1, print);

    output.push_back(str[start]);

    printSubsequences(str, output, start + 1, print);
}

int main()
{

    string str = "abcd";
    string output = "";
    vector<string> print;
    int start = 0;

    printSubsequences(str, output, start, print);

    for (auto value : print)
    {
        cout << value << " ";
    }

    cout << endl
         << "Size of vector is: " << print.size() << endl;

    return 0;
}