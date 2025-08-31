// Given a sorted integer array and an integer "x", find the lower bound

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int lowerBound(vector<int> nums, int target)
{
    int start = 0;
    int end = nums.size() - 1;
    int mid = start + (end - start) / 2;
    bool flag = false;
    while (start <= end)
    {
        if (nums[mid] == target)
        {
            flag = true;
            return mid;
            break;
        }
        else if (nums[mid] > target)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }

        mid = start + (end - start) / 2;
    }
    if (flag == false)
    {

        return nums[end];
    }

    return -1;
}
int main()
{
    vector<int> nums = {1, 3, 4, 5, 9, 15, 18, 21, 24};
    int target = 2;
    int result = lowerBound(nums, target);
    cout << "Lower Bound is: " << result << endl;
    return 0;
}