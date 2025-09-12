//A cinema hall gives student discount 20% if age<18 , otherwise charges full ticket price.
#include<iostream>
using namespace std;
int main()
{
    int age;
    float price,finalprice;
    cout << "Enter Student Age::" << endl;
    cout << "Enter price" << endl;
    cin >> age >> price;
    if(age<18)
    {
       finalprice = price-(price*0.20);
    }
    else
    {
        finalprice = price;
        
    }
    cout <<" full charge" << finalprice<<endl;
    return 0;

}