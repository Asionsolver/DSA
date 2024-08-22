#include <iostream>
using namespace std;

void transposeMatrix(int arr[][3], int rows, int cols, int transposeArr[][3])
{

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            // swap(arr[i][j], arr[j][i]);
            transposeArr[j][i] = arr[i][j];
        }
    }
}

void printArray(int arr[][3], int rows, int cols)
{

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << arr[i][j] << " ";
        }

        cout << endl;
    }
}

int main()
{
    int arr[3][3] = {{1, 2, 3},
                     {7, 5, 6},
                     {9, 8, 4}};
    int rows = 3;
    int cols = 3;
    cout << "Printing array: " << endl;
    printArray(arr, rows, cols);

    int transposeArr[3][3];
    transposeMatrix(arr, rows, cols, transposeArr);
    cout << "Printing transpose array: " << endl;
    printArray(transposeArr, rows, cols);

    return 0;
}