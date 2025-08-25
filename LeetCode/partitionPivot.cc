#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
// Custom comparator for descending order
bool comp(int a, int b)
{
    return a > b;
}
int main()
{
    vector<int> nums{3, 5, 6, 18, 3, 4, 12, 1, 10, 14, 9, 10};
    int size = nums.size();
    int pivot = 10;
    vector<int> lessPivot;
    int less = 0;
    vector<int> highPivot;
    int high = 0;
    vector<int> equalPivot;
    int equal = 0;
    vector<int> result;

    for (int i = 0; i < size; i++)
    {
        if (pivot > nums[i])
        {
            lessPivot.push_back(nums[i]);
            less++;
        }
        else if (pivot == nums[i])
        {
            equalPivot.push_back(nums[i]);
            equal++;
        }
        else
        {
            highPivot.push_back(nums[i]);
            high++;
        }
    }

    result.insert(result.begin(), highPivot.begin(), highPivot.end());
    result.insert(result.begin(), equalPivot.begin(), equalPivot.end());
    result.insert(result.begin(), lessPivot.begin(), lessPivot.end());

    // print lessPivot
    for (int v : result)
        cout << v << " ";
    cout << endl;

    return 0;
}