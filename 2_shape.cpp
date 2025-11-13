// Define a class Shape, derive Circle and Rectangle from it, and calculate area in each derived class.
#include <iostream>
using namespace std;

// Base class
class Shape {
public:
    virtual void input() = 0;      // Pure virtual function
    virtual void calculateArea() = 0; // Pure virtual function
};

// Derived class Circle
class Circle : public Shape {
private:
    double radius;
public:
    void input() {
        cout << "Enter radius of circle: ";
        cin >> radius;
    }
    void calculateArea() {
        double area = 3.14159 * radius * radius;
        cout << "Area of Circle = " << area << endl;
    }
};

// Derived class Rectangle
class Rectangle : public Shape {
private:
    double length, breadth;
public:
    void input() {
        cout << "Enter length of rectangle: ";
        cin >> length;
        cout << "Enter breadth of rectangle: ";
        cin >> breadth;
    }
    void calculateArea() {
        double area = length * breadth;
        cout << "Area of Rectangle = " << area << endl;
    }
};

int main() {
    Circle c;
    Rectangle r;

    cout << "- Circle -" << endl;
    c.input();
    c.calculateArea();

    cout << "- Rectangle -" << endl;
    r.input();
    r.calculateArea();

    return 0;
}