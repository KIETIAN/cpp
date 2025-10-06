// input a full name and print only the initials .
#include<iostream>
using namespace std;

int main() {
    string n;
    getline(cin, n);
        cout << (char)toupper(n[0]);  // type casting

    for (int i = 0; i < n.length(); i++) {
        if (n[i] == ' ') {
            cout << (char)toupper(n[i + 1]) ;
        }
    }
    return 0;
}