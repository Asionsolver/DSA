// Given n string & consisting of digits from 0 to 9. Return the index of string which ha maximum value.(Take 0 based indexing)

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int maximumValue(vector<string> &strs)
{
    int max = stoi(strs[0]);
    for (int i = 1; i < strs.size(); i++)
    {
        int value = stoi(strs[i]);
        if (value > max)
        {
            max = value;
        }
    }
    return max;
}
int main()
{
    vector<string> value = {"0123", "0023", "456", "00182", "940", "2901"};
    int result = maximumValue(value);
    cout << "Result Maximum Value: " << result << endl;
    return 0;
}