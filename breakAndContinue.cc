#include <iostream>
using namespace std;

int main()
{

    for (int i = 0; i < 10; i++)
    {
        if (i == 5)
        {
            break;
        }
        cout << "Break: " << i << endl;
    }

    for (int i = 0; i < 10; i++)
    {
        if (i == 5)
        {
            continue;
        }
        cout << "Continue: " << i << endl;
    }

    return 0;
}