// Selection Sort Algorithms
// Selection sort is unstable algorithms

#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

void goodSelectionSort(vector<int> &arr)
{
    int size = arr.size();

    for (int i = 0; i < size - 1; i++)
    {
        int min = INT_MAX;
        int minIndex = -1;

        for (int j = i; j < size; j++)
        {
            if (arr[j] <= min)
            {
                min = arr[j];
                minIndex = j;
            }
            swap(arr[i], arr[minIndex]);
        }
    }
}

int main()
{
    vector<int> arr = {9, 1, 4, 6, 7, 3};

    cout << "Before Sort: " << endl;
    for (auto element : arr)
    {
        cout << element << " ";
    }
    cout << endl;
    goodSelectionSort(arr);

    cout << "After Selection Sort: " << endl;
    for (auto element : arr)
    {
        cout << element << " ";
    }

    cout << endl;
    return 0;
}

// Selection Sort Time Complexity
// T.C = O(n2)