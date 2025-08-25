#include <iostream>

using namespace std;

void printRowWiseSum(int arr[][3], int row, int col)
{

    for (row = 0; row < 3; row++)
    {
        int rowSum = 0;
        for (col = 0; col < 3; col++)
        {
            rowSum = rowSum + arr[row][col];
        }
        cout << rowSum << endl;
    }
}
void printColumnWiseSum(int arr[][3], int row, int col)
{

    for (row = 0; row < 3; row++)
    {
        int colSum = 0;
        for (col = 0; col < 3; col++)
        {
            colSum = colSum + arr[col][row];
        }
        cout << colSum << endl;
    }
}
int main()
{
    int arr[3][3] = {{1, 2, 3},
                     {7, 5, 6},
                     {9, 8, 4}};
    int row;
    int col;
    cout << "Row wise sum: " << endl;
    printRowWiseSum(arr, row, col);
    cout << "Column wise sum: " << endl;
    printColumnWiseSum(arr, row, col);
    return 0;
}
