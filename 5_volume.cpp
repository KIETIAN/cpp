// Write a program with a class Volume having overloaded functions to compute.#include <iostream>
#include<iostream>
using namespace std;

class Volume {
public:
    double compute(double s) {
        return s * s * s;
    }

    double compute(double l, double b, double h) {
        return l * b * h;
    }

    double compute(double r, double h) {
        return 3.14159 * r * r * h;
    }
};

int main() {
    Volume v;

    cout << "Volume of Cube: " << v.compute(5) << endl;
    cout << "Volume of Cuboid: " << v.compute(4, 3, 2) << endl;
    cout << "Volume of Cylinder: " << v.compute(3, 7) << endl;

    return 0;
}