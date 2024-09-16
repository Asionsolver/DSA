// Question: Divide two number using binary search.

#include <iostream>
using namespace std;

int divideTwoNumber(int dividend, int divisor)
{
    int start = 0;
    int end = abs(dividend);
    int mid = start + (end - start) / 2;
    int store = -1;
    while (start <= end)
    {
        if (abs(mid * divisor) == abs(dividend))
        {
            // perfect solution
            if ((divisor < 0 && dividend < 0) || (divisor > 0 && dividend > 0))
            {
                return mid;
            }
            else
            {
                return -mid;
            }
        }
        else if (abs(mid * divisor) > abs(dividend))
        {
            // Logic: left search
            end = mid - 1;
        }
        else
        {
            // Logic: store ans
            store = mid;

            // Logic: right search
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    if ((divisor < 0 && dividend < 0) || (divisor > 0 && dividend > 0))
    {
        return store;
    }
    else
    {
        return -store;
    }
}

int main()
{
    int dividend = 0;
    int divisor = 0;

    int ans = divideTwoNumber(dividend, divisor);

    cout << "Your ans is " << ans << endl;

    return 0;
}