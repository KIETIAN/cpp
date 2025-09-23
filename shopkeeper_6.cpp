// shopkeeper gives a flat 50% discount if bill>1000 , else no discount use conditional operator.
#include<iostream>
using namespace std;
int main()
{
    float bill , discount=0;
    cout <<"enter the amount of bill:"<<endl;
    cin>>bill;
      discount =(bill > 1000) ? (bill - 50) : bill;
      cout << "Final amount to pay: " << discount << endl;
 
      return 0;
}