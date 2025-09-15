#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// ! this is not optimize version because use extra variable
// int findTotalPath(int sc, int sr, int ec, int er)
// {
//     if (sc > ec || sr > er)
//     {
//         return 0;
//     }

//     if (sc == ec && sr == er)
//     {
//         return 1;
//     }

//     int rightPath = findTotalPath(sc + 1, sr, ec, er);
//     int downPath = findTotalPath(sc, sr + 1, ec, er);
//     return rightPath + downPath;
// }

// ? this is optimize version because use less variable
int findTotalPath(int col, int row)
{
    if (col < 0 || row < 0)
    {
        return 0;
    }

    if (col == 0 && row == 0)
    {
        return 1;
    }

    int rightPath = findTotalPath(col - 1, row);
    int downPath = findTotalPath(col, row - 1);
    return rightPath + downPath;
}

int main()
{
    int result = findTotalPath(2, 2);
    cout << "Total Path: " << result << endl;
    return 0;
}