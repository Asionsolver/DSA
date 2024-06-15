// ! Printing each digit of an integer

#include <iostream>
using namespace std;

void printEachDigit(int n)
{
    int arr[100];
    int i = 0;
    int j, reminder;

    while (n > 0)
    {
        reminder = n % 10;
        arr[i] = reminder;
        i++;
        n = n / 10;
    }
    for (j = i - 1; j > -1; j--)
    {
        cout << arr[j];
    }
}

int main()
{
    int n;
    cout << "Enter a positive integer number: ";
    cin >> n;
    if (n <= 0)
    {
        cout << "The digit are " << n;
    }

    printEachDigit(n);

    return 0;
}