//WAP to find the length of a string without using built in function.
#include<iostream>
using namespace std;
int main()
{
 string str;
 cin>>str;
 int length=0;
    for(int i=0;str[i] != '\0';i++)
    {
        length++;
    }
   cout <<"length of string is : "<<length;
   return 0;
}