//3.	Define a class PrintData with overloaded functions print() to display.
#include <iostream>
using namespace std;

class PrintData {
public:
    void print(int x) {
        cout << "Integer: " << x << endl;
    }
    void print(float y) {
        cout << "Float: " << y << endl;
    }
    void print(string s) {
        cout << "String: " << s << endl;
    }
};

int main() {
    PrintData p;

    p.print(10);
    p.print(3.14f);
    p.print("Hello, World!");

    return 0;
}
