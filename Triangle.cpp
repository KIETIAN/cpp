//To input 3 sides of a triangle and check weather it is valid (sum of two sides >third).
#include<iostream>
using namespace std;
int main()
{
    int s1,s2,s3;
    cout << "Enter three sides:" << endl;
    cin >> s1,s2,s3;
    if((s1+s2>s3) && (s1+s3>s2) && (s2+s3>s1))
    {
        cout << "It is a valid."<< endl;

    }
    else
    {
        cout <<"It is not valid."<< endl;
    }
    return 0;
}