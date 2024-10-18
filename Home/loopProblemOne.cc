#include <iostream>
using namespace std;

int main()
{
    int i = 1;

    // Infinite loop. Because there is no condition to break the loop. That's why it will run forever.
    for (;;)
    {
        cout << "Value of i: " << i << endl;
        if (i < 5)
        {
            cout << "Ashis" << endl
                 << endl;
            i++;
        }

        // This will break the loop when i becomes 5.
        else
        {
            break;
        }
    }

    cout << "Ashis kumar Paul" << endl;
    return 0;
}
