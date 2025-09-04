// To check Whether a number is divisible by 5 and 11 or not.
#include<iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter a number";
    cin >> num;
    if(num%5==0 || num%11==0)
    {
        cout << " is divisible by both 5 & 11";
    }
    else
    {
        cout << "is not divisible by both 5 & 11";
    }
    return 0;
}