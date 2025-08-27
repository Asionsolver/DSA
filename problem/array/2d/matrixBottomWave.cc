#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void rightWavePrint(vector<vector<int>> arr)
{
    int rowSize = arr.size();
    int colSize = arr[0].size();

    if (rowSize == colSize)
    {
        for (int i = rowSize - 1; i >= 0; i--)
        {

            if ((i & 1) == 0)
            {
                for (int j = 0; j < colSize; j++)
                {
                    cout << arr[i][j] << " ";
                }
            }
            else
            {

                for (int k = colSize - 1; k >= 0; k--)
                {
                    cout << arr[i][k] << " ";
                }
            }
        }
    }
    else
    {
        for (int i = rowSize - 1; i >= 0; i--)
        {

            if ((i & 1) == 0)
            {
                for (int k = colSize - 1; k >= 0; k--)
                {
                    cout << arr[i][k] << " ";
                }
            }
            else
            {

                for (int j = 0; j < colSize; j++)
                {
                    cout << arr[i][j] << " ";
                }
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