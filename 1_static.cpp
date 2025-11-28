// Demonstrate static_cast by converting a double to int, and also by safely casting between base and derived class pointers.
#include <iostream>
using namespace std;

class Base {
public:
    virtual void show() {
        cout << "Base class" << endl;
    }
};

class Derived : public Base {
public:
    void show() override {
        cout << "Derived class" << endl;
    }
};

int main() {
    double d = 9.87;
    int i = static_cast<int>(d);
    cout << "Double value: " << d << endl;
    cout << "After static_cast to int: " << i << endl;

    Derived obj;
    Base* basePtr = static_cast<Base*>(&obj);
    basePtr->show();

    return 0;
}