//To check Weather a given number is even or odd.
#include<iostream>
using namespace std;
int main()
{
    int number;
    cout << "Enter the number:";
    cin >> number;
    if(number%2==0)
    {
        cout << "It is a Even Number\n";
    }
    else
    {
        cout << "It is a Odd Number";
    }
    return 0;
}