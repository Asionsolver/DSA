#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int findTotalPath(int sc, int sr, int ec, int er)
{
    if (sc > ec || sr > er)
    {
        return 0;
    }

    if (sc == ec && sr == er)
    {
        return 1;
    }

    int rightPath = findTotalPath(sc + 1, sr, ec, er);
    int downPath = findTotalPath(sc, sr + 1, ec, er);
    return rightPath + downPath;
}

int main()
{
    int result = findTotalPath(0, 0, 5, 4);
    cout << "Total Path: " << result << endl;
    return 0;
}