// A class Fraction has numerator and denominator. Overload the / operator to divide two fractions.
#include <iostream>
using namespace std;

class Fraction {
    int numerator;
    int denominator;

public:
    Fraction(int n = 0, int d = 1) {
        numerator = n;
        denominator = d;
    }

    Fraction operator/(const Fraction &f) {
        // Division: a/b ÷ c/d = a*d / b*c
        Fraction result;
        result.numerator = numerator * f.denominator;
        result.denominator = denominator * f.numerator;

        // Optional: handle negative denominator
        if (result.denominator < 0) {
            result.denominator = -result.denominator;
            result.numerator = -result.numerator;
        }

        return result;
    }

    void display() const {
        cout << numerator << "/" << denominator << endl;
    }
};

int main() {
    Fraction f1(3, 4);
    Fraction f2(2, 5);

    Fraction f3 = f1 / f2;

    cout << "First fraction: ";
    f1.display();
    cout << "Second fraction: ";
    f2.display();
    cout << "Division result: ";
    f3.display();

    return 0;
}