// company gives of 10% of salary if the employes has completed more than 5 years int the company. WAP that uses arithmetic and relational operators to calculate the bonus.
#include<iostream>
using namespace std;
int main()
{
    int salary,year;
    float new_salary=0,bonus=0;
    cout << "Enter a salary;"<< endl;
    cin >> salary;
    cout << "Enter a year";
    cin >> year;
    if(year>=5)
    {
        bonus= salary * 0.10;
        new_salary = salary + bonus;
        cout << "company gives bonus" << bonus << endl;
        cout << "total salary with bonus" << new_salary << endl;
    }
    else 
    {
       
        cout << "no bonus "<< salary;
    }
    return 0;
}