#include<iostream>
#include <vector>
#include <algorithm>
using namespace std; 

int main(){

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

    int a = 5;

    // pointer create
    int* ptr = &a;

    char ch = 'A';

    // pointer create
    char* ptr1 = &ch;

    double d = 5.5;

    // pointer create
    double* ptr2 = &d;

    // size of pointer
    cout<<"Size of int pointer: "<<sizeof(ptr)<<endl; // Size of int pointer: 4
    cout<<"Size of char pointer: "<<sizeof(ptr1)<<endl; // Size of char pointer: 4
    cout<<"Size of double pointer: "<<sizeof(ptr2)<<endl; // Size of double pointer: 4


    return 0;
}

