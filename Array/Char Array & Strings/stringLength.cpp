#include<iostream>
#include <string.h>
using namespace std;

int main(){
    char name[100] = "Ashis";
    

    int length =0;

    int i=0;
    while (name[i]!='\0')
    {
        length++;
        i++;
    }

    cout<<"The length of name is "<<length<<endl;

    // Predefine function
    cout<<"Using predefine function calculate the length of name is "<<strlen(name);
    
    




    return 0;
}