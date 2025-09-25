//Wap to calculate the area and that return the area of either circel , triangle abd rechtangle based on user"s choice.
#include<iostream>
using namespace std;
double area_rect(double l,double b)// for calculate rectangle
{
    return l*b;

}
double area_sq(double s)// for square
{
    return s*s;
}
double area_circle(double r)// for circle
{
    return 22.0/7*r*r;
}
double area_tri(double b ,double h)
{
    return 1/2*b*h;
}
int main()
{
    int number;
    cout <<"Enter the number:";
    cin>>number;
    switch(number)
    {
        case 1:{
        double l,b;
        cout <<"Enter the length:"<<endl<<"Enter the breath:";
        cin>>l>>b;
        cout <<"Area of rectangle:"<<area_rect(l,b);
        break;
        }
        case 2:{
        double s;
        cout <<"Enter the side :"<<endl;
        cin>>s;
        cout <<"Area of square: "<<area_sq(s);
        break;
        }
        case 3:{
        double r;
        cout<< "Enter the radius:"<<endl;
        cin>>r;
        cout <<"Area of circle: "<<area_circle(r);
        break;
        }
        case 4:{
        double b, h;
        cout <<"Enter the base :"<<endl<<"Enter the height :";
        cin>>b>>h;
        cout <<"Area of triangle:"<<area_tri(b,h);
        break;
        }
        default:
        cout <<"All area is completed"<<endl;
    }

    return 0;
}

