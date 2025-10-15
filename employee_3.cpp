// Define a structure employee with fields :id, name and salary. display details of employees with salary >50,000.
#include<iostream>
using namespace std;
struct employee{
    int id;
    string name;
    int salary;
};
employee input(){
    employee a;
    cout <<"id :"<<endl;
    cin>>a.id;
    cout <<"name :"<<endl;
    getline(cin,a.name);
    cout <<"salary :"<<endl;
    cin>>a.salary;
    return a;
}
int main()
{
    employee a[6];
    for(int i=0;i<6;i++){
    a[i] = input();
    }
    for(int i=0;i<6;i++)
    {
        if(a[i].salary>50000)
        {
            cout <<"id = "<<a[i].id<<endl;
            cout <<"name = "<<a[i].name<<endl;
            cout <<"salary = "<<a[i].salary<<endl;
        }
    }
    return 0;
}