// Write a program with a class Complex that represents complex numbers. Initialize objects using a constructor and add two complex numbers.
#include <iostream>
using namespace std;

class Complex {
    int real, imag;
public:
    Complex(int r = 0, int i = 0) {
        real = r;
        imag = i;
    }
    Complex add(Complex c) {
        return Complex(real + c.real, imag + c.imag);
    }
    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex c1(3, 4), c2(5, 7);
    Complex c3 = c1.add(c2);

    cout << "First: "; c1.display();
    cout << "Second: "; c2.display();
    cout << "Sum: "; c3.display();

    return 0;
}