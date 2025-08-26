// ! 867. Transpose Matrix

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<vector<int>> arr = {{1, 2, 3}, {7, 5, 6}};
    int rows = arr.size();    // 2
    int cols = arr[0].size(); // 3
    vector<vector<int>> transpose(cols, vector<int>(rows));
    for (int i = 0; i < cols; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            transpose[i][j] = arr[j][i];
        }
    }

     // print transpose
    for (int i = 0; i < transpose.size(); i++)
    {
        for (int j = 0; j < transpose[i].size(); j++)
        {
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}