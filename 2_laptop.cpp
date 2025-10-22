// A class Laptop has data members: brand, RAM, and price. Use a parameterized constructor to initialize and a function to display details.
#include <iostream>
using namespace std;

class Laptop {
    string brand;
    int ram;
    double price;
public:
    Laptop(string b, int r, double p) {
        brand = b;
        ram = r;
        price = p;
    }
    void display() {
        cout << "Brand: " << brand << " RAM: " << ram << "GB Price: " << price << endl;
    }
};

int main() {
    Laptop l1("Dell", 16, 55000), l2("HP", 8, 40000), l3("Apple", 16, 120000);
    l1.display();
    l2.display();
    l3.display();
    return 0;
}