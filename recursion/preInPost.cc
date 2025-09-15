#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void pip(int number)
{
    if (number == 0)
    {
        return;
    }
    cout << "Pre " << number << endl;
    pip(number - 1);
    cout << "In " << number << endl;
    pip(number - 1);
    cout << "Post " << number << endl;
}

int main()
{
    pip(1);
    return 0;
}