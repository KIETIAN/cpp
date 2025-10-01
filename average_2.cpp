//Wap to input marks of 5 subject for a student and calculate total, aveerage and percentage.
#include<iostream>
using namespace std;
int main()
{
   float total=0;
    int sub[5];
    for(int i=0;i<5;i++)
    {
        cout <<"Subject "<<i+1<<" "<<"marks : ";
        cin>>sub[i];
        total = total +sub[i];
    }
        float avg;
        avg=total/5;
        cout <<"Average marks :"<<avg<<endl;
        double percentage;
        percentage=(total/500)*100;
        cout <<"Percentage is : "<<percentage<<endl;
    
    return 0;
}