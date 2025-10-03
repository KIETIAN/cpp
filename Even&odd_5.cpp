//store 20 numbers in an array and count how many are even or odd.
#include<iostream>
using namespace std;
int main()
{
    int arr[20],even=0 ,odd=0;
    for (int i=0;i<20;i++){
    cout <<"Enter the number in array "<<i+1<<" =";
    cin>>arr[i];
    
    if(arr[i]%2==0)
    {
        even++;
    }
    else 
    {
        odd++;
    }
}
  cout <<"total number are even : "<<even<<endl;
   cout <<"total number are odd : "<<odd<<endl;
    return 0;

}