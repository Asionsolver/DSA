#include <iostream>
using namespace std;

int main()
{
    int rows;
    int cols;

    cout << "Enter the only odd number of rows: ";
    cin >> rows;

    cout << "Enter the only odd number of columns: ";
    cin >> cols;

    for (int row = 0; row < rows; row++)
    {
        for (int col = 0; col < cols; col++)
        {

            if (row == rows / 2 || col == cols / 2)
            {
                cout << "*";
            }
            else if (row == 0 && col > cols / 2 || row == rows - 1 && col < cols / 2)
            {
                cout << "*";
            }
            // else if (row == rows - 1 && col < cols / 2)
            // {
            //     cout << "*";
            // }
            else if (col == 0 && row < rows / 2 || col == cols - 1 && row > rows / 2)
            {
                cout << "*";
            }
            // else if (col == cols - 1 && row > rows / 2)
            // {
            //     cout << "*";
            // }

            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}