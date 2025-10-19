// Define a class Car with attributes: brand, model, price. Write member functions to input details and display them. Create an array of 5 cars and display all.
#include <iostream>
using namespace std;

class Car {
    string brand, model;
    double price;
public:
    void input() {
        cin >> brand >> model >> price;
    }
    void display() {
        cout << brand << " " << model << " " << price << endl;
    }
};

int main() {
    Car cars[5];
    for (int i = 0; i < 5; i++) cars[i].input();
    for (int i = 0; i < 5; i++) cars[i].display();
    return 0;
}