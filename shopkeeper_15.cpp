// A shopkeeper wants to know the sum of digits of bill number entered by the user . WAP using while loop.
#include<iostream>
 using namespace std;
 int main ()
 {
    int bill,sum=0,digit;
    cout <<"Enter bill number:";
    cin>>bill;
    while(bill>0)
    {
        digit =bill%10;
        sum=sum+digit;
        bill = bill/10;
    }
    cout <<"sum of digits="<<sum;
    return 0;
 }