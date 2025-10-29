// 2.	A class Area has overloaded functions calculate() to find.
#include <iostream>
using namespace std;

class Area {
public:
    float calculate(float r) {
        return 3.14f * r * r; // circle
    }
    int calculate(int l, int b) {
        return l * b; // rectangle
    }
    float calculate(float base, float height, bool triangle) {
        return 0.5f * base * height; // triangle
    }
};

int main() {
    Area a;

    cout << "Area of Circle (r=5): " << a.calculate(5.0f) << endl;
    cout << "Area of Rectangle (l=4, b=6): " << a.calculate(4, 6) << endl;
    cout << "Area of Triangle (base=3, height=7): " << a.calculate(3.0f, 7.0f, true) << endl;

    return 0;
}