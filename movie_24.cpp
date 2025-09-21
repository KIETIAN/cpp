// A movie hall has 30 rows with 10 seat each .use nested loops to. allocate seats to customer.
#include<iostream>
using namespace std;
int main()
{
    int row=30,customer,line,rem,passenger=1;
    
    cout<<"enter the customer:";
    cin>>customer;
    line =customer/10;
    rem=customer%10;
if(rem==0)
{

}
else if(rem!=0)
{
 line = line+1;
}
cout <<"Number of line:"<<line<<endl;
    for (int i=1;i<=line;i++)//to calculate the no of no of rows.
    {
        cout <<"rows no:"<<i<<endl;
        for(int j=1;j<=10;j++)
        {

            cout<<"customer in " <<i<<" row :"<<j<<endl;
            passenger++;
            if(passenger == customer+1)
            {
                break;
            }
        }
    }
    return 0;
} 