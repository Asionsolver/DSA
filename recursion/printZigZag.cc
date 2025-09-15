#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void zigZag(int number)
{
    if (number == 0)
    {
        return;
    }
    cout << number;
    zigZag(number - 1);
    cout << number;
    zigZag(number - 1);
    cout << number;
}

int main()
{
    zigZag(4);
    cout << endl;
    return 0;
}