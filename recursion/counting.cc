#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void printCounting(int n)
{
    // base condition(mandatory)
    if (n == 0)
    {
        return;
    }

    // processing(optional)
    cout << n << " ";

    // recursive call or recursive relation(mandatory)
    printCounting(n - 1);
}

int main()
{

    int n;
    cout << "Enter the number: ";
    cin >> n;

    printCounting(n);

    return 0;
}