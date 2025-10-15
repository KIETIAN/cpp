// Define a structure date with day, month , year. WAP to check if the given date is valid or not.
#include<iostream>
using namespace std;
struct date{
    int day;
    int month;
    int year;
}; 
bool isleapyear(int year)
{
    if((year%400 == 0) || (year % 4 == 0 && year%100 != 0))
    {
        return true;
    }
    return false;
}

bool isvalid(date d)
{
  int day[] = { 0,31,28,31,30,31,30,31,31,30,31,30,31};

  if(isleapyear(d.year))
  {
    day[2] = 29;
  }

  if(d.year<1)
  return false;
    if(d.month < 1 || d.month > 12)
    return false;

if(d.day < 1 || d.day > day[d.month])
return true;
}
int main()
{
    date d;
     cout <<"Day : "<<endl;
     cin>>d.day;
     cout <<"month : "<<endl;
     cin>>d.month;
     cout <<" year : "<<endl;
     cin>>d.year;

     if(isvalid(d))
    {
        cout <<d.day<<"/"<<d.month<<"/"<<d.year<<"is valid";

    }
    else 
    {
      cout <<d.day<<"/"<<d.month<<"/d"<<d.year<<"is not valid";
    }
    return 0;
}
