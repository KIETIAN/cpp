// create a structure with fields : name, run, wickets. store data of 11 players and display the best performer.
#include<iostream>
using namespace std;
struct cricket
{
    string name;
    int run;
    int wickets;
};
int main()
{
    int n=11;
    cricket a[n];
    for(int i=0;i<n;i++)
    {
        cout <<"player "<<i+1<<" details : "<<endl;

        cout <<"name : "<<endl;
        cin>>a[i].name;

        cout <<"Runs :"<<endl;
        cin>>a[i].run;

        cout <<"Wickets :"<<endl;
        cin>>a[i].wickets;
    }
    int best =0;
    for(int i=0;i<n;i++)
    {
        if(a[i].run > a[best].run)
        {
            best = i;
        }
    }

    cout <<"name : "<<a[best].name<<endl;
    cout <<"run : "<<a[best].run<<endl;
    cout <<"Wicket : "<<a[best].wickets<<endl;
        return 0;
}