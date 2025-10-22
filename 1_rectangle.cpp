// Create a class Rectangle with length and breadth. Write a constructor to initialize these values and a function to calculate area.
#include <iostream>
using namespace std;

class Rectangle {
    int length, breadth;
public:
    Rectangle(int l, int b) {
        length = l;
        breadth = b;
    }
    int area() {
        return length * breadth;
    }
    void display() {
        cout << "Length: " << length << " Breadth: " << breadth 
             << " Area: " << area() << endl;
    }
};

int main() {
    Rectangle r1(10, 5), r2(7, 3);
    r1.display();
    r2.display();
    return 0;
}