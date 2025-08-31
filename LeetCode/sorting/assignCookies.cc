// ! 455. Assign Cookies

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    // vector<int> g = {16, 15, 14, 7};
    // vector<int> s = {5, 6, 7, 8, 9, 15, 14, 13, 10, 16};

    // vector<int> g = {1, 2, 3};
    // vector<int> s = {1, 1};

    vector<int> g = {1, 2};
    vector<int> s = {1, 2, 3};

    sort(g.begin(), g.end());
    sort(s.begin(), s.end());

    int count = 0;
    int i = 0;
    int j = 0;

    while (i < g.size() && j < s.size())
    {
        if (s[j] >= g[i])
        {
            count++;
            i++;
            j++;
        }
        else
        {
            j++;
        }
    }

    cout << "TOTAL: " << count << endl;

    return 0;
}