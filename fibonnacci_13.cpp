// write a function to find and return the nth fibonacci series.
#include<iostream>
using namespace std;
int fibonacci(int num)
{
    int num1=0,num2=1,num3;
    for(int i=2;i<=num;i++)
    {
        num3=num1+num2;
        num1=num2;
        num2=num3;
      
    }
    return num3;
}
int main()
{
    int number;
    cout <<"enter a fibonacci series: ";
    cin>>number;

    cout <<number<<"series is"<<fibonacci(number);
    return 0;
}