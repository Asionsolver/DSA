 #include <iostream>
using namespace std;

// int addition(int a, int b)
// {
//     int add = a + b;
//     return add;
// }

// void printLine()
// {
//     cout << "Ashis" << endl;
// }

// void messagePrint()
// {
//     cout << "Message 1" << endl;
//     return;
//     cout << "Message 2" << endl;
// }

// int maxNumber(int a, int b, int c)
// {
//     if (a > b && a > c)
//     {
//         return a;
//     }
//     else if (b > a && b > c)
//     {
//         return b;
//     }
//     else
//     {
//         return c;
//     }
// }

void evenOrOdd(int a)
{
    if (a % 2 == 0)
    {
        cout << a << " is Even Number." << endl;
    }
    else
    {
        cout << a << " is Odd Number." << endl;
    }
}

int sumAllNumber(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }

    return sum;
}

int sumAllEvenNumber(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            sum = sum + i;
        }
    }

    return sum;
}

int main()
{

    // printLine();

    // int result = addition(4, 6);
    // cout << result << endl;

    // messagePrint();

    // cout << "Maximum number is " << maxNumber(45, 93, 85) << endl;

    // evenOrOdd(8);
    // cout << "Sum is " << sumAllNumber(5) << endl;
    cout << "Sum is " << sumAllEvenNumber(8) << endl;

    return 0;
}