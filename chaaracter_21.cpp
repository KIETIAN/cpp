//input a sentence and count how many times a particular character occurs.
#include<iostream>
using namespace std;
int main()
{   
    string str;
    char ch;
    int count = 0;
    getline(cin, str);  
    cin>>ch;

    for (int i = 0; i < str.length(); i++) {
        if (str[i] == ch) {
            count++;
        }
    }

    cout << "Character '" << ch << "' occurs " << count << " times." << endl;

    return 0;
}