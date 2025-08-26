// ! You are given a matrix / 2d-Array of size (n*n). Transform this matrix into its transpose.

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<vector<int>> arr = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int rows = arr.size();    // 300
    int cols = arr[0].size(); // 3

    cout << "Before Transpose: " << endl;

    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[i].size(); j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // Main Logic

    for (int i = 0; i < rows; i++)
    {
        for (int j = i + 1; j < cols; j++)
        {
            // own swap
            // int temp = arr[i][j];
            // arr[i][j] = arr[j][i];
            // arr[j][i] = temp;
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

    return 0;
}