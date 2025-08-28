// 283. Move Zeroes

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    // int nums[] = {0, 1, 0, 3, 12};
    int nums[] = {4, 2, 4, 0, 0, 3, 0, 5, 1, 0};
    // int nums[] = {0};
    // int nums[] = {0, 1, 0};
    // int nums[] = {0, 1};
    int size = sizeof(nums) / sizeof(nums[0]);

    int zero = 0;
    int one = 1;
    while (one < size)
    {
        if (nums[zero] == 0 && nums[one] != 0)
        {
            swap(nums[zero], nums[one]);
            one++;
            zero++;
        }
        else if (nums[zero] != 0 && nums[one] == 0)
        {
            one++;
            zero++;
        }
        else if (nums[zero] != 0 && nums[one] != 0)
        {
            one++;
            zero++;
        }
        else
        {
            one++;
        }
    }

    for (auto element : nums)
    {
        cout << element << " ";
    }
    cout << endl;

    return 0;
}