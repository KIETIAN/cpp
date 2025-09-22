// A parking system charges 20 for the first 2 hours and 10 for every additional hour.WAP using a loop to calculate parking charges for multiple vehicle entered by the users.
#include<iostream>
using namespace std;
int main()
{
    int price=20, hour;

    cout <<"Enter the hours:";
    cin >>hour;
    if(hour<=2)
    {
        cout <<"same price."<<price;
    }
 while (hour>2)
 {
    price=price+10;
     hour =hour-1;
 }
 cout <<"change price."<<price;
 return 0;
}