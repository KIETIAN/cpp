// WAP to rverse a number using loop.
#include<iostream>
using namespace std;
int main()
{
    int number,rev=0,temp;
    cout <<"enter a number:";
    cin>>number;
    while(number>0)
    {
    temp=number%10;
    rev = (rev*10)+temp;
    number=number/10;
}
 cout << "Reversed number: " << rev;
    return 0;
}