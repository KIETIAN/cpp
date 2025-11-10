// Create a class Book with price. Overload the < operator to compare book prices.
#include <iostream>
using namespace std;

class Book {
    double price;

public:
    Book(double p = 0) {
        price = p;
    }

    bool operator<(const Book &b) {
        return price < b.price;
    }

    void display() const {
        cout << "Price: $" << price << endl;
    }
};

int main() {
    Book b1(350);
    Book b2(500);

    cout << "Book 1: ";
    b1.display();
    cout << "Book 2: ";
    b2.display();

    if (b1 < b2)
        cout << "Book 1 is cheaper than Book 2." << endl;
    else
        cout << "Book 2 is cheaper than Book 1." << endl;

    return 0;
}