// ATM Withdrawal : if Anount<=Balance->"Transaction Successful" , else->"Insufficient Balance".
#include<iostream>
using namespace std;
int main()
{
    double amt,bal;
    cout << "enter  current balance:"<<endl;
    cout << "Enter withdrawal amount:" <<endl;
    cin >> amt >> bal;
    if(amt<=bal)
    {
        cout << "Transation Successful" << endl;
    }
    else
    {
        cout << "Insufficient balancee:";
    } 
    return 0;

}