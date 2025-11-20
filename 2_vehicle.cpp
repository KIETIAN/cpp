// Define a class vehicle with attributes brand and price. derive a class car that add models and mileage . display car details using single inheritance.
#include<iostream>
using namespace std;
class vehicle
{                             // base class
    protected:
    string brand;
    int price;
public:
    vehicle( string b, int p)
    {
    brand = b;
    price = p;
    }
};
class car : public vehicle          // derived class 
{
    int model;
    float mileage;
public:
    car(string b, int p, int y, float m)
    :vehicle(b,p)     // call base class constructor
{
    model = y;
    mileage = m;
}
    void display()
    {
     cout <<"brand = "<<brand<<endl<<"price = "<<price<<endl<<"model = "<<model<<endl<<"mileage = "<<mileage;
    }
};
int main()
{
    car c("TATA",10000,2023,15.5);
    c.display();
    return 0;
}

