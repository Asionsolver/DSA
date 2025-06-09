#include <iostream>
using namespace std;
void solve(int &m)
{
    m--;
    m = m * 10;
    cout << "Ref Mark: " << m << endl;
}
int main()
{
    int mark = 90;
    mark++;
    cout << mark << endl;
    solve(mark);
    cout << "Mark: " << mark << endl;
    return 0;
}