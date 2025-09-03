//A shopkeeper gives 10% discount if the purchase amount >500, otherwise no discount.
#include<iostream>
using namespace std;
int main()
{
    int amt, discount=0, total_amt;
    cout << "Enter the amount";
    cin >> amt;
    if(amt>500)
    {
        discount = amt * 0.10;
        total_amt =  amt - discount;
        cout << "discount is " << discount<< endl;
        cout << "total amount:"<< total_amt<<endl;
    }
    else
    {
        cout << "no discount is avalable"<< endl;
        cout<< "total amnt to pay"<< amt;
    }
    return 0;
}