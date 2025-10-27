//  Define two classes Student and Exam. Use a friend function to access private marks of Student in Exam for grade calculation.
#include <iostream>
using namespace std;

class Exam {
    string subject;

public:
    Exam(string sub) {
        subject = sub;
    }

    friend void calculateGrade(class Student s, Exam e);
};

class Student {
    string name;
    int marks;

public:
    Student(string n, int m) {
        name = n;
        marks = m;
    }

    friend void calculateGrade(Student s, Exam e);
};

void calculateGrade(Student s, Exam e) {
    char grade;
    if (s.marks >= 90)
        grade = 'A';
    else if (s.marks >= 75)
        grade = 'B';
    else if (s.marks >= 50)
        grade = 'C';
    else
        grade = 'F';

    cout << "Student: " << s.name << ", Subject: " << e.subject
         << ", Marks: " << s.marks << ", Grade: " << grade << endl;
}

int main() {
    Student s1("Alice", 85);
    Exam e1("Mathematics");

    calculateGrade(s1, e1);

    Student s2("Bob", 45);
    Exam e2("Physics");

    calculateGrade(s2, e2);

    return 0;
}