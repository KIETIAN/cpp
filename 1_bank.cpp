#include <iostream>
using namespace std;

class Bank {
    static float interestRate;

public:
    static void setInterestRate(float rate) {  // renamed function
        interestRate = rate;
    }

    void displayInterestRate() const {
        cout << "Interest Rate: " << interestRate << "%" << endl;
    }
};

// Initialize static member
float Bank::interestRate = 0;

int main() {
    Bank b1, b2, b3;

    Bank::setInterestRate(5.5);

    b1.displayInterestRate();
    b2.displayInterestRate();
    b3.displayInterestRate();

    Bank::setInterestRate(6.0);

    b1.displayInterestRate();
    b2.displayInterestRate();
    b3.displayInterestRate();

    return 0;
}