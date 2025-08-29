#include <iostream>
#include <vector>
#include <algorithm> // Add this line to include the <algorithm> header
using namespace std;

int main()
{
    vector<int> v{1, 2, 2, 3, 4, 5, 6, 7, 8, 9};
    auto lowerBound = lower_bound(v.begin(), v.end(), 2);

    cout << "The first occurrence index is " << lowerBound - v.begin() << endl;

    auto upperBound = upper_bound(v.begin(), v.end(), 2);
    cout << "The last occurrence index is " << (upperBound - v.begin() - 1) << endl;
    return 0;
}