//create a funcions that takes an array of intere and return the sum of even number.
#include<iostream>
using namespace std;
int sum(int n[],int size)
{
    int add=0;
    for (int i=0;i<=size;i++)
    {
        if(n[i]%2==0)
        {
            add=add+n[i];
        }
    }
    return add;
}
int main()
{
    int a;
    cout <<"Enter the size: ";
    cin>>a;
     int n[a];
     cout <<"enter the number";
     for (int i=0;i<a;i++)
     {
        cin>>n[i];
     }
     int result= sum(n,a);
     cout <<"sum of even number: "<<result;
    return 0;
}