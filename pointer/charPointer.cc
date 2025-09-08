#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{

    char ch[10] = "Ashis";
    char *p = ch;

    cout << "ch-> " << ch << endl;       // Ashis
    cout << "ch+2-> " << ch + 2 << endl; // his
    cout << "&ch-> " << &ch << endl;     // Base Address
    cout << "ch[0]-> " << ch[0] << endl; // A

    cout << "p-> " << p << endl;            // his
    cout << "p+2-> " << p + 2 << endl;      // Ashis
    cout << "&p-> " << &p << endl;          // p address
    cout << "*p-> " << *p << endl;          // A <- *(p + 0)
    cout << "*(p+3)->" << *(p + 3) << endl; // i <- *(p + 3)

    char s = 'k';
    char *cp = &s;

    cout << "s-> " << s << endl; // k

    cout << "cp-> " << cp << endl;   // k����
    cout << "&cp-> " << &cp << endl; // cp address
    cout << "*cp-> " << *cp << endl; // k <- *(cp + 0)

    // char name[10] = "Hello"; // ? Good practice because its copy array storage
    // cout << "Name: " << name << endl; // Hello
    // char *q = "Hello"; // ! Bad practice because it's point temporary storage
    // cout << "q: " << q << endl; // Hello

    return 0;
}