// Define a class Animal, derive Mammal from it, and then derive Dog from Mammal. Demonstrate constructor calling order.
#include <iostream>
using namespace std;
class Animal {
public:
    Animal() {
        cout << "Animal constructor called" << endl;
    }
};
class Mammal : public Animal {
public:
    Mammal() {
        cout << "Mammal constructor called" << endl;
    }
};
class Dog : public Mammal {
public:
    Dog() {
        cout << "Dog constructor called" << endl;
    }
};

int main() {
    Dog d; 
    return 0;
}