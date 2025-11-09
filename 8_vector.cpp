// Create a class Vector with x, y, z components. Overload the - operator to subtract two vectors.
#include <iostream>
using namespace std;

class Vector {
    double x, y, z;

public:
    Vector(double a = 0, double b = 0, double c = 0) {
        x = a;
        y = b;
        z = c;
    }

    Vector operator-(const Vector &v) {
        return Vector(x - v.x, y - v.y, z - v.z);
    }

    void display() const {
        cout << "(" << x << ", " << y << ", " << z << ")" << endl;
    }
};

int main() {
    Vector v1(3, 4, 5);
    Vector v2(1, 2, 3);

    Vector v3 = v1 - v2;

    cout << "Vector 1: ";
    v1.display();
    cout << "Vector 2: ";
    v2.display();
    cout << "Subtraction (v1 - v2): ";
    v3.display();

    return 0;
}