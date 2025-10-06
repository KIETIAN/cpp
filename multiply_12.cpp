// WAp to multiply of 2 matrix.
#include<iostream>
using namespace std;
int main()
{
    int a[2][2],b[2][2],mul[2][2];
    cout <<"Enter the first matrix:";
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            cout <<"a["<<i<<"]["<<j<<"]"<<"=";
            cin>>a[i][j];
        }
    }
    cout <<"Enter the second matrix:"<<endl;
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++){
        cout <<"b["<<i<<"]["<<j<<"]"<<"="<<endl;
        cin>>b[i][j];
        }
    }
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            mul[i][j] = a[i][j] *b[i][j];
        }
    }
    cout <<"multiply of two matrix"<<endl;
            for(int i=0;i<2;i++)
            {
                for(int j=0;j<2;j++)
                {
                    cout <<mul[i][j]<<endl;
                }
            }
            return 0;
}