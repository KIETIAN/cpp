// A grading system where users enters marks and a switch decided grades.
#include<iostream>
using namespace std;
int main()
{
    int marks,number;
   cout <<"Enter the number:";
    cin>>number;
    cout<<"Enter a marks";
    cin>>marks;
    switch(number)
    {
        case 1:
        if(marks>=90)
        cout<<"Grade A";
        break;

        case 2:
        if(marks>=75 && marks<90)
        cout<<"Grade B";
        break;

        case 3:
        if(marks>=50 && marks<75)
        cout <<"Grade C";
        break;

        case 4:
        if(marks<50)
        cout <<"fail";
        break;

        default:
        cout <<"invalid marks";
    }
    return 0;

}