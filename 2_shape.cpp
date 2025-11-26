//	Define an abstract class Shape with pure virtual function perimeter(). Derive Square and Circle that implement it.
#include <iostream>
using namespace std;

class Shape {
public:
    virtual void perimeter() = 0;
};

class Square : public Shape {
    int side;
public:
    Square(int s) { side = s; }
    void perimeter() override {
        cout << "Perimeter of Square = " << 4 * side << endl;
    }
};

class Circle : public Shape {
    int radius;
public:
    Circle(int r) { radius = r; }
    void perimeter() override {
        cout << "Perimeter of Circle = " << 2 * 3.14 * radius << endl;
    }
};

int main() {
    Shape* s;

    Square sq(5);
    Circle c(7);

    s = &sq;
    s->perimeter();

    s = &c;
    s->perimeter();

    return 0;
}