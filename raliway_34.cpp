// a railway system
#include<iostream>
using namespace std;

int main()
{
    int choice;
    cout << "Enter your choice: ";
    cin >> choice;

    switch(choice)
    {
        case 1:
            cout << "Sleeper Class ticket.";
            break;

        case 2:
            cout << "AC Class ticket.";
            break;

        case 3:
            cout << "General Class ticket.";
            break;

        case 4:
            cout << "Exiting the booking system.";
            break;

        default:
            cout << "Invalid choice!";
    }

    return 0;
}