#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void rightWavePrint(vector<vector<int>> arr)
{
    int size = arr.size();
    int colSize = arr[0].size();

    for (int i = 0; i < size; i++)
    {
        // even number of column -> Right to left
        if ((i & 1) == 0)
        {
            for (int k = colSize - 1; k >= 0; k--)
            {
                cout << arr[i][k] << " ";
            }
        }
        else
        { // odd no of col -> Left to Right
            for (int j = 0; j < colSize; j++)
            {
                cout << arr[i][j] << " ";
            }
        }
    }
}

int main()
{
    vector<vector<int>> arr{
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9},
        {10, 11, 12}};
    rightWavePrint(arr);
    cout << endl;
    return 0;

    return 0;
}