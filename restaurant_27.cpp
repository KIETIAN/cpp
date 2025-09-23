// A restaurant nemu system where the user enter a choice. using switch case.
#include<iostream>
using namespace std;
int main()
{
    int menu;
    cout <<"Enter a order number:";
    cin>>menu;
    switch(menu)
    {
        case 1:
        cout <<"pizza";
        break;

        case 2:
        cout<<"burger";
        break;
         
        case 3:
        cout <<"pasta";
        break;

        case 4:
        cout <<"exit";
        break;

        default:
        cout <<"invalid choice";
    }
    return 0;
}