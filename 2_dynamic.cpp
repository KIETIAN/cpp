//	Demonstrate dynamic_cast by creating a base class Animal and derived classes Dog and Cat. Use dynamic_cast to check if a base class pointer actually points to a Dog or Cat object.
#include <iostream>
using namespace std;

class Animal {
public:
    virtual void sound() {
        cout << "Some animal sound" << endl;
    }
};

class Dog : public Animal {
public:
    void sound() override {
        cout << "Woof Woof" << endl;
    }
};

class Cat : public Animal {
public:
    void sound() override {
        cout << "Meow Meow" << endl;
    }
};

int main() {
    Animal* a1 = new Dog();
    Animal* a2 = new Cat();

    if (Dog* d = dynamic_cast<Dog*>(a1)) {
        cout << "a1 is a Dog: ";
        d->sound();
    }

    if (Cat* c = dynamic_cast<Cat*>(a2)) {
        cout << "a2 is a Cat: ";
        c->sound();
    }

    if (Dog* d = dynamic_cast<Dog*>(a2)) {
        cout << "a2 is a Dog: ";
        d->sound();
    } else {
        cout << "a2 is not a Dog" << endl;
    }

    delete a1;
    delete a2;
    return 0;
}