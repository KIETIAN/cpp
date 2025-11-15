// Create a class Shape, derive Polygon, and further derive Triangle. Each class should have methods that get extended in derived classes.
#include <iostream>
using namespace std;
class Shape {
public:
    void display() {
        cout << "This is a shape." << endl;
    }
};
class Polygon : public Shape {
public:
    void display() {
        Shape::display(); // Extend base functionality
        cout << "A polygon has multiple sides." << endl;
    }
};
class Triangle : public Polygon {
public:
    void display() {
        Polygon::display(); // Extend parent functionality
        cout << "A triangle is a polygon with 3 sides." << endl;
    }
};

int main() {
    Triangle t;
    t.display();  
    return 0;
}