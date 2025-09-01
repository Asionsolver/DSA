// 33. Search in Rotated Sorted Array

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int searchRotatedArray(vector<int> nums, int target)
{
    int start = 0;
    int size = nums.size();
    int end = size - 1;
    int mid = start + (end - start) / 2;
    int pivot = -1; // store smallest element index

    if (size == 2)
    {
        if (target == nums[0])
        {
            return 0;
        }
        else if (target == nums[1])
        {
            return 1;
        }
        else
        {
            return -1;
        }
    }

    // finding pivot element index
    while (start <= end)
    {
        // handle when array or vector size less than two
        if (mid == 0)
        {
            start = mid + 1;
        }
        // handle when array or vector size less than two
        else if (mid == size - 1)
        {
            end = mid - 1;
        }
        // when array or vector size 1 then this logic out of bound
        else if (nums[mid + 1] > nums[mid] && nums[mid - 1] > nums[mid])
        {
            pivot = mid;
            break;
        }
        // when array or vector size 1 then this logic out of bound
        else if (nums[mid + 1] < nums[mid] && nums[mid - 1] < nums[mid])
        {
            pivot = mid + 1;
            break;
        }
        else if (nums[mid] > nums[end])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }

    // when pivot -1 means this vector or array already sorted so execute normal binary search
    if (pivot == -1)
    {
        start = 0;
        end = size - 1;

        while (start <= end)
        {
            mid = start + (end - start) / 2;
            if (nums[mid] == target)
            {
                return mid;
            }
            else if (nums[mid] > target)
            {
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
        }
        return -1;
    }

    if (target >= nums[0] && target <= nums[pivot - 1])
    {

        start = 0;
        end = pivot - 1;

        while (start <= end)
        {
            mid = start + (end - start) / 2;
            if (nums[mid] == target)
            {
                return mid;
            }
            else if (nums[mid] > target)
            {
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
        }
    }
    else
    {
        start = pivot;
        end = size - 1;

        while (start <= end)
        {
            mid = start + (end - start) / 2;
            if (nums[mid] == target)
            {
                return mid;
            }
            else if (nums[mid] > target)
            {
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
        }
    }
    return -1;
}

int main()
{
    // vector<int> nums = {4, 5, 6, 7, 0, 1, 2};
    // int target = 0;

    // vector<int> nums = {4, 5, 6, 7, 0, 1, 2};
    // int target = 3;

    // vector<int> nums = {1};
    // int target = 0;
    // vector<int> nums = {1, 3};
    // int target = 0;
    vector<int> nums = {3, 1};
    int target = 1;
    int result = searchRotatedArray(nums, target);

    cout << "Rotated Sorted Element: " << result << endl;
    return 0;
}