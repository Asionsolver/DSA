// 633. Sum of Square Numbers
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

bool isPerfectSquare(int n)
{
    int root = sqrt(n);
    if (root * root == n)

    {
        return true;
    }
    else
    {
        return false;
    }
}
bool judgeSquareSum(int c)
{
    int x = 0;
    int y = c;
    while (x <= y)
    {
        if (isPerfectSquare(x) && isPerfectSquare(y))
        {
            return true;
        }
        else if (!isPerfectSquare(y))
        {
            y = (int)sqrt(y) * (int)sqrt(y);
            x = c - y;
        }
        else
        {
            x = ((int)sqrt(x) + 1) * ((int)sqrt(x) + 1);
            y = c - x;
        }
    }
    return false;
}
int main()
{
    int c = 3;
    if (judgeSquareSum(c))
    {
        cout << c << " is Sum of Square Numbers" << endl;
    }
    else
    {
        cout << c << " is not Sum of Square Numbers" << endl;
    }

    return 0;
}

// T.C:O(√c)