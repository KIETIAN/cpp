//Create a program to store the name of five cities in an array and display them in reverse order.
#include<iostream>
using namespace std;
int main()
{
    char city[5][10];
    for(int i=0;i<5;i++)
    {
        cout <<"Enter the "<<i+1<<" city : ";
        cin>>city[i];
    }
    cout <<"reverse order."<<endl;
         for (int i=4;i>=0;i--)
         {
            cout <<city[i]<<endl;
         }
return 0;
}