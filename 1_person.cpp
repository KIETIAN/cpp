// Create a base class Person with data members name and age. Derive a class Student that adds rollNumber and marks. Write a program to display details of a student.
#include <iostream>
using namespace std;
class Person {          // Base class
    protected:
    string name;
    int age;
public:
    Person(string n, int a) 
    {
        name = n;
        age = a;
    }
};
class Student : public Person {       // derived class
    int rollNumber;
    double marks;
public:
    Student(string n, int a, int r, double m)
        : Person(n, a)  // call base class constructor
    {
        rollNumber = r;
        marks = m;
    }

    void display() {
        cout <<"Name: "<<name<<endl<<"Age: "<<age<<endl<<"Roll Number: "<<rollNumber<<endl<< "Marks: " << marks << endl;
    }
};
int main() {
    Student s("Vaibhav Kumar", 22, 101, 89.5); // S is a student object
    s.display();
 return 0;
}