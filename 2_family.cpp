// Create class father and mother with attributes. Derive child that inherits traits from both parents.
#include<iostream>
using namespace std;
class father
{
    protected:
    string name;
    int age ;

    public:
    void input1()
    {
        cout <<"Enter the father name : ";
        getline(cin,name);

        cout <<"Enter the father age : ";
        cin>>age;
    }

    void displayf()
    {
        cout <<"Father name : "<<name;
        cout<<"father Age : "<<age;
    }
};
class mother
{
    protected:
    string name;
    int age ;

    public:
    void input2()
    {
         
        cout <<"Enter the mother name : "<<endl;
        getline(cin,name);

        cout <<"Enter the mother age : "<<endl;
        cin>>age;
    }

    void displaym()
    {
        cout <<"mother name : "<<name<<endl;
        cout<<"mother Age : "<<age<<endl;
    }
};
class child : public father, public mother
{
    protected:
    string name;
    int age ;

    public:
    void input3()
    {
       
        cout <<"Enter the child name : "<<endl;
        getline(cin,name);

        cout <<"Enter the child age : "<<endl;
        cin>>age;
        cin.ignore();
    }

    void displayc()
    {
        cout <<"child name : "<<name<<endl;
        cout<<"child Age : "<<age<<endl;
    }
};

int main()
{
    child c;

    c.input1();
    c.input2();
    c.input3();

    c.displayf();
    c.displaym();
    c.displayc();

    return 0;
}
