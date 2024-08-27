// C++ program to demonstrate memset
#include <cstring>
#include <iostream>
using namespace std;

// Driver Code
int main()
{
    char str[] = "geeksforgeeks";
    // setting each byte of memory of str to 't' using
    // memset
    memset(str, 't', sizeof(str));

    cout << str << endl;

    int arr[10];

    memset(arr, 1, sizeof(arr));

    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}