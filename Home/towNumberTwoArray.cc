// Question: Add two numbers represented by two arrays

#include <iostream>
#include <algorithm> // Add this line to include the <algorithm> header
using namespace std;

string addTwoNumbersByTwoArray(int one[], int two[], int sizeOne, int sizeTwo)
{
    int carry = 0;
    string ans;
    int i = sizeOne - 1;
    int j = sizeTwo - 1;

    while (i >= 0 && j >= 0)
    {
        int x = one[i] + two[j] + carry;
        int digit = x % 10;
        ans.push_back(digit + '0');
        carry = x / 10;
        i--;
        j--;
    }
    while (i >= 0)
    {
        int x = one[i] + 0 + carry;
        int digit = x % 10;
        ans.push_back(digit + '0');
        carry = x / 10;
        i--;
    }
    while (j >= 0)
    {
        int x = 0 + two[i] + carry;
        int digit = x % 10;
        ans.push_back(digit + '0');
        carry = x / 10;
        j--;
    }

    if (carry)
    {
        ans.push_back(carry + '0');
    }

    while (ans[ans.size() - 1] == '0')
    {
        ans.pop_back();
    }

    reverse(ans.begin(), ans.end());

    return ans;
}

int main()
{
    int one[] = {0, 0, 0, 4, 8, 6, 2};
    int two[] = {0, 5, 8, 6, 2};
    int sizeOne = sizeof(one) / sizeof(one[0]);
    int sizeTwo = sizeof(two) / sizeof(two[0]);
    cout << "Two number: " << addTwoNumbersByTwoArray(one, two, sizeOne, sizeTwo);
    return 0;
}