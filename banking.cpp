//Banking app check.
#include<iostream>
using namespace std;
int main()
{
    int bal;
    cout << "Enter a balance:";
    cin >> bal;
    if(bal<1000)
    {
        cout << "Low balance Warning."<<endl;
    }
    else if(bal>=1000 && bal<5000)
    {
        cout << "Normal balane." << endl;
    }
    else
    {
        cout << "high Balance."<<endl;
    }
    return 0;

}