// Given an array, arr[] containing "n" intergers, the task is to find an integer (say K) such that after replacing each and every index of the array by |ai -k| where (i ∈ [1, n]), result in a sorted array. If no such integer exists that satisfies the above condition then return -1; Find the range of K.

// Find all possible values of K such that replacing each element ai with |ai – K| makes the array sorted.

#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;
float max(float a, float b)
{
    if (a >= b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
float min(float a, float b)
{
    if (a < b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int main()
{
    // int arr[] = {3, 5, 10};
    int arr[] = {5, 3, 10};
    // int arr[] = {5, 10, 33};
    // int arr[] = {3, 5, 10, 3};
    int size = sizeof(arr) / sizeof(arr[0]);

    for (auto element : arr)
    {
        cout << element << " ";
    }
    cout << endl;

    float kmin = (float)(INT_MIN);
    float kmax = (float)(INT_MAX);

    bool flag = true;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] >= arr[i + 1])
        {
            kmin = max(kmin, (arr[i] + arr[i + 1] / 2.0));
        }
        else
        {
            kmax = min(kmax, (arr[i] + arr[i + 1] / 2.0));
        }

        if (kmin > kmax)
        {
            flag = false;
            break;
        }
    }

    if (flag == false)
    {
        cout << -1 << endl;
    }
    else if (kmin == kmax)
    {
        if (kmin - (int)kmin == 0) // kmin and kmax are intergers
        {
            cout << "There is only one value of K: " << kmin;
        }
        else
        {
            cout << -1 << endl;
        }
    }
    else
    {
        if (kmin - (int)kmin > 0)
        {
            kmin = (int)kmin + 1;
        }

        cout << "Range of k is: [" << kmin << ", " << (int)kmax << "]" << endl;
    }

    return 0;
}