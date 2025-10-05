// input  an array of  integers and search  for a given element (liner search).
#include<iostream>
using namespace std;
int main()
{
    int arr[10], search,position;
    for(int i=0;i<10;i++)
    {
        cout <<"Enter a number"<<i+1<<" :"<<endl;
        cin>>arr[i];

    }
    cout <<"Enter a search element :";
    cin>>search;
    for(int j=0;j<10;j++)
    {
        if(arr[j] == search)
        {
             position = j ;
              break;
        }
    }
    if(position != -1)
    cout <<"Element "<<search<< " found in index: "<<position<<endl;
else
cout <<"not int he array.";
return 0;
}