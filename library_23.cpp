// A library wants to store bool titles . WAP to search for a book by its title.
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string books;
    for (int i = 0; i < n; i++) {
        getline(cin, books[i]);
    }

    string searchTitle;
    cout << "Enter book title to search: ";
    getline(cin, searchTitle);

    bool found = false;
    for (string book : books) {
        if (book == searchTitle) {
            found = true;
            break;
        }
    }

    cout << (found ? "Book found " : "Book not found ") << endl;
    return 0;
    
}