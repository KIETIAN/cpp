// A program to find the factorial of a given number between using a loop.
#include<iostream>
using namespace std;
int main()
{
    int number,fact=1;
    cout<<"Enter a factorial number:";
    cin>> number;
    for(int i=1;i<=number;i++)
    {
        fact =fact*i;
    }
    cout<<"Factorial number is : "<<fact<<endl;
    return 0;

}