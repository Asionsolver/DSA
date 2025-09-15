#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void towerOfHanoi(int disk, char source, char helper, char destination)

{
    if (disk == 0)
        return;
    towerOfHanoi(disk - 1, source, destination, helper);
    cout << source << "->" << destination << endl;
    towerOfHanoi(disk - 1, helper, source, destination);
}

int main()
{

    towerOfHanoi(3, 'A', 'B', 'C');

    return 0;
}

// T.C = O(2^n)