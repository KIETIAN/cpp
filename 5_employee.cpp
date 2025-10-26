// 15.	A class Employee contains id and salary. Show how a const object restricts access only to const functions.A class Employee contains id and salary. Show how a const object restricts access only to const functions.
#include <iostream>
using namespace std;

class Employee {
    int id;
    double salary;

public:
    Employee(int i, double s) {
        id = i;
        salary = s;
    }

    int Id() const {
        return id;
    }

    double Salary() const {
        return salary;
    }

    void Salary(double s) {
        salary = s;
    }

    void display() const {
        cout << "ID: " << id <<endl<<"Salary: " << salary << endl;
    }
};

int main() {
    const Employee e1(1, 5000);

    cout << "Employee ID: " << e1.Id() << endl;
    cout << "Employee Salary: " << e1.Salary() << endl;
    e1.display();

    return 0;
}