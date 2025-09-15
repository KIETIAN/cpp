// WAP to demonstrate the effect of pre increment and post increment operators in calculating a sequence of number .
#include<iostream>
using namespace std;
int main()
{
    int i=1;
    cout << "initial value of i=1"<<endl;
   //pre-increment2
    cout <<"using pre increment "<<++i<<endl;
    cout <<"value after increment"<<i<<endl;
    //post increment 
    cout <<"using post increment :"<<i++<<endl;
    cout<<"value after increment ."<<i<<endl;

    return 0;
}