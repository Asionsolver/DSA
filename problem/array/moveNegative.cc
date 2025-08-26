// ! Question: Move all -ve number to left side of an array

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> arr{-1, 2, -3, 4, -5, 6};

    int low = 0;
    int high = arr.size() - 1;

    while (low < high)
    {
        if (arr[low] > 0 && arr[high] > 0)
        {
            high--;
        }
        else if (arr[low] > 0 && arr[high] < 0)
        {
            // cout << "before" << endl;
            // cout << arr[low] << endl;
            // cout << arr[high] << endl;
            swap(arr[low], arr[high]);
            // cout << "after" << endl;
            // cout << arr[low] << endl;
            // cout << arr[high] << endl;
            low++;
            high--;
        }
        else if (arr[low] < 0 && arr[high] > 0)
        {
            low++;
            high--;
        }
        else
        {
            low++;
        }
    }

    for (int v : arr)
        cout << v << " ";
    cout << endl;

    return 0;
}

// T.C: O(n)
// S.C: O(1)