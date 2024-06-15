#include <iostream>
using namespace std;

float findCircleArea(float n)
{
    float area = 3.1416 * n * n;
    return area;
}

int main()
{

    float n;
    cout << "Enter any integer number: ";
    cin >> n;

    float result = findCircleArea(n);
    cout << "Circle area is " << result << endl;
    return 0;
}