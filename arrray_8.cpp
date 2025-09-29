// WAp to merge two array in to the third array.
#include<iostream>
using namespace std;
int main()
{   
    int m,n;
    cin>>n>>m;  
    int arr_1[n],arr_2[m], arr_3[n+m];
    for(int i=0;i<n;i++)
    {
        cin>>arr_1[i];

    }
    for (int j=0;j<m;j++)
    {
        cin>>arr_2[j];
    }
    for(int k=0; k<(n+m);k++)
    {
       if(k<n)
       {
        arr_3[k] = arr_1[k];
       }
       else 
       {
        arr_3[k] = arr_2[k-n];
       }
    
    }
    for (int i=0; i < n+m; i++)
    {
        cout <<arr_3[i]<<" ";
    }
    return 0;
}