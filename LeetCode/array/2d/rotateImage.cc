// ! 48. Rotate Image

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<vector<int>> arr = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int rows = arr.size();    // 3
    int cols = arr[0].size(); // 3

    cout << "Before Rotate: " << endl;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < rows; i++)
    {
        for (int j = i + 1; j < cols; j++)
        {
            swap(arr[i][j], arr[j][i]);
        }
    }

    cout << "After Transpose: " << endl;
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[i].size(); j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    for (int row = 0; row < rows; row++)
    {
        int i = 0;
        int j = rows - 1;
        while (i <= j)
        {
            swap(arr[row][i], arr[row][j]);
            i++;
            j--;
        }
    }

    cout << "Rotate Transpose: " << endl;
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[i].size(); j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}