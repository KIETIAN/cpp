//to simulate an e voting machine where two candidates get votes and you display who won using conditional operator.
#include<iostream>
using namespace std;
int main()
{
    int v1,v2;
    cout <<"Enter voting v1:"<<endl;
    cin>> v1;
    cout <<"enter a voting v2:"<<endl;
    cin>> v2;
  cout <<(v2<v1 ? "i won.":"yash win") <<endl;
  
}