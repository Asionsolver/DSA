// Question: Factorial of a large number

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void factorialLargeNumber(int number)
{

    // Todo: The size of vector array
    // int size = ans.size();
    // cout << size << endl;
    vector<int> ans;
    ans.push_back(1);
    int carry = 0;
    for (int i = 2; i <= number; i++)
    {
        for (int j = 0; j < ans.size(); j++)
        {
            // Logic: Factorial Logic
            int x = ans[j] * i + carry;
            ans[j] = x % 10;
            carry = x / 10;
        }
        while (carry)
        {
            ans.push_back(carry % 10);
            carry /= 10;
        }
        carry = 0;
    }
    reverse(ans.begin(), ans.end());
    for (auto element : ans)
    {
        cout << element;
    }
}

int main()
{
    int number;
    cout << "Enter the factorials of the number you want to find: ";
    cin >> number;
    cout << "Your ans is: ";
    factorialLargeNumber(number);

    return 0;
}