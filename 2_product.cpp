// 12.	Define a class Product with attributes name, price. Write a constant function getPrice() to return price. Create a const object and call only constant functions.
#include <iostream>
using namespace std;

class Product {
    string name;
    double price;

public:
    Product(string n, double p) {
        name = n;
        price = p;
    }

    double getPrice() const {
        return price;
    }

    void setPrice(double p) {
        price = p;
    }
    void display() const {
        cout << "Product: " << name << ", Price: " << price << endl;
    }
};

int main() {
    const Product p1("Laptop", 55000);

    cout << "Price = " << p1.getPrice() << endl;  
    p1.display();                           

    return 0;
}