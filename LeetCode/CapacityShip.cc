// Question: Capacity To Ship Packages Within D Days
// LeetCode: 1011

#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

bool check(int mid, int weights[], int days, int size)
{
    // 3,2,2,4,1,4      days = 3         mid =

    int m = mid;
    int noOfDay = 1;

    for (int i = 0; i < size; i++)
    {
        if (m >= weights[i])
        {
            m -= weights[i];
        }
        else
        {
            noOfDay++;
            m = mid;
            m -= weights[i];
        }
    }
    if (noOfDay > days)
    {
        return false;
    }
    else
    {
        return true;
    }
}

int bsShipPackages(int weights[], int days, int size)
{

    int max = INT_MIN;
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        if (max < weights[i])
        {
            max = weights[i];
            sum += weights[i];
        }
    }

    int low = max;
    int high = sum;

    int minCapacity = sum;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (check(mid, weights, days, size))
        {
            minCapacity = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return minCapacity;
}

int main()
{
    int weights[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    // int weights[] = {3, 2, 2, 4, 1, 4};
    int days = 5;
    int size = sizeof(weights) / sizeof(weights[0]);
    // int days = 3;
    cout << "Minimum Capacity of Ship: " << bsShipPackages(weights, days, size) << endl;
    return 0;
}