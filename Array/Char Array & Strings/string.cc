#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compareString(string a, string b)
{
    if (a.length() != b.length())
    {
        return false;
    }
    else
    {

        int j = 0;
        for (int i = 0; i < a.length(); i++)
        {
            if (a[i] != b[i])
            {
                return false;
            }
            else
            {
                j++;
            }
        }
    }
    return true;
}

int main()
{

    // string str ;
    // // cin>>str;
    // getline(cin, str);
    // cout<<"String Length: "<<str.length()<<endl;
    // cout<<"isEmpty: "<< str.empty()<<endl;
    // str.push_back('g');s
    // cout<<"string: "<<str<<endl;
    // cout<<str.substr(0,4)<<endl;
    // cout<<str.find("b") == std:string::npos<<endl;

    string a = "ashis";
    string b = "ashfis";

    // if (a.compare(b) == 0)
    // {
    //     cout<<"a and b are exactly same string"<<endl;
    // }else{
    //     cout<<"a and b are not same"<<endl;
    // }

    // if (compareString(a, b) == 1)
    // {
    //     cout << "a and b are exactly same string" << endl;
    // }
    // else
    // {
    //     cout << "a and b are not same" << endl;
    // }

    // char arr [10];
    // string str [10];

    // arr[0] = 'a';
    // arr[1] = 'b';
    // arr[2] = '\0';
    // arr[3] = 'a';

    // str[0] = 'a';
    // str[1] = 'b';
    // str[2] = '\0';
    // str[3] = 'a';

    // cout<<arr[0]<<endl<<arr[1]<<endl<<arr[2]<<endl<<arr[3]<<endl;
    // cout<<str[0]<<endl<<str[1]<<endl<<str[2]<<endl<<str[3]<<endl;

    string s;
    // cin>>s; // only if the given string has no spaces
    getline(cin, s);

    cout << s << endl;

    return 0;
}