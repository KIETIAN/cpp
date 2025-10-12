// WAP to input a string and count the number of vowels and constant.
#include<iostream>
using namespace std;
int main()
{
   string str;
   getline(cin,str);     // input of string
   int n = str.length();
   cout <<n<<endl;     // size of string
    int vowels=0;
    int consonant=0;
    for(int i=0; i < n;i++)
    { 
        char ch=str[i];
       if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z') )
{
    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'||
       ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' )
        vowels++;
    else 
        consonant++;
}
}
    cout <<"number of vowels : "<<vowels<<endl;
    cout <<"consonant number : "<<consonant<<endl;
return 0;
}