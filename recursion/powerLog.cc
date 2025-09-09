#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int pow(int x, int n)
{
    if (n == 1)
    {
        return x;
    }
    if (n % 2 == 0)
    {
        int ans = pow(x, n / 2);
        return ans * ans;
    }
    else
    {
        int ans = pow(x, n / 2);
        return ans * ans * x;
    }
}

int main()
{
    int x = 2;
    int n = 9;
    cout << "Result: " << pow(x, n) << endl;
    return 0;
}

// T.C = O(logN)