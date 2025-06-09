#include <iostream>
#include <vector>
using namespace std;
void printArray(vector<int> arr)
{
    for (auto value : arr)
    {
        cout << value << " ";
    }
}

int main()
{
    vector<int> arr{0, 1, 1, 1, 0, 0, 0, 1, 0};

    int start = 0;
    int end = arr.size() - 1;

    int i = 0;

    while (i != end)
    {
        cout << "for i = " << i << " start = " << start << " end = " << end << endl;
        if (arr[i] == 0)
        {
            cout << "found zero" << endl;
            cout << "befor swap ";
            printArray(arr);
            cout << endl;
            // swap from left
            swap(arr[start], arr[i]);
            cout << "After swap ";
            printArray(arr);
            cout << endl;
            i++;
            start++;
            cout << "now i = " << i << " start = " << start << " end = " << end << endl;
            cout << "--------------------" << endl;
        }
        else
        {
            cout << "found one" << endl;
            cout << "befor swap ";
            printArray(arr);
            cout << endl;
            // swap from right
            swap(arr[i], arr[end]);
            cout << "befor swap ";
            printArray(arr);
            cout << endl;
            end--;
            cout << "now i = " << i << " start = " << start << " end = " << end << endl;
            cout << "--------------------" << endl;
        }
    }

    // print
    for (auto value : arr)
    {
        cout << "The result is " << value << " ";
    }

    // cout << end;

    return 0;
}