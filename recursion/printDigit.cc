#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void printDigit(int amount, bool isFirst = true)
{
    // base case
    if (amount == 0)
    {
        return;
    }

    // recursive call
    printDigit(amount / 10, false);

    // processing
    int digit = amount % 10;

    if (isFirst)
    {
        cout << digit;
    }
    else
    {
        cout << digit << ", ";
    }
}

int main()
{
    int amount;
    cout << "Enter any amount: ";
    cin >> amount;

    // Handle special case of 0
    if (amount == 0)
    {
        cout << 0;
    }
    else
    {
        printDigit(amount);
    }

    return 0;
}