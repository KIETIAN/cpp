// Create a class University, derive College from it, and then derive Student from College. Each class should have its own details and display function.
#include<iostream>
using namespace std;
class University
{                               // base class
    public:
        string u_name;

        void inputUniversity()
        {
            cout <<"Enter university name = "<<endl;
            getline(cin,u_name);
        }

        void displayUniversity()
        {
            cout <<"university = "<<u_name<<endl;
        }
};
class college : public University
{                                       // first derived class
    public:
        string c_name;

        void inputCollege()
        {
            cout<<"Enter a college name : "<<endl;
            getline(cin,c_name);
        }

        void displayCollege()
        {
            cout <<"college = "<<c_name<<endl;
        }
};
class student : public college 
{
    public:
    string s_name;
    int r_no;

        void inputStudent()
        {
            cout <<"Enter the name = "<<endl;
            getline(cin,s_name);
            cout <<"Enter the roll no = "<<endl;
            cin>>r_no;
        }

        void displayStudent()
        {
            cout <<"student name = "<<s_name<<endl;
            cout <<"roll no = "<<r_no<<endl;
        }
};

int main()
{
    student s;

     s.inputUniversity();
    s.inputCollege();
    s.inputStudent();


      s.displayUniversity();
    s.displayCollege();
    s.displayStudent();

    return 0;
}