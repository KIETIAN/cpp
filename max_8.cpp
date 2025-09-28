//create a function findmax () that takes three number and return the largest.
#include<iostream>
using namespace std;
int findmax(int num1, int num2, int num3)
{
    if(num1>num2 && num1>num3)
    {
       return num1;
    }
    else if(num2>num3)
    {
        return num2;
    }
    else 
    {
        return num3;
    }
    return num1,num2,num3;
}
int main()
{
    int a,b,c;
    cout <<"Enter the number : ";
    cin>>a>>b>>c;

    cout <<"largest number is  : "<<findmax(a,b,c);
    return 0;
}