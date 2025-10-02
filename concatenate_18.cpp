// input two string and concatenate them.
#include<iostream>
using namespace std;
int main()
{
    string s1,s2,s3;
    getline (cin,s1);
    getline(cin,s2);
         for(int i=0;i<s1.length();i++)
         {
            s3 =s3+s1[i];
         }
            for(int j=0;j<s2.length();j++)
            {
                s3=s3+s2[j];
            }
         
         cout <<"concatenation  : "<<s3<<endl;
         return 0;
}