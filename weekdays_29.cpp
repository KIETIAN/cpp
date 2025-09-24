// A student enters a number one to seven . use a switch to print the day of the week;
#include<iostream>
using namespace std;
int main()
{
    int days;
    cout <<"Enter the no of days :";
    cin>>days;
     for (int i=1;i<=days;i++)
    switch(i)
    {
         case 1:
         cout <<"monday"<<endl;
         break;

         case 2:
         cout <<"tuesday"<<endl;
         break;

         case 3:
         cout <<"wednesday"<<endl;
         break;

         case 4:
         cout <<"thursday"<<endl;
         break;

         case 5:
         cout <<"friday"<<endl;
         break;
         
         case 6:
         cout <<"saturday"<<endl;
         break;

         case 7:
         cout <<"sunday"<<endl;
         break;

         default:
         cout <<"only 7 days in a week";
    }
    return 0;

}