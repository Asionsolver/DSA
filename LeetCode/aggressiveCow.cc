// Question: Aggressive Cows
/*
You are given an array with unique elements, stalls, which denote the position of a stall. You are also given an integer k which denotes the number of aggressive cows. You are given the task of assigning stalls to k cows such that the is the maximum possible.

Examples :

Input: stalls = [1, 2, 4, 8, 9], k=3
Output: 3
Explanation: The first cow can be placed at stalls[0],
the second cow can be placed at stalls[2] and
the third cow can be placed at stalls[3].
The minimum distance between cows, in this case, is 3, which also is the largest among all possible ways.
Input: stalls = [10, 1, 2, 7, 5], k = 3
Output: 4
Explanation: The first cow can be placed at stalls[0],
the second cow can be placed at stalls[1] and
the third cow can be placed at stalls[4].
The minimum distance between cows, in this case, is 4, which also is the largest among all possible ways.
Input: stalls = [2, 12, 11, 3, 26, 7], k = 5
Output: 1
Explanation: Each cow can be placed in any of the stalls, as the no. of stalls are exactly equal to the number of cows.
The minimum distance between cows, in this case, is 1, which also is the largest among all possible ways.


Constraints:
2 <= stalls.size() <= 106
0 <= stalls[i] <= 108
1 <= k <= stalls.size()

*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isPossibleSolutions(int stalls[], int size, int cow, int mid)
{
    // can we place k cows, with at least mid distance between cows
    int count = 1;
    int distance = stalls[0];
    for (int i = 0; i < size; i++)
    {
        if (stalls[i] - distance >= mid)
        {
            count++;
            distance = stalls[i]; // one more cow has been placed
        }
        if (count == cow)
        {
            return true;
        }
    }
    return false;
}

int aggressiveCows(int stalls[], int size, int cow)
{
    sort(stalls, stalls + size);
    int start = 0;
    int end = stalls[size - 1] - stalls[0];
    int result = -1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (isPossibleSolutions(stalls, size, cow, mid))
        {
            result = mid;
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    return result;
}

int main()
{
    int stalls[] = {10, 1, 2, 7, 5};
    // int stalls[] = {1, 2, 4, 8, 9};
    int cow = 3;
    // int stalls[] = {2, 12, 11, 3, 26, 7};
    // int cow = 5;
    int size = sizeof(stalls) / sizeof(stalls[0]);

    // for (int i = 0; i < size; ++i)
    // {
    //     std::cout << stalls[i] << " ";
    // }

    cout << "The minimum distance between cows, in this case, is " << aggressiveCows(stalls, size, cow) << ", which also is the largest among all possible ways.";
    return 0;
}