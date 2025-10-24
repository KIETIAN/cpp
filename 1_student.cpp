// Create a class Student with name and roll number. Create a const object and ensure that only constant member functions can be accessed.
#include <iostream>
using namespace std;

class Student {
    string name;
    int roll;

public:
    Student(string n, int r) {
        name = n;
        roll = r;
    }

    void display() const {
        cout << "Name: " << name << ", Roll: " << roll << endl;
    }

    void setName(string n) {
        name = n;
    }
};

int main() {
    const Student s1("Vaibhav", 11);

    s1.display();

    return 0;
}