// A currency converter
#include<iostream>
using namespace std;

int main()
{
    int choice;
    double amount, convertedAmount;
    cout << "Enter your choice: ";
    cin >> choice;

    switch(choice)
    {
        case 1:
            cout << "Enter amount in USD: ";
            cin >> amount;
            convertedAmount = amount * 83.0;
            cout << amount << " USD = " << convertedAmount << " INR";
            break;

        case 2:
            cout << "Enter amount in INR: ";
            cin >> amount;
            convertedAmount = amount / 83.0; 
            cout << amount << " INR = " << convertedAmount << " USD";
            break;

        case 3:
            cout << "Enter amount in INR: ";
            cin >> amount;
            convertedAmount = amount / 90.0; 
            cout << amount << " INR = " << convertedAmount << " Euro";
            break;

        case 4:
            cout << "Exiting currency converter.";
            break;

        default:
            cout << "Invalid choice!";
    }

    return 0;
}