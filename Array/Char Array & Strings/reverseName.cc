#include<iostream>
#include <algorithm>
using namespace std;

int getLength(char name[]){
    int length =0;

    int i=0;
    while (name[i]!='\0')
    {
        length++;
        i++;
    }

    return length;
}

void reverseFun(char name[], int stringLength){
    int i =0;
    int j = stringLength-1;
    while (i<=j)
    {
        swap(name[i],name[j]);
        i++;
        j--;
    }
           
    
}

int main(){

    char name[40]="ashis";
    cout<<"The initial name is "<<name<<endl;
    int stringLength = getLength(name);
    reverseFun(name, stringLength);
    cout<<"The reverse name is "<<name<<endl;

    return 0;
}