#include <iostream>
using namespace std;

int main()
{
    int rows = 5;

    for (int row = 0; row < rows; row++)
    {
        for (int col = 0; col < row + 1; col++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}