// Question: Spital Print

#include <iostream>
using namespace std;
#include <vector>
using namespace std;

void spiralPrint(vector<vector<int>> v)
{
    vector<int> ans;
    int row = v.size();
    int col = v[0].size();
    int totalElements = row * col;

    int startingRow = 0;
    int endingCol = col - 1;
    int endingRow = row - 1;
    int startingCol = 0;

    int count = 0;
    while (count < totalElements)
    {
        // Logic: print startingRow
        for (int i = startingCol; i <= endingCol && count < totalElements; i++)
        {
            ans.push_back(v[startingRow][i]);
            count++;
        }
        startingRow++;

        // Logic: print endingCol
        for (int i = startingRow; i <= endingRow && count < totalElements; i++)
        {
            ans.push_back(v[i][endingCol]);
            count++;
        }
        endingRow--;

        // Logic: print endingRow
        for (int i = endingCol; i >= startingCol && count < totalElements; i--)
        {
            ans.push_back(v[endingRow][i]);
            count++;
        }
        endingRow--;

        // Logic: print startingCol
        for (int i = endingRow; i >= startingRow && count < totalElements; i--)
        {
            ans.push_back(v[i][startingCol]);
            count++;
        }
        startingCol++;
    }

    for (auto value : ans)
    {
        cout << value << " ";
    }
}

int main()
{

    vector<vector<int>> v = {{1, 2, 3, 4, 5, 6}, {7, 8, 9, 10, 11, 12}, {13, 14, 15, 16, 17, 18}, {19, 20, 21, 22, 23, 24}, {25, 26, 27, 28, 29, 30}};
    spiralPrint(v);
    return 0;
}

// T.C -> O(n)
// S.C -> O(1)