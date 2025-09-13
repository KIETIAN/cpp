// To check Weather the entered characted is a vowel or constant.
#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout << "Enter a character:";
    cin >> ch;
    if(ch=='A' || ch=='E' || ch=='I' || ch=='O'|| ch=='U'|| 
       ch=='a' || ch=='e' || ch=='i' || ch=='o'|| ch=='u')
    {
        cout<<ch<<"is a vowel."<<endl;
    }
    else if((ch >='a'&& ch <= 'z') || (ch >= 'A' && ch <='Z'))
    {
        cout<<ch<<"is. a constant"<<endl;
    }
    return 0;
}