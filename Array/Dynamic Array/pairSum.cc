// find a pair that upon addition gives value equal to sum.
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr{1, 3, 4, 6, 7, 9, 2};

    // print all pairs sum=9
    // vector<int> ans;
    int sum = 9;
    // outer loop will traverse for each element

    for (int i = 0; i < arr.size(); i++)
    {
        int element = arr[i];
        // for every element, will traverse on befor element
        for (int j = i + 1; j < arr.size(); j++)
        {
            // cout << "(" << element << " ," << arr[j] << ")" << endl;
            if (element + arr[j] == sum)
            {
                cout << "Pair found: " << "(" << element << " ," << arr[j] << ")" << endl;
            }
        }
    }

    return 0;
}