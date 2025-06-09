#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    char *ptr;
    char Str[] = "abcdefg";
    ptr = Str;
    ptr += 5;
    cout << ptr << endl;

    return 0;
}