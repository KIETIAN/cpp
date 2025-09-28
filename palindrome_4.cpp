// create a function to check if a string is palindrone.
#include<iostream>
using namespace std;
bool palindrome(char a[])
{
    int start=0,end=strlen(a)-1;
    while (a[start]<a[end])
    {
        if(start!=end)
        {return false;  }
        start++;
        end--;
    }
    return true;
}
int main()
{
    char b[70];
    cout <<"Enter a string:";
    cin>>b;
    if(palindrome(b))
    {
        cout <<b<<" is a palindrome";
    }
    else 
    {
        cout <<b<<" is not a palindrome";
    }
    return 0;
}