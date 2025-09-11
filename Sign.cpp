// To check weather a given number is Positive, negative, or Zero.
#include<iostream>
using namespace std;
int main()
{
    int Number;
    cout << "Enter the Number\n";
    cin >> Number;
    if(Number>0)
    {
        cout << "It is a positive Number\n";
    }
    else if(Number<0)
    {
        cout << "It is a negative number\n";
    }
    else
    {
        cout << "It is a zero";
    }
    return 0;
}