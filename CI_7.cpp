// WAP where one function calculates compound interest , another display the result.
#include<iostream>
using namespace std;
double calculate(double p, double r,double t, double n)
{
    double amt= p*pow((1+(r/(100*n))),n*t);
    return amt-p;
}
double result(double CI)
{
    cout <<"compount interest= "<<CI;
}
int main()
{
    double p,r,t,n;
    cout <<"Enter the principle : "<<endl<<"Enter the rate : "<<endl<< "Enter the time in year : "<<endl<<"Enter the number of times"<<endl;
    cin>>p>>r>>t>>n;
    double CI= calculate(p,r,t,n);
    result(CI);
    return 0;
}