// to find the largest of two numbers.
#include<iostream>
using namespace std;
int main()
{
    int num_1;
    int num_2;
    cout << "Enter the Number:";
    cin >> num_1 >> num_2;
    
    if (num_1>num_2 && num_2>num_1)
    {
        cout << num_1<< "is largest Number";
    }
    else
    {
        cout <<num_2<< "is Smallest number";
    }
    return 0;
}