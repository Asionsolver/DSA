#include<iostream>
#include<string.h>
#include<algorithm>

using namespace std;

int main(){
    char name[100];

    cout<<"Enter your name: ";
    // cin>>name;
    // getline(cin,50, name);

    cin.getline(name, 50);

    cout<<"Your name is "<<name<<"."<<endl;
    // for (int i = 0; i <4; i++)
    // {
    // cout<<"Your name is "<<name[i]<<endl;
        
    // }
    
    // int value = (int)name[4];
    // cout<<"Value is "<<value;


    return 0;
}