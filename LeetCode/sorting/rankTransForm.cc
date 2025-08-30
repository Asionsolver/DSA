// 1331. Rank Transform of an Array

#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

int main()
{
    vector<int> arr = {37, 12, 28, 9, 100, 56, 80, 5, 12};

    cout << "Before Rank Transform: ";
    for (auto x : arr)
        cout << x << " ";
    cout << endl;

    // Step 1: Copy & Sort
    vector<int> sortedArr = arr;
    sort(sortedArr.begin(), sortedArr.end());

    // Step 2: Map unique values to rank
    unordered_map<int, int> rankMap;
    int rank = 1;
    for (int i = 0; i < sortedArr.size(); i++)
    {
        int val = sortedArr[i];
        if (rankMap.find(val) == rankMap.end())
        {
            rankMap[val] = rank;
            rank++;
        }
    }

    // Step 3: Replace arr with ranks
    for (int i = 0; i < arr.size(); i++)
    {
        arr[i] = rankMap[arr[i]];
    }

    cout << "After Rank Transform: ";
    for (auto x : arr)
        cout << x << " ";
    cout << endl;

    return 0;
}
