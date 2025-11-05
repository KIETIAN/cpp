// Create a class Complex to represent complex numbers. Overload the + operator to add two complex numbers.
#include <iostream>
using namespace std;

class Complex {
    double real;
    double imag;

public:
    Complex(double r = 0, double i = 0) {
        real = r;
        imag = i;
    }

    Complex operator+(const Complex &c) {
        return Complex(real + c.real, imag + c.imag);
    }

    void display() const {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex c1(4, 5);
    Complex c2(3, 2);

    Complex c3 = c1 + c2;

    cout << "First complex number: ";
    c1.display();
    cout << "Second complex number: ";
    c2.display();
    cout << "Sum: ";
    c3.display();

    return 0;
}