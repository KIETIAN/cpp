// input a string and convert all the lower case letters to uppercase.
#include<iostream>
using namespace std;
int main()
{
    string str;
    getline(cin,str);
    for(int i=0;i<str.length();i++){
    if(str[i]>='a' && str[i]<='z'){
        str[i] = str[i]-32;
    }
}
   cout <<"uppercase : "<<str;

    return 0;
}