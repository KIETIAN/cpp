// A class Employee has an overloaded function setData() to accept.
#include <iostream>
using namespace std;

class Employee {
    string name;
    int id;
    float salary;

public:

    void setData(string n, int i) {
        name = n;
        id = i;
        salary = 0;  
    }
    void setData(string n, int i, float s) {
        name = n;
        id = i;
        salary = s;
    }

    void display() {
        cout << "Employee Name: " << name << endl;
        cout << "Employee ID: " << id << endl;
        cout << "Employee Salary: " << salary << endl;
    }
};

int main() {
    Employee e1, e2;

    e1.setData("vaibhav ", 101);          
    e2.setData("yashu", 102, 55000.50f);  

    cout << "Employee 1 Details:" << endl;
    e1.display();

    cout << "\nEmployee 2 Details:" << endl;
    e2.display();

    return 0;
}