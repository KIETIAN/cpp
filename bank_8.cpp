// Define a structure of bankaccount with account number , name and balance . display details of customers with balance less than 1000 rs.
#include<iostream>
using namespace std;
struct bankaccount
{
    int acc_no;
    string name;
    float balance;
};
 int main()
 {
    int n;
    cout<<"Enter the number of customer :"<<endl;
    cin>>n;

    bankaccount b[n];

    // input customer details
    for(int i=0;i<n;i++){
    cout <<"Enter the account number:  "<<endl;
    cin>>b[i].acc_no;

    cout <<"Enter the Account holder name : "<<endl;
    cin>> b[i].name;

    cout <<"Enter the balance : "<<endl;
    cin>> b[i].balance;

    }
    bool found = false;
    for(int i=0;i<n;i++)
    {
        if(b[i].balance<1000)
        {
            cout <<b[i].name<<endl;

            cout <<b[i].balance<<endl;
            found = true;
        }

        if(!found)
        {
            cout<<"balance is greater than 1000";
        }
    }
    return 0;
 }
