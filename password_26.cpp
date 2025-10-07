// Write a program to check whether the entered password is valid.
#include <iostream>
using namespace std;

int main() {
    string password;
    cin >> password;

    int n = password.length();
    int digit = 0, special = 0;

    for (int i = 0; i < n; i++) {
        char ch = password[i];
        if (ch >= '0' && ch <= '9') {
            digit = 1; 
        }
        else if (!(ch >= 'a' && ch <= 'z') && !(ch >= 'A' && ch <= 'Z')) {
            special = 1; 
        }
    }

    if (n >= 8 && digit == 1 && special == 1) {
        cout << "Password is VALID " << endl;
    } else {
        cout << " INVALID " << endl;
    }

    return 0;
}