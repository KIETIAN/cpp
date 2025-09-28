//write a function touppercase that converts a string into uppercase.
#include<iostream>
using namespace std;
char uppercase(char arr[])
{
    for(int i=0;arr[i]!='\0';i++)
    {
        arr[i]=toupper(arr[i]);
    }
    
}
int main()
{
    char str[100];
    cout <<"Enter the string : ";
    cin.getline(str, 100);
     uppercase(str);
     cout <<"uppercase string: "<<str;
     return 0;
}