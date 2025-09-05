// Given a sentence 'str', return the word that is occurring most number of times in that sentence.
#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream>
using namespace std;

int main()
{
    string str = "He is a good teacher is not good english is good for math";
    stringstream ss(str);
    string temp;
    vector<string> store;

    while (ss >> temp)
    {
        store.push_back(temp);
    }

    sort(store.begin(), store.end());

    // for (auto element : store)
    // {
    //     cout << element << endl;
    // }

    int maxCount = 1;
    int count = 1;
    for (int i = 0; i < store.size(); i++)
    {
        if (store[i] == store[i - 1])
        {
            count++;
        }
        else
        {
            count = 1;
        }
        maxCount = max(maxCount, count);
    }

    count = 1;
    for (int i = 0; i < store.size(); i++)
    {
        if (store[i] == store[i - 1])
        {
            count++;
        }
        else
        {
            count = 1;
        }
        if (count == maxCount)
        {
            cout << store[i] << " " << maxCount << endl;
        }
    }

    return 0;
}