// Create two classes Account and Loan. Use a friend function to check whether the account balance is sufficient for loan eligibility.
#include <iostream>
using namespace std;

class Loan {
    double requiredAmount;

public:
    Loan(double amt) {
        requiredAmount = amt;
    }

    friend void checkEligibility(class Account a, Loan l);
};

class Account {
    string name;
    double balance;

public:
    Account(string n, double b) {
        name = n;
        balance = b;
    }

    friend void checkEligibility(Account a, Loan l);
};

void checkEligibility(Account a, Loan l) {
    if (a.balance >= l.requiredAmount) {
        cout << a.name << " is eligible for the loan of " << l.requiredAmount << endl;
    } else {
        cout << a.name << " is NOT eligible for the loan of " << l.requiredAmount << endl;
    }
}

int main() {
    Account acc1("Alice", 50000);
    Loan loan1(30000);

    Account acc2("Bob", 20000);
    Loan loan2(25000);

    checkEligibility(acc1, loan1);
    checkEligibility(acc2, loan2);

    return 0;
}