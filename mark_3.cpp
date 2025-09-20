// Two ffriends compare the exam. WAp to decide who scared higher and weather both have passed >=40.
#include<iostream>
using namespace std;
int main()
{
    int friend_1,friend_2;
    cout << "marks of friend one: "<<endl;
    cin >> friend_1;
    cout << "marks of friend two:";
    cin >> friend_2;
    if( friend_1>friend_2)
    {
        cout << "Friend 1 is the higher scorer." << endl;
    }
    else if(friend_2>friend_1)
    {
        cout << "Friend 2 is the higher scorer." << endl;
    }
    else if (friend_1>=40 && friend_2>=40)
    {
        cout << "both are passed." << endl;

    }
    else 
    {
        cout << "failed"<< endl;
    } 
    return 0;
}