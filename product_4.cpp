// A structure product stores product id , name , quantity . input details of 10 product and display the one with the highest quantity.
#include<iostream>
using namespace std;
struct product{
    int id;
    string name;
    int quantity;
};
int main()
{
    int n = 10;
    product a[n];
    cout <<"Enter the details of product :"<<n;

    for(int i=0;i<n;i++)
    {
        cout <<"product id = ";
        cin>>a[i].id;
        
        cout <<"Name = ";
        cin>>a[i].name;

        cout <<"Quantity = ";
        cin>>a[i].quantity;
    }
    int max = 0;
    for(int i=0;i<n;i++)
    {
        if(a[i].quantity > a[max].quantity)
        {
            max = i;
        }
    }
    cout <<"id = "<<a[max].id<<endl;
     cout <<"name  = "<<a[max].name<<endl;
      cout <<"quantity = "<<a[max].quantity<<endl;
      return 0;

}