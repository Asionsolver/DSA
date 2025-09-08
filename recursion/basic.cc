#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
// void fun(int n)
// {
//     if (n == 0)
//     {
//         return;
//     }
//     cout << "Hello " << endl;
//     fun(n - 1);
// }

// this function print n to 1
// void numberPrint(int n)
// {
//     if (n == 0)
//     {
//         return;
//     }
//     cout << n << " ";
//     numberPrint(n - 1);
// }

// this function print 1 to n
// void numberPrint(int n)
// {
//     if (n == 0)
//     {
//         return;
//     }
//     numberPrint(n - 1);
//     cout << n << " ";
// }

// or

// using extra parameter
void numberPrint(int i, int n)
{
    if (i > n)
    {
        return;
    }
    cout << i << " ";
    numberPrint(i + 1, n);
}
int main()
{

    // fun(7);
    numberPrint(1, 7);
    return 0;
}