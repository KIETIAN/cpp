#include<iostream>
using namespace std;
int main()
{
    int num;
    int balance = 1000;
    int amount;

    cout <<"ATM Menu:\n";
    cout <<"1. Withdraw\n";
    cout <<"2. Deposit\n";
    cout <<"3. Balance Enquiry\n";
    cout <<"4. Exit\n";
    cout <<"Enter your choice: ";
    cin >> num;

    switch(num)
    {
        case 1:
            cout << "Enter amount to withdraw: ";
            cin >> amount;
            if(amount <= balance) {
                balance -= amount;
                cout << "Withdrawal successful. Remaining Balance = " << balance;
            } else {
                cout << "Insufficient balance!";
            }
            break;

        case 2:
            cout << "Enter amount to deposit: ";
            cin >> amount;
            balance += amount;
            cout << "Deposit successful. New Balance = " << balance;
            break;

        case 3:
            cout << "Your Balance = " << balance;
            break;

        case 4:
            cout <<  "Exit!";
            break;

        default:
            cout <<"Invalid choice!";
    }
    return 0;
}