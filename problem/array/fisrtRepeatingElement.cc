// First Repeating Element

#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

int firstRepeatingElement(vector<int> nums)
{
    unordered_map<int, int> map;

    for (int i = 0; i < nums.size(); i++)
    {
        map[nums[i]]++;
    }

    for (int i = 0; i < nums.size(); i++)
    {
        if (map[nums[i]] > 1)
        {
            return i + 1;
        }
    }
    return -1;
}
int main()
{
    vector<int> nums = {1, 5, 3, 4, 3, 5, 6};
    int result = firstRepeatingElement(nums);
    cout << result << endl;

    return 0;
}

// T.C:O(n)
// S.C:O(n)