#include<iostream>
#include <algorithm>
using namespace std;
void replaceSpace(char sentence[]){
    int i=0;
    while (sentence[i]!='\0')
    {
        if (sentence[i]==' ')
        {
            sentence[i]='@';
        }
        i++;
        
    }
    
}

int main(){
    // char sentence[]="I love my country very much";
    char sentence[]="Hard work is key of achievements";
   replaceSpace(sentence);
    cout<<"The reverse sentence is: "<< sentence;

    return 0;
}