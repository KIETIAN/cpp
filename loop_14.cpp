// A school wants to print a multiplication table for given students favourite number . WAp using for loop.
#include<iostream>
using namespace std;
int main()
{
    int number,i;
    cout <<"Enter a number:";
    cin >> number;
    for(i=1;i<=10;i++)
    {
        cout <<i<<"x5="<< i*number<<endl;
    }
    return 0;

}
