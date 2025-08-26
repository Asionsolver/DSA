#include <iostream>
#include <vector>
using namespace std;

void sortColorInPlace(vector<int> arr)
{
    // 3-pointer approach
    int low = 0, medium = 0, high = arr.size() - 1;
    while (medium <= high)
    {
        if (arr[medium] == 0)
        {
            swap(arr[low], arr[medium]);
            low++;
            medium++;
        }
        else if (arr[medium] == 1)
        {
            medium++;
        }
        else
        {
            swap(arr[high], arr[medium]);
            high--;
        }
    }

    for (auto value : arr)
    {
        cout << value << " ";
    }
}

int main()
{

    vector<int> arr{2, 0, 2, 1, 1, 0};

    sortColorInPlace(arr);

    return 0;
}