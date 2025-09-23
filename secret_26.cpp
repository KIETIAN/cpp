// A program that asks the user to guess a secret number .keep looping until the guess is correct.
#include<iostream>
using namespace std;
int main()
{
    int number, s_no=7;

    do{
            cout<<"Enter a Guess number:"<<endl;
            cin>>number;
               if(number == s_no)
    {
        cout <<number<<"number is correct"<<endl;
    }
    else
    {
        cout <<"number is incorrect"<<endl;
    }
}
while(number !=s_no);
    return 0;
    
}
