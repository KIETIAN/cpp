// WAP to add two matrix.
#include<iostream>
using namespace std;
int main()
{
    int a[2][2],b[2][2],sum[2][2];
    cout <<"Enter the first matrix";
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            cout <<"a["<<i<<"]["<<j<<"] =";
            cin>>a[i][j];
        }
    }
    cout <<"Enter the second  matrix";
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            cout <<"a["<<i<<"]["<<j<<"] =";
            cin>>b[i][j];
        }
    }

     for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
             sum[i][j] = a[i][j] + b[i][j];
        }
    }

    cout <<"Enter the sum of two  matrix";
  for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            cout <<sum[i][j] <<" "<<endl;
        }
    }
    return 0;
}
