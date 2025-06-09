#include <iostream>
using namespace std;

void arrayPassFunction(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {

        cout << arr[i] << " ";
    }
}

bool linearSearch(int arr[], int size, int searchValue)
{

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == searchValue)
        {
            return true;
            break;
        }
    }

    return false;
}

int main()
{
    int arr[10] = {8, 9, 3, 6, 4, 99, 23, 74, 25, 63};
    int size = 10;
    int searchValue = 234;

    arrayPassFunction(arr, size);
    cout << endl;

    int flag = linearSearch(arr, size, searchValue);
    if (flag == 1)
    {
        cout << "Your search value is found in array" << endl;
    }
    else
    {
        cout << "Your search value is not found in array" << endl;
    }

    return 0;
}