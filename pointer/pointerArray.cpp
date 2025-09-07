#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{

    // int arr[5] = {1,5,8,7,5};

    // cout << arr << endl; // base address
    // cout << &arr << endl; // base address
    // cout<<&arr[0]<<endl; // 0th location address

    // cout<<endl<<endl;
    // cout<<"&arr[0] = "<<&arr[0]<<endl;
    // cout<<"&arr[1] = "<<&arr[1]<<endl;
    // cout<<"&arr[2] = "<<&arr[2]<<endl;
    // cout<<"&arr[3] = "<<&arr[3]<<endl;
    // cout<<"&arr[4] = "<<&arr[4]<<endl;

    // cout<<endl<<endl;
    // cout<<"arr = "<<arr<<endl;
    // cout<<"arr + 1 = "<<arr + 1<<endl;
    // cout<<"arr + 2 = "<<arr + 2<<endl;
    // cout<<"arr + 3 = "<<arr + 3<<endl;
    // cout<<"arr + 4 = "<<arr + 4<<endl;

    // cout<<endl<<endl;
    // arr = arr + 1; // error
    // int arr2 = arr + 1; // error

    // int *p = arr;
    // int *q = arr + 1;
    // int *r = arr + 2;
    // int *s = arr + 3;
    // int *t = arr + 4;

    // cout<<endl<<endl;
    // cout<<"p = arr: "<< p<<endl;
    // cout<<"q = arr + 1: "<< q<<endl;
    // cout<<"r = arr + 2: "<< r<<endl;
    // cout<<"s = arr + 3: "<< s<<endl;
    // cout<<"t = arr + 4: "<< t<<endl;

    // cout<<endl<<endl;
    // cout<<"*p = arr: "<< *p<<endl;
    // cout<<"*q = arr + 1: "<< *q<<endl;
    // cout<<"*r = arr + 2: "<< *r<<endl;
    // cout<<"*s = arr + 3: "<< *s<<endl;
    // cout<<"*t = arr + 4: "<< *t<<endl;

    // cout<<*p + 3<<endl;
    // cout<<*(arr+1)<<endl;
    // cout<<1[arr]<<endl;
    // cout<<&p<<endl;

    // cout<<endl<<endl;
    // cout<< "size of arr: "<<sizeof(arr)<<endl;
    // cout<<"size of p: "<<sizeof(p)<<endl;
    // cout<<"size of *p: "<<sizeof(*p)<<endl;

    // char charArr[5] = {'a','b','c','d','e'};
    // char *charP = charArr;

    // cout<<endl<<endl;
    // cout<<"charArr: "<<charArr<<endl;
    // cout<<"&charArr: "<<&charArr<<endl;
    // cout<<"charP: "<<charP<<endl;
    // cout<<"*charP: "<<*charP<<endl;
    // cout<<"&charP: "<<&charP<<endl;

    // char str[] = "HelloHello";
    // char *p = str;

    // cout<<endl<<endl;
    // cout<<"p = "<<p<<endl;
    // cout<<"p + 1 = "<<p + 1<<endl;
    // cout<<"p + 2 = "<<p + 2<<endl;
    // cout<<"p + 3 = "<<p + 3<<endl;
    // cout<<"p + 4 = "<<p + 4<<endl;
    // cout<<"p + 5 = "<<p + 5<<endl;

    int arr[4] = {5, 6, 7, 8};
    int *p = arr;
    int *q = arr + 1;

    cout << "arr-> " << arr << endl;         // base address
    cout << "&arr-> " << &arr << endl;       // base address
    cout << "arr[0]-> " << arr[0] << endl;   // 5
    cout << "&arr[0]-> " << &arr[0] << endl; // base address

    cout << "p-> " << p << endl;           // base addres
    cout << "&p-> " << &p << endl;         // p address
    cout << "*p-> " << *p << endl;         // 5
    cout << "*p + 1-> " << *p + 1 << endl; // 6
    cout << "*p + 2-> " << *p + 2 << endl; // 7

    cout << "q-> " << p << endl;               // arr 1th position address
    cout << "&q-> " << &q << endl;             // q address
    cout << "*q-> " << *q << endl;             // 6
    cout << "*q + 3-> " << *q + 3 << endl;     // 9
    cout << "*(q + 4)-> " << *(q + 4) << endl; // out of bound index or garbage value

    return 0;
}