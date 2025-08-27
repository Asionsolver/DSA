// 118: Pascal's Triangle

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int numRows = 5;
    vector<vector<int>> generate;

    for (int i = 1; i <= numRows; i++)
    {
        vector<int> a(i);
        generate.push_back(a);
    }

    // cout << generate.size() << endl;

    for (int i = 0; i < numRows; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if (j == 0 || j == i)
            {
                generate[i][j] = 1;
            }
            else
            {
                generate[i][j] = generate[i - 1][j] + generate[i - 1][j - 1];
            }
        }
    }

    cout << "Pascal Triangle: " << endl;
    for (int i = 0; i < numRows; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << generate[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}