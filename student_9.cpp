//A class of 30 student appered ina atest . score marks in an array and display the highest score.
#include<iostream>
using namespace std;
int main()
{
    int arr[30];
    for(int i=0;i<30;i++)
    {
        cout <<"Enter the student marks "<<i+1<<"  :";
        cin>>arr[i];
    }
    int highest =arr[0];
    for(int j=1;j<30;j++)
    {
        if(arr[j]>highest)
        {
                highest =arr[j];
        }
    }
    cout <<"highest socre in the class "<<highest;
    return 0;
}
