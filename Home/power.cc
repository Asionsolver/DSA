#include <iostream>
using namespace std;

int powerFunction(int number, int power)
{
    int result = 1;
    for (int i = 0; i < power; i++)
    {
        result = result * number;
    }
    return result;
}

int main()
{
    int number, power;
    cout << "Enter the number: ";
    cin >> number;
    cout << "Enter the power: ";
    cin >> power;

    int result = powerFunction(number, power);
    cout << "The result is: " << result << endl;

    return 0;
}