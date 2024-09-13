#include <iostream>
#include <vector>
#include <algorithm> // Add this line to include the <algorithm> header
using namespace std;

int main()
{
    // vector<int> v{1, 2, 3, 4, 5, 6, 7, 8, 9};

    // if (binary_search(v.begin(), v.end(), 5))
    // {
    //     cout << "Founded this element" << endl;
    // }
    // else
    // {

    //     cout << "Not Founded this element" << endl;
    // }
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    if (binary_search(arr, arr + size, 50))
    {
        cout << "Founded this element" << endl;
    }
    else
    {

        cout << "Not Founded this element" << endl;
    }

    return 0;
}