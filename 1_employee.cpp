//	Create an abstract class Employee with pure virtual function calculatePay(). Derive HourlyEmployee and SalariedEmployee that implement the function differently.
#include <iostream>
using namespace std;

class Employee {
public:
    virtual void calculatePay() = 0;
};

class HourlyEmployee : public Employee {
    int hours;
    int rate;
public:
    HourlyEmployee(int h, int r) {
        hours = h;
        rate = r;
    }
    void calculatePay() override {
        cout << "Hourly Employee Pay = " << hours * rate << endl;
    }
};

class SalariedEmployee : public Employee {
    int salary;
public:
    SalariedEmployee(int s) {
        salary = s;
    }
    void calculatePay() override {
        cout << "Salaried Employee Pay = " << salary << endl;
    }
};

int main() {
    Employee* e;

    HourlyEmployee h(40, 200);
    SalariedEmployee s(50000);

    e = &h;
    e->calculatePay();

    e = &s;
    e->calculatePay();

    return 0;
}