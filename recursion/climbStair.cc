// ? find no of ways to reach nth stair if we can climb 1, 2 steps at a time

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// this is not optimize way
int climbStairs(int n)
{
    if (n == 1)
    {
        return 1;
    }
    if (n == 2)
    {
        return 2;
    }

    return climbStairs(n - 1) + climbStairs(n - 2);
}

int main()
{
    int n;
    cout << "Enter the number of stairs: ";
    cin >> n;

    int result = climbStairs(n);
    cout << "No of ways to reach " << n << " stairs: " << result << endl;
    return 0;
}