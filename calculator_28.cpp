// A simple calculator program using switch case user enter the two numberand choose operation.
#include<iostream>
using namespace std;
int main()
{
    int a,b,c=0,operation;
    cout <<"enter a number one :";
    cin>>a;
    cout <<"Enter a number Two:"<<endl;
    cin>>b;
    cout <<"Enter the choice of operation"<<endl;
    cin>>operation;
    switch(operation)
    {
        case 1:
        c=a+b;
        cout <<"Adding="<<c;
        break;
        
        case 2:
        c=a-b;
        cout <<"subtract="<<c<<endl;
        break;

        case 3:
        c=a*b;
        cout <<"multiplication="<<c<<endl;
        break;

        case 4:
        c=a/b;
        cout <<"divide="<<c<<endl;
        break;

        default:
        cout <<"not a operation";
    }
    return 0;
}