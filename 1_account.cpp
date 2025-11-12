//	Create a class Account with attributes accountNumber and balance. Derive two classes: SavingsAccount and CurrentAccount with their specific features.
// one base class many derived class.
#include <iostream>
using namespace std;

// Base class
class Account {
protected:
    int accountNumber;
    double balance;
public:
    void inputAccount() {
        cout << "Enter Account Number: ";
        cin >> accountNumber;
        cout << "Enter Balance: ";
        cin >> balance;
    }
    void displayAccount() {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
    }
};

// Derived class 1
class SavingsAccount : public Account {
private:
    double interestRate;
public:
    void inputSavings() {
        cout << "Enter Interest Rate (%): ";
        cin >> interestRate;
    }
    void displaySavings() {
        displayAccount();
        cout << "Interest Rate: " << interestRate << "%" << endl;
    }
};

// Derived class 2
class CurrentAccount : public Account {
private:
    double overdraftLimit;
public:
    void inputCurrent() {
        cout << "Enter Overdraft Limit: ";
        cin >> overdraftLimit;
    }
    void displayCurrent() {
        displayAccount();
        cout << "Overdraft Limit: " << overdraftLimit << endl;
    }
};

int main() {
    SavingsAccount s;
    CurrentAccount c;

    cout << "- Enter Savings Account Details -" << endl;
    s.inputAccount();
    s.inputSavings();

    cout << "- Enter Current Account Details -" << endl;
    c.inputAccount();
    c.inputCurrent();

    cout << "- Savings Account Details -" << endl;
    s.displaySavings();

    cout << "- Current Account Details -" << endl;
    c.displayCurrent();

    return 0;
}