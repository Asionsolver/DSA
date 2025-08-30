// Insertion Sort is a stable sorting  algorithms

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void goodInsertionSort(vector<int> &arr)
{
    int size = arr.size();

    for (int i = 1; i < size; i++)
    {
        int j = i;
        while (j >= 1 && arr[j] < arr[j - 1])
        {
            swap(arr[j], arr[j - 1]);
            j--;
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
    goodInsertionSort(arr);

    cout << "After Insertion Sort: " << endl;
    for (auto element : arr)
    {
        cout << element << " ";
    }

    cout << endl;
    return 0;
}

// Insertion Sort Time Complexity
// T.C = O(n2)