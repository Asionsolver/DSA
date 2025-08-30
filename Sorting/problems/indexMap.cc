// Given an array with N distinct elements, convert the given array to a form where all elements are in the range from 0 to N-1. The order of elements is the same, i.e., O is place in the place of the smallest elements, 1 is placed for the second smallest elements, ...N-1 is placed for the largest element,

#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int main()
{
    // vector<int> arr = {40, 10, 20, 30};
    // vector<int> arr = {19, 12, 23, 8, 16};
    vector<int> arr = {37, 12, 28, 9, 100, 56, 80, 5, 12};
    // vector<int> arr = {100, 100, 100};
    int size = arr.size();
    vector<int> track(size, 0);
    int rank = 1;
    int prevMin = INT_MIN; // will store previous min value
    int prevRank = 0;      // will store previous rank value
    cout << "Before Rank Transform of an Array: " << endl;
    for (auto element : arr)
    {
        cout << element << " ";
    }
    cout << endl;

    for (int i = 0; i < size; i++)
    {
        int min = INT_MAX;
        int minIndex = -1;
        for (int j = 0; j < size; j++)
        {
            if (track[j] == 1)
            {
                continue;
            }
            else
            {

                if (min > arr[j])
                {
                    min = arr[j];
                    minIndex = j;
                }
            }
        }
        // If equal to previous min -> will use previous rank
        if (min == prevMin)
        {
            arr[minIndex] = prevRank;
        }
        else
        {
            arr[minIndex] = rank;
            prevRank = rank; // remembered
            prevMin = min;
            rank++;
        }
        track[minIndex] = 1;
    }
    cout << "After Rank Transform of an Array: " << endl;
    for (auto element : arr)
    {
        cout << element << " ";
    }
    cout << endl;

    return 0;
}