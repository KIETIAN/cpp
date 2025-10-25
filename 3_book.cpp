// Write a program where a const object of class Book can call only read-only functions like getTitle() but cannot call modifying functions.
#include<iostream>
using namespace std;

class Book {
    string title;

public:
    Book(string t) {
        title = t;
    }

    // Read-only function (const)
    string getTitle() const {
        return title;
    }

    // Modifying function (not const)
    void setTitle(string t) {
        title = t;
    }
};

int main() {
    const Book b1("Cpp Programming");
    cout << "Book Title: " << b1.getTitle() << endl;

    return 0;
}