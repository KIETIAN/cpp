// Write a function to check if a given number is leap year.
#include<iostream>
using namespace std;
bool leapyear(int year)
{
       if((year%4==0) && (year%100==0) || (year %400==0))
    {
        return true;
    }
    else{
      return false;
    }
}

int main()
{
    int sal;
    cout <<"Enter a year: ";
    cin>>sal;

        if(leapyear(sal))
     cout <<sal<<"is a leap year.";
    else 
    cout <<sal<<" is not a leap year";
     return 0;
}