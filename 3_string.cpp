// A class String has a character array. Overload the == operator to compare two strings.
#include <iostream>
using namespace std;

class String {
    char str[100];

public:
    String(const char *s = "") {
        strcpy(str, s);
    }

    bool operator==(const String &s) {
        return strcmp(str, s.str) == 0;
    }

    void display() const {
        cout << str << endl;
    }
};

int main() {
    String s1("Hello");
    String s2("World");
    String s3("Hello");

    cout << "First string: ";
    s1.display();
    cout << "Second string: ";
    s2.display();

    if (s1 == s2)
        cout << "s1 and s2 are equal." << endl;
    else
        cout << "s1 and s2 are not equal." << endl;

    if (s1 == s3)
        cout << "s1 and s3 are equal." << endl;
    else
        cout << "s1 and s3 are not equal." << endl;

    return 0;
}