// WAP that keeps asking the users to enter a password until the correct password is entered.
#include<iostream>
using namespace std;
#include<string.h>
int main()
{
    string password,correct_pass="yash";
    cout <<"Enter a string=";
    cin>>password;
    while (password!=correct_pass)
    {
        cout<<"wrong password";
        cin>>password;
    }
     cout<<"same password";
     return 0;
}

