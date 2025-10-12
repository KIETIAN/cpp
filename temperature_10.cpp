// Store daily temperature of 7 days and display the hottest and coldest day.
#include<iostream>
using namespace std;
int main()
{
    int temp[7];
    for(int i=0;i<7;i++)
    {
        cout <<"Enter temp day "<<i+1<<" :";
        cin>>temp[i];
    }
    int coldest = temp[0];
     int hottest = temp[0];
    for(int j=1;j<7;j++)
    {
       if(temp[j]>hottest)
       {
        hottest=temp[j];
       }
       else if(temp[j]<coldest)
    {
            coldest = temp[j];
    }
    }
     cout <<"coldest day :"<<coldest<<endl;;
      cout <<"hottest day :"<<hottest;
    return 0;
}