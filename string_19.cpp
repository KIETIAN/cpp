// input two string and check weather they are equal or not.
#include<iostream>
using namespace std;
int main()
{
    string s1,s2;
    getline(cin,s1);
    getline(cin,s2);
    bool equal = true;
    if(s1.length()!=s2.length())
    {
        equal = false;
    }
    else 
    {
            for(int i=0;i < s1.length();i++)
            {
                if(s1[i] == s2[i]){
                equal = false;
            break;
            }
            }
    }
 if(s1==s2)
 cout <<"string is equal"<<endl;
else
cout <<"string is not equal"<<endl;

}