/**
 * @240. Search a 2D Matrix II

 * Write an efficient algorithm that searches for a value target in an m x n integer matrix matrix. This matrix has the following properties:

   1. Integers in each row are sorted in ascending from left to right.
   2. Integers in each column are sorted in ascending from top to bottom.
 */

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool searchElement(vector<vector<int>> &matrix, int target)
{
    int rows = matrix.size();
    int cols = matrix[0].size();

    int r = 0;
    int c = cols - 1;
    while (c >= 0 && r <= rows - 1)
    {
        if (matrix[r][c] == target)
        {
            return true;
        }
        else if (matrix[r][c] > target)
        {
            c--;
        }
        else
        {
            r++;
        }
    }

    return false;
}

int main()
{
    vector<vector<int>> matrix = {{1, 4, 7, 11, 15}, {2, 5, 8, 12, 19}, {3, 6, 9, 16, 22}, {10, 13, 14, 17, 24}, {18, 21, 23, 26, 30}};
    int target = 5;
    bool result = searchElement(matrix, target);

    if (result)
    {
        cout << "Target Found" << endl;
    }
    else
    {
        cout << "Target Not Found" << endl;
    }

    return 0;
}