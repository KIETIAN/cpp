// WAfunction to calculate the greatest common divisor of two numbers.
#include<iostream>
using namespace std;
int GCD(int n1, int n2)
{
    while(n2!=0)
    {
        int num = n2;
        n2 = n1%n2;
        n1 = num;
    }
    return n1;
}
int main ()
{
    int a,b;
    cout <<"Enter a number a: \n"<<"Enter a number b: ";

    cin>> a>>b;
    cout <<"GCD number is : "<<GCD(a,b);
    return 0;
}