//A program where user enters a grade (A-F) and switch display remarks.
#include<iostream>
using namespace std;

int main()
{
    char grade;
    cout << "Enter grade (A-F): ";
    cin >> grade;

    switch(grade)
    {
        case 'A':
        case 'a':
            cout << "Excellent";
            break;

        case 'B':
        case 'b':
            cout << "Good";
            break;

        case 'C':
        case 'c':
            cout << "Average";
            break;

        case 'D':
        case 'd':
        case 'F':
        case 'f':
            cout << "Fail";
            break;

        default:
            cout << "Invalid grade!";
    }

    return 0;
}