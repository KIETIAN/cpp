// A school wants to generate student id by combining first three letter of name + roll number . write a program to generate id.
#include<iostream>
using namespace std;
int main()
{
    int roll_no;
    string n;
    getline(cin,n);
    cin>>roll_no;
    string id = n.substr(0, 3) + to_string(roll_no);

    cout << "Generated Student ID: " << id << endl;

    return 0;
}