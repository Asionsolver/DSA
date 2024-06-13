#include <iostream>
using namespace std;

int main()
{
    int rows = 8;
    int cols = 14;

    // cout << "Enter the only odd number of rows: ";
    // cin >> rows;

    // cout << "Enter the only odd number of columns: ";
    // cin >> cols;

    for (int row = 0; row < rows; row++)
    {
        for (int col = 0; col < cols; col++)
        {

            if (col == row)
            {
                cout << "*";
            }
            else if (col > row && col < (cols + row + row) / 2)
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

    return 0;
}