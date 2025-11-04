// Write a program where class Student has static data member totalStudents. Increment it whenever a new student object is created
#include <iostream>
using namespace std;

class Student {
    string name;
    int roll;
    static int totalStudents;

public:
    Student(string n, int r) {
        name = n;
        roll = r;
        totalStudents++;
    }

    void display() const {
        cout << "Name: " << name << ", Roll: " << roll << endl;
    }

    static void showTotalStudents() {
        cout << "Total Students: " << totalStudents << endl;
    }
};

// Initialize static member
int Student::totalStudents = 0;

int main() {
    Student s1("Alice", 101);
    Student s2("Bob", 102);

    s1.display();
    s2.display();

    Student::showTotalStudents();

    Student s3("Charlie", 103);
    s3.display();

    Student::showTotalStudents();

    return 0;
}