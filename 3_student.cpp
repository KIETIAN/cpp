// Create a class Student with roll number, name, and marks. Write a function to calculate grade. Create objects for 3 students and display their results.#include <iostream>
#include<iostream>
using namespace std;

class Student {
    int roll;
    string name;
    int marks;
public:
    void input() {
        cin >> roll >> name >> marks;
    }
    char grade() {
        if (marks >= 90) return 'A';
        else if (marks >= 75) return 'B';
        else if (marks >= 50) return 'C';
        else return 'D';
    }
    void display() {
        cout << roll << " " << name << " " << marks << " Grade: " << grade() << endl;
    }
};

int main() {
    Student s[3];
    for (int i = 0; i < 3; i++) s[i].input();
    for (int i = 0; i < 3; i++) s[i].display();
    return 0;
}