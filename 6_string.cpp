// 6.	Write a program in C++ having class string1 with members as
//Int length;
//Char * buffer;
// Implement this class using copy constructor, destructor , parameterized constructor and default constructor.
#include <iostream>
using namespace std;

class String1 {
    int length;
    char *buffer;

public:
    // Default constructor
    String1() {
        length = 0;
        buffer = new char[1];
        buffer[0] = '\0';
    }

    // Parameterized constructor
    String1(const char *str) {
        length = strlen(str);
        buffer = new char[length + 1];
        strcpy(buffer, str);
    }

    // Copy constructor (deep copy)
    String1(const String1 &other) {
        length = other.length;
        buffer = new char[length + 1];
        strcpy(buffer, other.buffer);
    }

    // Destructor
    ~String1() {
        delete[] buffer;
    }

    // Display function
    void display() const {
        cout << "String: " << buffer << " | Length: " << length << endl;
    }
};

int main() {
    String1 s1("Hello");      // Parameterized constructor
    String1 s2 = s1;          // Copy constructor
    String1 s3;               // Default constructor

    s1.display();
    s2.display();
    s3.display();

    return 0;
}