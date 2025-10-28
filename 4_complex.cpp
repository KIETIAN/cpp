// Write a class Complex and use a friend function to add two complex numbers.
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

    void display() const {
        cout << real << " + " << imag << "i" << endl;
    }

    friend Complex addComplex(const Complex &c1, const Complex &c2);
};

Complex addComplex(const Complex &c1, const Complex &c2) {
    return Complex(c1.real + c2.real, c1.imag + c2.imag);
}

int main() {
    Complex c1(3.5, 2.5);
    Complex c2(1.5, 4.0);

    cout << "First complex number: ";
    c1.display();
    cout << "Second complex number: ";
    c2.display();

    Complex sum = addComplex(c1, c2);
    cout << "Sum: ";
    sum.display();

    return 0;
}