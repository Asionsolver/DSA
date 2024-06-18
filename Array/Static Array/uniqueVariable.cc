#include <iostream>
using namespace std;

int uniqueNumber(int arr[], int size)
{
    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        ans = ans ^ arr[i];
    }

    return ans;
}

int main()
{
    int arr[] = {4, 5, 4, 11, 3, 8, 3, 5, 8, 5, 5};
    int size = 11;

    int result = uniqueNumber(arr, size);

    cout << "The unique number is " << result << endl;
    return 0;
}