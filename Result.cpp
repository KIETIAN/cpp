//A student passes an exam if marks>=40 , else fail.
#include<iostream>
using namespace std;
int main()
{
    int marks;
    cout << "Enter the marks:";
    cin >> marks;
    if(marks >=40)
    {
        cout << "passed in Exam";
    }
    else
    {
        cout << "Failed in Exam";
    }
    return 0;
}