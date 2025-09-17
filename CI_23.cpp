//A banking apps gives compound interest every year for n years . use a loop to compute final amount.
#include<iostream>
using namespace std;
int main()
{
    int year;
    double rate , principal,amount;
    cout << "enter the amount of principle"<<endl;
    cin >>principal;
    cout <<"enter the amount of rate"<<endl;
    cin >> rate;
    cout << "Enter the number of years"<<endl;
    cin>>year;
    amount =principal;
        cout <<"calculation of compund interest:"<<endl;
        for (int i=0;i<=year;i++)
        {
            double previous_amnt = amount;
            amount=amount*(1+rate/100);
            double yearlycompound_i = amount -previous_amnt;
             cout << "Year " << i << " -> Interest = " << yearlycompound_i << ", Total Amount = " << amount << endl;
        }
          cout << "Total Compound Interest after " <<year<< " years = " << (amount - principal) << endl;
        return 0;
}