// Create a class BankAccount with data members: account number, name, and balance. Write member functions to deposit and withdraw money. Create objects for 3 customers and perform transactions.
#include <iostream>
using namespace std;

class BankAccount {
private:
    int accountNumber;
    string name;
    double balance;

public:
    BankAccount(int accNo, string accName, double bal) {
        accountNumber = accNo;
        name = accName;
        balance = bal;
    }

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited " << amount << " into account " << accountNumber << endl;
        } else {
            cout << "Invalid deposit amount!" << endl;
        }
    }

    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawn " << amount << " from account " << accountNumber << endl;
        } else {
            cout << "Invalid withdrawal amount or insufficient balance!" << endl;
        }
    }

    void display() {
        cout << "Account No: " << accountNumber
             << " | Name: " << name
             << " | Balance: " << balance << endl;
    }
};

int main() {
    BankAccount c1(1001, "Alice", 5000);
    BankAccount c2(1002, "Bob", 3000);
    BankAccount c3(1003, "Charlie", 10000);

    c1.deposit(1500);
    c1.withdraw(2000);

    c2.deposit(1000);
    c2.withdraw(5000);

    c3.withdraw(2500);

    cout << "\nFinal Account Details:\n";
    c1.display();
    c2.display();
    c3.display();

    return 0;
}