#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{

    char ch = 'A';
    char *ptr = &ch;
    ch++;

    cout << "*ptr " << *ptr << endl;

    return 0;
}