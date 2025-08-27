// 119: Pascal's Triangle ||

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int rowIndex = 5;
    vector<int> row(rowIndex + 1, 1);   // Keep 1 in all positions initially
    for (int i = 2; i <= rowIndex; i++) // building the row
    {
        // update from the back (otherwise it will be overwritten)
        for (int j = i - 1; j > 0; j--)
        {
            row[j] = row[j] + row[j - 1];
        }
    }

    cout << "Row " << rowIndex << " of Pascal Triangle: ";
    for (int x : row)
        cout << x << " ";
    cout << endl;

    return 0;
}