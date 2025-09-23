// A school bus has 40 seats . WAP using a loop to alllocte number to seats until the nus is full.
#include<iostream>
using namespace std;
int main()
{
    int seat=40,student,bus, rem , passenger=1;
    cout<<"Enter a student :";
    cin>>student;
   
    bus = student/40.0;
     rem =student%40;
     if(rem==0)
     {
     }
     else if(rem!=0)
     {
        bus =bus+1;
     }
     cout<<"bus:"<<bus<<endl;
     for(int i=1;i<=bus;i++)
     {
        cout <<" bus no :"<<i<<endl;
          for(int j=1;j<=40;j++)
          {
            cout <<"passenger no:"<<passenger<<endl;
            passenger++;
             if(passenger==student+1)
          {
            break;
          }
          }
     }
    return 0;
}