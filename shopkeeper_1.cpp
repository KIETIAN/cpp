// A shopkeeper wants to store prices of 10 items and display the highest and lowest price.
#include<iostream>
using namespace std;
int main()
{
    float price[10];
    for(int i=0;i<10;i++)
    {
        cout <<"Item "<<i+1<<" "<<"price :  ";
        cin>>price[i];
    }

    float highest;
    float lowest=price[0];

    for(int i=1;i<10;i++)
    {
        if(price[i]>highest)
        highest=price[i];
    if(price[i]<lowest)
    lowest=price[i];
    }
    cout <<"highest price: "<<highest<<endl;
    cout <<"lowest price : "<<lowest;
    return 0;
}