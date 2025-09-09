// Make a function which calculates 'a' raised to the power 'b' using recursion.

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int powers(int base, int power)
{
    if (power == 0)
    {
        return 1;
    }

    return base * powers(base, power - 1);
}

int main()
{

    int base = 6;
    int power = 2;

    int result = powers(base, power);
    cout << "Result: " << result << endl;

    return 0;
}

// T.C -> O(power)
// S.C -> O(poser) stack frames