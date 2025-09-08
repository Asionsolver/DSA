// Print sum from 1 to n(Parameterized)
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
// using extra parameter
// void sums(int sum, int n)
// {
//     // termination condition
//     if (n == 0)
//     {
//         cout << sum << endl;
//         return;
//     }
//     sums(sum + n, n - 1);
// }

int sums(int n)
{

    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    return n + sums(n - 1);
}
int main()
{

    // fun(7);
    int result = sums(1);

    cout << "Result: " << result << endl;
    return 0;
}