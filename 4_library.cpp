// Design a class LibraryBook with data members: book ID, title, author, availability. Write functions to issue and return a book.
#include <iostream>
using namespace std;

class LibraryBook {
    int bookID;
    string title, author;
    bool available;
public:
    void input(int id, string t, string a) {
        bookID = id;
        title = t;
        author = a;
        available = true;
    }
    void issue() {
        if (available) {
            available = false;
            cout << title << " issued." << endl;
        } else {
            cout << title << " is not available." << endl;
        }
    }
    void returnBook() {
        available = true;
        cout << title << " returned." << endl;
    }
    void display() {
        cout << bookID << " " << title << " " << author 
             << " " << (available ? "Available" : "Issued") << endl;
    }
};

int main() {
    LibraryBook b1, b2;
    b1.input(101, "C++ Basics", "Bjarne");
    b2.input(102, "Java Fundamentals", "James");

    b1.display();
    b2.display();

    b1.issue();
    b1.display();

    b1.returnBook();
    b1.display();

    return 0;
}