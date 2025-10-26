// Write a class Box with length, breadth, and height. Write a friend function to calculate the volume of the box.
#include <iostream>
using namespace std;

class Box {
    double length, breadth, height;

public:
    Box(double l, double b, double h) {
        length = l;
        breadth = b;
        height = h;
    }

    // Declare friend function
    friend double calculateVolume(Box b);
};

// Friend function definition
double calculateVolume(Box b) {
    return b.length * b.breadth * b.height;
}

int main() {
    Box b1(4.5, 3.0, 2.0);

    cout << "Volume of the box: " << calculateVolume(b1) << endl;

    return 0;
}