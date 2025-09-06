//To calculate electricity bill.
#include<iostream>
using namespace std;
int main()
{
    int unit;
    cout << "Enter the Electricity Unit:" << endl;
    cin >> unit;
    if(unit<=100)
    {
        cout << "its unit price is Rs 5 per unit." << endl;
    }
    else if(unit >100 && unit<=200)
    {
        cout << "Its Unit price is Rs 7 per unit." << endl;
    }
    else if(unit>200)
    {
        cout << "Its unit Price is RS 10 per unit." << endl;
    }
    return 0;
}