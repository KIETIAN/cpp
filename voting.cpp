// To check if a person is eligible to vote (age>=18) 
#include<iostream>
using namespace std;
int main()
{
    int age;
    cout << "Enter the Age:";
    cin >> age;
        if(age>=18)
        {
            cout<<"This age is eligible for voting\n";
        }
        else
        {
            cout<<"This age is not eligible for voting\n";
        }
    return 0;
}