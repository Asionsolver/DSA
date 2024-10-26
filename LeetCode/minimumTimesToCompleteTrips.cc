// Question: Minimum Time to Complete Trips
// LeetCode: 2187

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool check(long long mid, long long times[], long long totalTrip, long long size)
{
    long long trips = 0;
    for (int i = 0; i < size; i++)
    {
        trips += mid / times[i];
        if (trips >= totalTrip) // Check if trips are sufficient
        {
            return true;
        }
    }
    return false; // Return false if trips are not sufficient
}

long long minimumTime(long long times[], long long totalTrip, long long size)
{
    // 3 3 3
    // totalTrip = 5
    // after 3 hour [1 1 1] = 3
    // after 6 hour [2 2 2] = 6
    long long start = 1;
    long long mx = 0;
    for (long long i = 0; i < size; i++)
    {
        mx = max(mx, times[i]);
    }
    long long end = mx * totalTrip;
    long long result = -1;
    while (start <= end)
    {
        long long mid = start + (end - start) / 2;
        if (check(mid, times, totalTrip, size))
        {
            result = mid;
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return result;
}

int main()
{
    long long times[] = {1, 2, 3};
    long long totalTrip = 5;
    // long long times[] = {9, 7, 10, 9, 10, 9, 10};
    // long long totalTrip = 1;
    long long size = sizeof(times) / sizeof(times[0]);
    cout << "The minimum time needed for all buses to complete at least " << totalTrip << " trips is " << minimumTime(times, totalTrip, size);
    return 0;
}