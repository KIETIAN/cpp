// To calculate grade of a student based on marks.
#include<iostream>
using namespace std;
int main()
{
    int marks;
    cout << "Enter a Mark:";
    cin >> marks;
    if(marks>=90)
    {
        cout << "you will be a Grade A."<<endl;
    }
    else if(marks>=75)
    {
        cout << "you will be a Grade B."<<endl;
    }
    else if(marks>=50)
    {
        cout << "you will be a Grade C."<<endl;
    }
    else if(marks<50)
    {
        cout << "you will be a fail."<<endl;
    }
    return 0;
}
