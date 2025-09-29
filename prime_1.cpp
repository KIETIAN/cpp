// write a function to check if a number is prime or not ,and use it in a program where a user enters multiple numbers.
#include<iostream>
using namespace std;
bool prime(int n)
    {
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        return false;
    }
    return true;
    }
    int main()
    {
        int num ,i=2;
        cout<<"Enter the number:";
   cin>>num;
        while(i<=num)
        {
        if(prime(i))
        cout <<i<<"is a prime"<<endl;
    
    else 
    cout <<i<<" not a prime."<<endl;
i++;
        }

        return 0;
    }