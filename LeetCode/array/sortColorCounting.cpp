#include <iostream>
#include <vector>
using namespace std;

void sortColorCountingMethod(vector<int> arr)
{
    int zeros, ones, twos;
    zeros = ones = twos = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == 0)
        {
            zeros++;
        }
        else if (arr[i] == 1)
        {
            ones++;
        }
        else
        {
            twos++;
        }
    }

    int i = 0;

    while (zeros--)
    {
        arr[i] = 0;
        i++;
    }
    while (ones--)
    {
        arr[i] = 1;
        i++;
    }
    while (twos--)
    {
        arr[i] = 2;
        i++;
    }

    for (auto value : arr)
    {
        cout << value << " ";
    }
}

int main()
{

    vector<int> arr{2, 0, 2, 1, 1, 0};

    sortColorCountingMethod(arr);

    return 0;
}

// T.C: O(n)
// S.C: O(1)