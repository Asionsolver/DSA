#include <iostream>
using namespace std;

void findKey(int arr[3][3], int rows, int cols, int number)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (arr[i][j] == number)
            {
                cout << "This number index is: " << "[ " << i << "," << " " << j << "]" << endl;
                return;
            }
        }
    }
    cout << "This value is not present in the 2D array" << endl;
}

int main()
{
    int rows = 3;
    int cols = 3;
    int arr[3][3] = {{1, 2, 3},
                     {7, 5, 6},
                     {9, 8, 4}};
    int number;
    cout << "Enter Integer Number: ";
    cin >> number;

    findKey(arr, rows, cols, number);
    return 0;
}
