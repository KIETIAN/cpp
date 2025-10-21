// A class Employee stores name, designation, and salary. Write a program to read details of employees and display the one with the highest salary.
#include <iostream>
using namespace std;

class Employee {
    string name, designation;
    double salary;
public:
    void input() {
        cin >> name >> designation >> salary;
    }
    double getSalary() {
        return salary;
    }
    void display() {
        cout << name << " " << designation << " " << salary << endl;
    }
};

int main() {
    int n;
    cout << "Enter number of employees: ";
    cin >> n;

    Employee e[n];
    for (int i = 0; i < n; i++) e[i].input();

    int maxIndex = 0;
    for (int i = 1; i < n; i++) {
        if (e[i].getSalary() > e[maxIndex].getSalary())
            maxIndex = i;
    }

    cout << "Employee with highest salary:\n";
    e[maxIndex].display();

    return 0;
}