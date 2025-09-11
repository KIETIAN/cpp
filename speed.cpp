// To check a traffic police officer checks vehicle speed.
#include<iostream>
using namespace std;
int main()
{
    int speed;
    cout << "Enter the vehicle speed:" << endl;
    cin >> speed;
    if(speed<=60)
    {
        cout << "It will be a safe drive mode." << endl;
    }
    else if(speed>=61 && speed<100)
    {
        cout << "It will be a warning mode:" << endl;
    }
    else
    {
        cout << "Its a fine";
    }
    return 0;
}