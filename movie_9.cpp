// WAP using structure  Movie (title, director, rating ). Display the highest - rated movie.
#include<iostream>
using namespace std;
struct movie
{
    string title , director;
    int rating;
}; 
int main()
{
    int n;
    cout <<"Enter the number of movie:  "<<endl;
    cin>>n;

    movie m[n];

    for(int i=0;i<n;i++)
    {
        cout <<"Enter the details of movie "<<i+1<<": "<<endl;

        cout <<"Enter the movie title : "<<endl;
        cin>>m[i].title;

        cout <<"Enter the director name  : "<<endl;
        cin>>m[i].director;

        cout <<"Enter the rating of this movie : "<<endl;
        cin>>m[i].rating;
    }
    int rate =0;
    for (int i=0;i<n;i++)
    {
        if(m[i].rating>m[rate].rating)
        {
            rate = i;
        }
    }

    cout <<"title : "<<m[rate].title<<endl;
    cout <<"director : "<<m[rate].director<<endl;
    cout <<"rating  : "<<m[rate].rating<<endl;
 return 0;
}