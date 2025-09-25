// write a function is armstrong to check weather a number is armstrong.
#include<iostream>
using namespace std;
bool armstrong(int n)
{   int number =n;
    int sum=0,r;
    while (n>0)
    {
        r =n%10;
        sum = sum+(r*r*r);
        n=n/10;
       
    }
        return (sum == number);
} 
int main()
{
    int a;
    cout <<"Enter a Armstrong number:";
    cin>>a;
    if(armstrong(a))
    {
        cout<<" is a armstrong.";
    }
    else 
    {
        cout<<" is not a armstrong.";
    }
        return 0;
}