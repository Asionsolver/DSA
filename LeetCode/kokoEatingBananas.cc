// Question: Koko Eating Bananas
// LeetCode: 875

#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

bool check(int mid, int piles[], int hours, int size)
{
    // int noOfHours = 0;
    long long noOfHours = 0;

    for (int i = 0; i < size; i++)
    {
        // ! solution 01:
        // if (noOfHours > hours)
        // {
        //     return false;
        // }
        if (mid >= piles[i])
        {
            noOfHours++;
        }
        else if (piles[i] % mid == 0)
        {
            noOfHours += (long long)piles[i] / mid;
        }
        else
        {
            noOfHours += (long long)piles[i] / mid + 1;
        }
    }
    if (noOfHours > (long long)hours)
    {
        return false;
    }
    else
    {
        return true;
    }
}

int kokoEatingBanana(int piles[], int hours, int size)
{
    int max = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if (max < piles[i])
        {
            max = piles[i];
        }
    }

    int low = 1;
    int high = max;

    int minBananas = -1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (check(mid, piles, hours, size))
        {
            minBananas = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return minBananas;
}

int main()
{
    // int piles[] = {3, 6, 7, 11};
    // int hours = 8;
    int piles[] = {30, 11, 23, 4, 20};
    int hours = 5;
    // int piles[] = {30,11,23,4,20};
    // int hours = 6;
    int size = sizeof(piles) / sizeof(piles[0]);
    cout << "Koko Eating Bananas: " << kokoEatingBanana(piles, hours, size);
    return 0;
}