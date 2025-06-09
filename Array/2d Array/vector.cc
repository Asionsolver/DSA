#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // vector<vector<int>> arr;
    // vector<int> a{1, 2, 3};
    // vector<int> b{4, 5, 6};
    // vector<int> c{7, 8, 9};
    // arr.push_back(a);
    // arr.push_back(b);
    // arr.push_back(c);

    // cout << "Number of column same:" << endl;
    // for (int i = 0; i < arr.size(); i++)
    // {
    //     for (int j = 0; j < arr[0].size(); j++)
    //     {
    //         cout << arr[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    // vector<vector<int>> arr2;
    // vector<int> d{1, 2, 3, 4};
    // vector<int> e{5, 6};
    // vector<int> f{7, 8, 9, 10, 11};
    // arr2.push_back(d);
    // arr2.push_back(e);
    // arr2.push_back(f);

    // cout << "Number of column different:" << endl;
    // for (int i = 0; i < arr2.size(); i++)
    // {
    //     for (int j = 0; j < arr2[i].size(); j++)
    //     {
    //         cout << arr2[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    // int row = 3;
    // int col = 5;
    // vector<vector<int>> arr(row, vector<int>(col, 0));

    // vector<vector<int>> arr: This declares arr as a 2D vector, where each element is a vector<int>. Essentially, it's a vector of vectors, and int is the type of elements stored.

    // (row, vector<int>(col, 0)):

    // row: This specifies the number of rows in the 2D vector.
    // vector<int>(col, 0): This creates a 1D vector of integers with col elements, all initialized to 0.
    // Therefore, vector<int>(col, 0) creates a single row with col columns, and row copies of this row are placed into arr, forming a row x col 2D vector.

    int row = 5;
    int col = 5;
    vector<vector<int>> arr(row, vector<int>(col, -8));
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[i].size(); j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}