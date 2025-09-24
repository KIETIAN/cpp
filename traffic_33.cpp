// A traffic light system.
#include<iostream>
using namespace std;

int main()
{
    int signal;
    cout << "Enter traffic light number: ";
    cin >> signal;

    switch(signal)
    {
        case 1:
            cout << "Red → STOP!";
            break;

        case 2:
            cout << "Yellow → READY!";
            break;

        case 3:
            cout << "Green → GO!";
            break;

        default:
            cout << "Invalid input!";
    }

    return 0;
}