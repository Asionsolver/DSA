#include <iostream>
using namespace std;

int main()
{
    int car = 1;
    int age = 17;

    if (car >= 1 && age >= 18)
    {
        cout << "You can drive" << endl;
    }
    else
    {
        cout << "You can't drive" << endl;
    }

    cout << !age << endl; // 0
    return 0;
}