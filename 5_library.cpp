// A class Library maintains static member totalBooks. Write a function to update whenever a book is issued or returned.
#include <iostream>
using namespace std;

class Library {
    string bookName;
    bool issued;
    static int totalBooks;

public:
    Library(string name) {
        bookName = name;
        issued = false;
        totalBooks++;
    }

    void issueBook() {
        if (!issued) {
            issued = true;
            totalBooks--;
            cout << bookName << " issued." << endl;
        } else {
            cout << bookName << " is already issued." << endl;
        }
    }

    void returnBook() {
        if (issued) {
            issued = false;
            totalBooks++;
            cout << bookName << " returned." << endl;
        } else {
            cout << bookName << " was not issued." << endl;
        }
    }

    static void displayTotalBooks() {
        cout << "Total Books available: " << totalBooks << endl;
    }
};

// Initialize static member
int Library::totalBooks = 0;

int main() {
    Library b1("C++ Programming");
    Library b2("Data Structures");
    Library b3("Algorithms");

    Library::displayTotalBooks();

    b1.issueBook();
    Library::displayTotalBooks();

    b2.issueBook();
    b3.issueBook();
    Library::displayTotalBooks();

    b1.returnBook();
    Library::displayTotalBooks();

    return 0;
}