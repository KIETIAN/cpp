// fibonacci series using loop. 0 1 1 2 3 5 8
#include<iostream>
using namespace std;
int main()
{
    int a=0,b=1,c;
     cout<<a<<" "<<b<<" ";
    for(int i=2;i<=10;i++)
   
    {
        c=a+b;
        a=b;                
        b=c;
       cout <<c<<" ";
    }
    return 0;
}
