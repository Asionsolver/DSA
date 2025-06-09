// C Program to print hourglass pattern using star *
#include <iostream>
using namespace std;
int main()
{
    int rows = 20;
    int cols = 20;

    for (int row = 0; row <= rows; row++)
    {
        for (int col = 0; col <= cols; col++)
        {
            if (row == col)
            {
                cout << "*";
            }

            else if (col > row && row + col <= rows)
            {
                cout << "*";
            }

            else if (row + col >= rows && col < row)
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
