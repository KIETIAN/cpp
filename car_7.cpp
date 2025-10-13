// create a structure car with company , model, and price . input details of car and display all cars with price <5 lakh.
#include<iostream>
using namespace std;
struct car
{
    string company;
    int  model;
    int price;
};
int main()
{
    int n;
    cout <<"Enter the number of cars :";
    cin>>n;

    car c[n];
    for(int i=0;i<n;i++)
    {
        cout <<"Enter the car details "<<i+1<<": "<<endl;
        
        cout <<"comapany name :"<<endl;
        getline(cin,c[i].company);

        cout <<"Enter the model name :"<<endl;
        getline(cin,c[i].model);

        cout <<"Enter the price of car :"<<endl;
        cin>>c[i].price;
    }
    bool found = false;
    for(int i =0; i<n; i++)
    {
    if(c[i].price < 500000)
    {
        cout << c[i].company<<endl;
        cout << c[i].model<<endl;
        cout << c[i].price<<endl;
        found = true;
    }
      if(!found)
      {
        cout <<"car is not found below the five lakh";
      }
    }
    return 0;
}