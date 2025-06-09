#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{

    // int a = 5;
    // int b = 5;
    // int c = 5;
    // int d = 5;

    // cout<<"Address of a: "<<&a<<endl;
    // cout<<"Address of b: "<<&b<<endl;
    // cout<<"Address of c: "<<&c<<endl;
    // cout<<"Address of d: "<<&d<<endl;

    // int a = 5;

    // pointer create
    // int* ptr = &a;

    // cout<<"Address of a: "<<&a<<endl;
    // cout<<"Value of a: "<<a<<endl;

    // access the address of a
    // cout<<"Address of ptr: "<<ptr<<endl;

    // access the value ptr is pointing to
    // cout<<"Value of ptr: "<<*ptr<<endl;

    // address of ptr
    // cout<<"Address of ptr: "<<&ptr<<endl;

    // int a = 5;

    // int* ptr = &a; // pointer create

    // char ch = 'A';

    // char* ptr1 = &ch; // pointer create

    // double d = 5.5;

    // double* ptr2 = &d; // pointer create

    // size of pointer
    // cout<<"Size of int pointer: "<<sizeof(ptr)<<endl; // Size of int pointer: 4
    // cout<<"Size of char pointer: "<<sizeof(ptr1)<<endl; // Size of char pointer: 4
    // cout<<"Size of double pointer: "<<sizeof(ptr2)<<endl; // Size of double pointer: 4

    // int* ptr; // Bad practice: pointer is not initialized
    // cout<<"Value of ptr: "<<*ptr<<endl; // segmentation fault

    // int *ptr = 0; // Good practice: pointer is initialized with 0
    // cout<<"Value of ptr: "<<*ptr<<endl; // segmentation fault

    // int* ptr1 = NULL; // Good practice: pointer is initialized with NULL
    // cout<<"Value of ptr1: "<<*ptr1<<endl;

    // int* ptr = nullptr; // Good practice: pointer is initialized with nullptr
    // cout<<"Value of ptr: "<<*ptr<<endl;

    // int a = 5;
    // int* ptr = &a;

    // cout<<"Address of a: "<<&a<<endl;
    // cout<<"Value of a: "<<a<<endl;
    // cout<<"Address of ptr: "<<ptr<<endl;
    // cout<<"Value of ptr: "<<*ptr<<endl;

    // cout<<endl<<endl<<endl;
    // a = a + 1;

    // cout<<"Address of a: "<<&a<<endl;
    // cout<<"Value of a: "<<a<<endl;
    // cout<<"Address of ptr: "<<ptr<<endl;
    // cout<<"Value of ptr: "<<*ptr<<endl;

    // cout<<endl<<endl<<endl;
    // ptr = ptr + 1;

    // cout<<"Address of ptr: "<<ptr<<endl;

    // cout<<endl<<endl<<endl;
    // *ptr = *ptr + 1;

    // cout<<"Value of *ptr: "<<*ptr<<endl;

    int a = 5;

    int *ptr = &a;

    // copy of pointer
    int *copyPtr = ptr;

    cout << "Address of a: " << &a << endl;
    cout << "Value of a: " << a << endl;

    cout << endl
         << endl
         << endl;
    cout << "ptr" << endl;
    cout << "Address of ptr: " << ptr << endl;
    cout << "Value of ptr: " << *ptr << endl;
    cout << "Address of ptr: " << &ptr << endl;

    cout << endl
         << endl
         << endl;
    cout << "copyPtr" << endl;
    cout << "Address of copyPtr: " << copyPtr << endl;
    cout << "Value of copyPtr: " << *copyPtr << endl;
    cout << "Address of copyPtr: " << &copyPtr << endl;

    // cout<< "*, +, -, /, %, ++"<<endl;
    // cout<<"Value of *ptr * 2: "<<*ptr * 2<<endl;
    // cout<<"Value of *ptr + 2: "<<*ptr + 2<<endl;
    // cout<<"Value of *ptr - 2: "<<*ptr - 2<<endl;
    // cout<<"Value of *ptr / 2: "<<*ptr / 2<<endl;
    // cout<<"Value of *ptr % 2: "<<*ptr % 2<<endl;

    // cout<<endl<<endl<<endl;
    // cout<< "Post increment operator: ++"<<endl;
    // cout<<"Value of *ptr: "<<*ptr<<endl;
    // cout<<"Value of *ptr++: "<<*ptr++<<endl;
    // cout<<"Value of *ptr: "<<*ptr<<endl;
    // cout<< "Post increment operator: ++"<<endl;

    // cout<<endl<<endl<<endl;
    // cout<< "Pre increment operator: ++"<<endl;
    // cout<<"Value of *ptr: "<<*ptr<<endl;
    // cout<<"Value of ++*ptr: "<<++*ptr<<endl;
    // cout<<"Value of *ptr: "<<*ptr<<endl;
    // cout<< "Pre increment operator: ++"<<endl;

    // cout<<endl<<endl<<endl;
    // cout<< "Post decrement operator: --"<<endl;
    // cout<<"Value of *ptr: "<<*ptr<<endl;
    // cout<<"Value of *ptr--: "<<*ptr--<<endl;
    // cout<<"Value of *ptr: "<<*ptr<<endl;
    // cout<< "Post decrement operator: --"<<endl;

    // cout<<endl<<endl<<endl;
    // cout<< "Pre decrement operator: --"<<endl;
    // cout<<"Value of *ptr: "<<*ptr<<endl;
    // cout<<"Value of --*ptr: "<<--*ptr<<endl;
    // cout<<"Value of *ptr: "<<*ptr<<endl;
    // cout<< "Pre decrement operator: --"<<endl;

    return 0;
}
