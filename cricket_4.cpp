// A cricekt team scored runs in 10 matches . store the run in an array and calculate the average score.
#include<iostream>
using namespace std;
int main()
{
    int  score[10], total=0;
    for(int i=0;i<10;i++)
    {
        cout <<"Enter the Score in "<<i+1<<" Match : "<<endl;
        cin>>score[i];
         total = total+score[i];
    }
       float avg;
       avg=total/10;
       cout <<"Average score is :"<<avg;
    return 0;
}