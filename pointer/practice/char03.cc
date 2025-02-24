#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    char st[] = "abcd";

    for (int i = 0; st[i] != '\0'; i++)
    {
        cout << "st[i]: " << st[i] << endl
             << "*(st)+i: " << *(st) + i << endl
             << "*(i + st): " << *(i + st) << endl
             << "i[st]: " << i[st] << endl
             << endl;
    }

    return 0;
}