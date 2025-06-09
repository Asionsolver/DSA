#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cout << "Enter any positive integer number: ";
    cin >> n;

    int count = 0;

    vector<bool> isPrime(n + 1, true);
    isPrime[0] = isPrime[1] = false;

    for (int i = 2; i < n; i++)
    {
        if (isPrime[i])
        {
            count++;
            cout << i << " ";
            for (int j = 2 * i; j < n; j += i)
            {
                isPrime[j] = false;
            }
        }
    }
    cout << "Total prime number is: " << count << endl;
    return 0;
}

// Time Complexcity is O(nlog(logn))