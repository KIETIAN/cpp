// A mobile recharge company gives a discount.
#include<iostream>
using namespace std;
int main()
{
    int recharge_amt;
    float discount=0, net_amount=0;
    cout << "Enter Recharge amount" << endl;
    cin >> recharge_amt;
    if(recharge_amt>500)
    {
        discount = recharge_amt * 0.20;
        net_amount = recharge_amt -discount;

        cout << "First discount" << discount;
        cout << "after discount:"<< net_amount;
    }
    else if(recharge_amt >=200 && recharge_amt<=500)
    {
        discount = recharge_amt * 0.10;
         net_amount = recharge_amt -discount;
        cout << "second discount "<< discount<< endl;
        cout <<"after discount:"<< net_amount<<endl;
    }
    else 
    {
        cout << "no  discountt"<< recharge_amt<< endl;
    }
    return 0;

}