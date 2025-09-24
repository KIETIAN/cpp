#include<iostream>
using namespace std;
#include<string.h>
int main()
{
    string password,correct_pass="yash";
    cout <<"Enter a string=";
    for(int i=0;i<=5;i++)
    {
        
        cin>>password;
       
        if(password==correct_pass)
        {
            cout <<"same password";
            break;
        } cout<<"wrong password";
    }
     return 0;
}