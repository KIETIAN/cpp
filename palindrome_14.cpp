// input a string and check if it is a palindrome.
#include<iostream>
using namespace std;
int main()
{
    string str;
    cin>>str;
    int n=str.length();
    bool palindrome =true;
    for (int i=0;i<n/2;i++)
    {
        if(str[i]!=str[n-1-i])
        {
            palindrome = false;
            break;
        }
    }
    if(palindrome)
    {
        cout <<" is palindrome "<<endl;
    }
    else 
    cout <<" is not a palindrome";

    return 0;
}