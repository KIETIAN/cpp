// A gym charges a monthly fee of 1000 . f a member age is less than 18 , they get a discount 20% . use arithmetic and relational operato#inc
#include<iostream>
using namespace std;
int main()
{
    int fees,age;
    float discount=0, new_fees=0;
    cout<<"Enter a gym fees:"<<endl;
    cin >> fees;
    cout << "enter a age :"<<endl;
    cin>>age;
    if(age<18){
    discount = fees*0.20;
    new_fees=fees-discount;
    cout <<"They get a discount."<<new_fees<<endl;
    }
    else
    {
        cout <<"they donot get a discount."<<endl;
    }
    
    return 0;
}