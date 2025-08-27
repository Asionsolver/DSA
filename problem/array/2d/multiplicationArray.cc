// ! Write a program to print the multiplication of two matrices given by the user.

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    // 2 * 3 matrix
    vector<vector<int>> firstMatrix = {{1, 2, 3}, {4, 5, 6}};
    int firstMatrixRows = firstMatrix.size();
    int firstMatrixCols = firstMatrix[0].size();

    // 3 * 4 matrix
    vector<vector<int>> secondMatrix = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
    int secondMatrixRows = secondMatrix.size();
    int secondMatrixCols = secondMatrix[0].size();

    // 2 * 4 matrix
    vector<vector<int>> resultMatrix(firstMatrixRows, vector<int>(secondMatrixCols));

    if (firstMatrixCols == secondMatrixRows)
    {
        for (int i = 0; i < firstMatrixRows; i++)
        {
            for (int j = 0; j < secondMatrixCols; j++)
            {
                // resultMatrix[i][j] = a[i][0]*b[0][j] + a[i][1]*b[1][j]+ a[i][2]*b[2][j];
                // multiplication perform
                resultMatrix[i][j] = 0;
                for (int k = 0; k < firstMatrixCols; k++)
                {
                    resultMatrix[i][j] += firstMatrix[i][k] * secondMatrix[k][j];
                }
            }
        }

        cout << "After Multiplication: " << endl;
        for (int i = 0; i < firstMatrixRows; i++)
        {
            for (int j = 0; j < secondMatrixCols; j++)
            {
                cout << resultMatrix[i][j] << "  ";
            }
            cout << endl;
        }
    }
    else
    {
        cout << "The matrices can not be multiply" << endl;
    }

    return 0;
}