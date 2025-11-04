// A class Company has employee name and salary, but a static member companyName. Show that all employees share the same company name.
#include <iostream>
using namespace std;

class Company {
    string employeeName;
    double salary;
    static string companyName;

public:
    Company(string name, double sal) {
        employeeName = name;
        salary = sal;
    }

    static void setCompanyName(string name) {
        companyName = name;
    }

    void display() const {
        cout << "Employee: " << employeeName 
             << ", Salary: " << salary 
             << ", Company: " << companyName << endl;
    }
};

// Initialize static member
string Company::companyName = "";

int main() {
    Company::setCompanyName("TechCorp");

    Company e1("Alice", 50000);
    Company e2("Bob", 60000);
    Company e3("Charlie", 55000);

    e1.display();
    e2.display();
    e3.display();

    // Change company name
    Company::setCompanyName("InnoTech");

    e1.display();
    e2.display();
    e3.display();

    return 0;
}