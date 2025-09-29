// A bank wants a. function to compute simple interest (formula) and display result for different customers.
#include<iostream>
using namespace std;
double interest(double p,double r,double t)
{
    return (p*r*t)/100.0;
}
int main()
{
    int number;
    cout <<"Enter the number:";
    cin>>number;
    
    switch(number)
    {
        case 1:{
        double p,r,t;
        cout <<"Enter the amount :\n"<<"Enter the price :\n"<<"Enter the time: "<<endl;
        cin>>p>>r>>t;
        cout<<"Simple Interest: "<<interest(p,r,t);
        break;}

        default:
        cout <<"all done";
    }
    return 0;

}