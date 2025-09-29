// Write a function to calculate and return the sum of digits of a number.
#include<iostream>
using namespace std;
int sum(int number)
{
    int sum=0,num;
    while(number>0){
    int rem=number%10;
    sum=sum+rem;
    number=number/10;
}
    return sum;
} 
int main()

{
    int num;
    cout <<"Enter a number : ";
    cin>>num;

    
    cout <<"sum of number: "<<sum(num);
    return 0;
}