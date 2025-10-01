// input an array of integers of sort them in ascending order .
#include<iostream>
using namespace std;
int main()
{
    int arr[8];
    for(int i=0;i<8;i++){
    cout <<"Enter the element : "<<i+1<<endl;
    cin>>arr[i];
    }
    sort(arr,arr+8);
    for(int j=0;j<8;j++)
        {
            cout <<" "<<arr[j];
        }
return 0;

}

