// A student roll no. is even ->goes to section A,if odd is sec B . use modulus operator.
#include<iostream>
using namespace std;
int main()
{
    int roll_no;
    cout <<"Enter the roll number:";
    cin >> roll_no;
    if(roll_no % 2==0)
    {
        cout << "Goes to section a"<<endl;
    }
    else 
    {
        cout <<"Goes to section B"<<endl;
    }
    return 0;
}