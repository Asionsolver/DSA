#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void printPath(int sc, int sr, int ec, int er, string s)
{

    if (sc > ec || sr > er)
    {
        return;
    }

    // destination reach condition
    if (sc == ec && sr == er)
    {
        cout << s << endl;
    }

    printPath(sc + 1, sr, ec, er, s + "R"); // right path
    printPath(sc, sr + 1, ec, er, s + "D"); // down path
}

int main()
{
    printPath(0, 0, 2, 2, "");
    return 0;
}