// A class Time has hours and minutes. Overload the ++ operator to increment time by one minute.
#include <iostream>
using namespace std;

class BankAccount {
    double balance;

public:
    BankAccount(double b = 0) {
        balance = b;
    }

    bool operator>(const BankAccount &b) {
        return balance > b.balance;
    }

    void display() const {
        cout << "Balance: $" << balance << endl;
    }
};

int main() {
    BankAccount acc1(5000);
    BankAccount acc2(7500);

    cout << "Account 1: ";
    acc1.display();
    cout << "Account 2: ";
    acc2.display();

    if (acc1 > acc2)
        cout << "Account 1 has more balance than Account 2." << endl;
    else
        cout << "Account 2 has more balance than Account 1." << endl;

    return 0;
}