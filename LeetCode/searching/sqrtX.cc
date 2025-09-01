// 69. Sqrt(x)

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int squireNumber(int x)
{
    int start = 0;
    int end = x;
    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        long long midBig = (long long)mid;
        long long xBig = (long long)x;
        if (midBig * midBig == xBig)
        {
            return mid;
        }
        else if (midBig * midBig > xBig)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return end;
}

int main()
{
    int x = 6;
    int result = squireNumber(x);
    cout << x << " Squire Root: " << result << endl;

    return 0;
}