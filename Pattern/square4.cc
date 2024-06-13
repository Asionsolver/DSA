#include <iostream>
using namespace std;

int main()
{
    int rows;
    int cols;

    cout << "Enter the number of rows: ";
    cin >> rows;

    cout << "Enter the number of columns: ";
    cin >> cols;

    for (int row = 0; row < rows; row++)
    {
        for (int col = 0; col < cols; col++)
        {
            // if (row == 0 || row == 9)
            // {
            //     cout << "*";
            // }
            // else if (col == 0 || col == 9)
            // {
            //     cout << "*";
            // }
            if (row == col || row + col == cols - 1)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}