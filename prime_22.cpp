//WAP to print all the prime nmbers between 1 and 100.
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"prime number in between 1 to 100 are:";
   
    for(int n=2;n<=100;n++)
{
        bool prime =true;
        for(int i=2;i*i<=n;i++){
       if(n%i==0)
    {
       prime =false;
        break;

    }
}   
    if(prime){
    cout <<n<<" ";
}
}
    return 0;
}