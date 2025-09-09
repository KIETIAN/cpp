// TO check if a number is palidrome or not.
#include <iostream>
using namespace std;
int main()
{
    int num, rem, reverse=0;
    cout << "Enter a number:";
    cin >> num;
    int original_number = num;
    int temp = num;
    while(temp>0)
    {
        rem=temp%10;
        reverse=(reverse*10)+ (rem);
        temp =temp/10;
    }
    cout << reverse;

    if(original_number==reverse)
    {
        cout <<"is a palindrome.";
    }
    else
    {
        cout <<"not a palindrome.";
    }
    return 0;
}