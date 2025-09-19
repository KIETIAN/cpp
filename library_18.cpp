// A library isssue late fees.
#include<iostream>
using namespace std;
int main()
{
    int days,fine=0,students;
    cout<<"Enter number of students:";
    cin>>students;
    for(int i=1;i<=students;i++)
    {
         cout<<"Enter a days:";
    cin>>days;
        if(days>=1 && days<=5)
        {
        fine=days*2;
        }
        else if(days>5 && days<10)
        {
            fine=days*3;
        }
        else if(days==10)
        {
            fine=days*5;
        }
        else 
        {
            fine=0;
        }
        cout<<"late fees:"<<fine<<endl;
    }
    return 0;
}