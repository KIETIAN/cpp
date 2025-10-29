// 1.	Create a class Calculator that has overloaded functions add() to.
#include <iostream>
using namespace std;

class Calculator {
public:
    int add(int a, int b) {
        return a + b;
    }
    int add(int a, int b, int c) {
        return a + b + c;
    }
    float add(float a, float b) {
        return a + b;
    }
};

int main() {
    Calculator c;

    cout << "Add two integers: " << c.add(5, 10) << endl;
    cout << "Add three integers: " << c.add(2, 4, 6) << endl;
    cout << "Add two floats: " << c.add(3.5f, 2.8f) << endl;

    return 0;
}