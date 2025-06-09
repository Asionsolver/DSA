#include <iostream>
#include <vector>
using namespace std;

void wavePrintMatrix(vector<vector<int>> arr)
{
    int size = arr.size();
    int colSize = arr[0].size();

    for (int i = 0; i < colSize; i++)
    {
        // even number of column -> Top to Bottom
        if ((i & 1) == 0)
        {
            for (int j = 0; j < size; j++)
            {
                cout << arr[j][i] << " ";
            }
        }
        else
        { // odd no of col -> Bottom to Top
            for (int k = size - 1; k >= 0; k--)
            {
                cout << arr[k][i] << " ";
            }
        }
    }
}

int main()
{
    vector<vector<int>> arr{
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}};
    wavePrintMatrix(arr);
    return 0;
}