#include <iostream>
#include <climits>
using namespace std;

void findMinMaxNumber(int arr[3][3], int rows, int cols)
{
    int min = INT_MAX;
    int max = INT_MIN;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (arr[i][j] > max)
            {
                max = arr[i][j];
            }
            if (arr[i][j] < min)
            {
                min = arr[i][j];
            }
        }
    }

    cout << "The minimum number is: " << min << endl;
    cout << "The maximum number is: " << max << endl;
}

int main()
{
    int arr[3][3] = {{1, 2, 3},
                     {7, 5, 6},
                     {9, 8, 4}};
    int rows = 3;
    int cols = 3;

    findMinMaxNumber(arr, rows, cols);

    return 0;
}