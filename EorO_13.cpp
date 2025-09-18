//  checking weather a number is even or odd using num  & 1.
#include<iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter a number :"<<endl;
    cin >> num;
    int x=(num & 1);
    if(x)
    {
    cout <<"number is odd."<<endl;
    }
    else 
    {
        cout <<"number is even."<<endl;
    }
    return 0;
}