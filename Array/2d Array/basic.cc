#include <iostream>
using namespace std;

// void print2DArray(int arr[][3], int row, int col)
// {
//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < col; j++)
//         {
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }
// }

int main()
{
    // ! Theory Number of index in 2D array elements = (C*i)+j
    //   C = Number of columns
    //   row or i = value of i
    //   col or j = value of j
    // ! Syntax: arr[row][column]

    // Example of arr[1][3]
    // index = (3 * 1) + 3 = 6

    // declare 2D array
    // int arr[3][3];

    // initialisation 2D array
    int arr[3][3] = {{1, 2, 3},
                     {7, 5, 6},
                     {9, 8, 4}};

    // cout << "The value is " << arr[1][3] << endl;

    // row-wise print

    // outer loop
    cout << "row-wise print" << endl;
    for (int row = 0; row < 3; row++)
    {
        // for every row, we need to print value in each column
        for (int column = 0; column < 3; column++)
        {
            // print value
            cout << arr[row][column] << " ";
        }
        cout << endl;
    }

    cout << endl;

    // column-wise print
    // column loop
    cout << "column-wise print" << endl;
    for (int row = 0; row < 3; row++)
    {
        // for every ro, we need to print value in each column
        for (int column = 0; column < 3; column++)
        {
            // print value
            cout << arr[column][row] << " ";
        }
        cout << endl;
    }

    return 0;
}