#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
//  atexit(+[](){ofstream("display_runtime.txt") << 0 << '\n';});
int main()
{
    vector<int> arr{-2, -1, -3, 1, 2, 3};
    int size = arr.size() / 2;

    vector<int> positives(size);
    int positive = 0;
    int index;

    vector<int> negatives(size);
    int negative = 0;

    vector<int> result(arr.size());

    bool tracker = false;

    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] > 0)
        {
            positives[positive] = arr[i];
            positive++;
        }
        else
        {
            negatives[negative] = arr[i];
            negative++;
        }
    }

    for (int i = 0; i < result.size(); i++)
    {
        if (!tracker)
        {

            index = size - positive;
            result[i] = positives[index];
            tracker = true;
            positive--;
        }
        else
        {

            index = size - negative;
            result[i] = negatives[index];
            tracker = false;
            negative--;
        }
    }

    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << ", ";
    }
    cout << endl;

    return 0;
}

// ✅ Time Complexity: O(n)

// ✅ Space Complexity: O(n)