// 819. Most Common Word
#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream>
#include <unordered_set>
#include <cctype>
using namespace std;

// Helper function: lowercase + punctuation remove
string cleanWord(string s)
{
    string res;
    for (char c : s)
    {
        // keep only letters
        if (isalpha(c))
        {
            res.push_back(tolower(c)); // convert to lowercase
        }
    }
    return res;
}

string mostCommonWord(string paragraph, vector<string> &banned)
{
    // Step 0: punctuation replace by space
    for (char &c : paragraph)
    {
        if (!isalpha(c))
            c = ' '; // punctuation/comma/space সব replace by space
    }
    stringstream ss(paragraph);
    string temp;
    vector<string> store;

    // Created banned word set (for fast lookup)
    unordered_set<string> bannedSet(banned.begin(), banned.end());

    // Extract words from paragraph
    while (ss >> temp)
    {
        string word = cleanWord(temp);
        if (!word.empty())
        {
            store.push_back(word);
        }
    }

    // Sort and count consecutive occurrences
    sort(store.begin(), store.end());

    int maxCount = 1, count = 1;
    string ans;

    for (int i = 1; i < store.size(); i++)
    {

        if (store[i] == store[i - 1])
        {
            count++;
        }
        else
        {
            count = 1;
        }

        // consider frequency if not banned
        if (count > maxCount && !bannedSet.count(store[i]))
        {
            maxCount = count;
            ans = store[i];
        }
    }

    // if the most frequent word appears at store[0]
    if (ans.empty())
    {
        for (string &w : store)
        {
            if (!bannedSet.count(w))
            {
                ans = w;
                break;
            }
        }
    }

    return ans;
}

int main()
{
    // string str = "Bob hit a ball, the hit BALL flew far after it was hit.";
    // vector<string> banned = {"hit"};

    string str = "a, a, a, a, b,b,b,c, c";
    vector<string> banned = {"a"};
    string result = mostCommonWord(str, banned);
    cout << result << endl;
    return 0;
}