// 861. Score After Flipping Matrix

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    // vector<vector<int>> grid = {{1, 1}, {1, 0}};
    vector<vector<int>> grid = {{1, 1, 0, 0, 1}, {0, 0, 0, 0, 1}, {0, 1, 0, 0, 1}};

    int rows = grid.size();
    int cols = grid[0].size();
    // cout << "ROWS: " << rows << endl;
    // cout << "COLS: " << cols << endl;

    int sum = 0;
    for (int i = 0; i < rows; i++)
    {
        int x = 1;
        for (int j = cols - 1; j >= 0; j--)
        {
            sum += grid[i][j] * x;
            x *= 2;
        }
    }

    cout << "BEFORE FLIPPING GRID: " << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << grid[i][j] << " ";
        }
        cout << endl;
    }

    cout << "BEFORE FLIPPING TOTAL SUM: " << sum << endl;

    for (int i = 0; i < rows; i++)
    {
        // check first items of column isZero
        if (grid[i][0] == 0)
        {
            for (int j = 0; j < cols; j++)
            {
                // perform flipping operation
                if (grid[i][j] == 0)
                {
                    grid[i][j] = 1;
                }
                else
                {
                    grid[i][j] = 0;
                }
            }
        }
    }

    cout << "After ROW FLIPPING GRID: " << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << grid[i][j] << " ";
        }
        cout << endl;
    }

    // check columns zero and one
    for (int i = 0; i < cols; i++)
    {
        // counting number of zero and one
        int zero = 0;
        int one = 0;
        for (int j = 0; j < rows; j++)
        {

            if (grid[j][i] == 0)
            {
                zero++;
            }
            else
            {

                one++;
            }
        }
        // check number of zero is greater than one then this condition work
        if (one < zero)
        {

            for (int j = 0; j < rows; j++)
            {
                // again perform flipping operation
                if (grid[j][i] == 0)
                {
                    grid[j][i] = 1;
                }
                else
                {
                    grid[j][i] = 0;
                }
            }
        }
    }

    cout << "After COLUMN FLIPPING GRID: " << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << grid[i][j] << " ";
        }
        cout << endl;
    }

    int flippingSum = 0;

    for (int i = 0; i < rows; i++)
    {

        int x = 1;
        for (int j = cols - 1; j >= 0; j--)
        {
            flippingSum += grid[i][j] * x;
            x *= 2;
        }
    }

    cout << "AFTER FLIPPING TOTAL SUM: " << flippingSum << endl;

    return 0;
}