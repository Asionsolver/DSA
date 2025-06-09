// Question: Find square root of a number using binary search
#include <iostream>
using namespace std;

int findSquareRoot(int n)
{
    int target = n;
    int start = 0;
    int end = n;
    int mid = start + (end - start) / 2;
    int ans = -1;
    while (start <= end)
    {

        if (mid * mid == target)
        {
            return mid;
        }
        else if (mid * mid > target)
        {
            // left search
            end = mid - 1;
        }
        else
        {
            // ans store
            ans = mid;
            // right search
            start = mid + 1;
        }

        mid = start + (end - start) / 2;
    }
    return ans;
}

int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    int result = findSquareRoot(n);

    double finalResult = result;
    int precision;

    cout << "Enter the number of floating digit in precision: ";
    cin >> precision;

    double step = 0.1;

    for (int i = 0; i < precision; i++)
    {
        for (double j = finalResult; j * j <= n; j = j + step)
        {
            finalResult = j;
        }
        step = step / 10;
    }

    cout << endl;
    cout << "This " << n << " number square root is " << finalResult << endl;
    return 0;
}