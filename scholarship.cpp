// A Marksheet system that checks eligibility for scholarship.
#include<iostream>
using namespace std;
int main()
{
    int marks, attendance;
    cout << "Enter a marks :"<<endl;
    cout <<"Enter a attendance:"<<endl;
    cin >> marks,attendance;
    if(marks>=90 && attendance>=75)
    {
        cout << "scholarship is available."<< endl;
    }
    else{
        cout << "Not Eligible."<< endl;
    }
    return 0;
}