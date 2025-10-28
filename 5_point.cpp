// Define two classes Point and Line. Use a friend function to check whether a point lies on a given line.
#include <iostream>
using namespace std;

class Point; // friend declaration inside Line

class Line {
    double a, b, c;

public:
    Line(double coeffA, double coeffB, double coeffC) {
        a = coeffA;
        b = coeffB;
        c = coeffC;
    }

    friend void checkPointOnLine(Point p, Line l);
};

class Point {
    double x, y;

public:
    Point(double xCoord, double yCoord) {
        x = xCoord;
        y = yCoord;
    }

    friend void checkPointOnLine(Point p, Line l);
};

void checkPointOnLine(Point p, Line l) {
    if ((l.a * p.x + l.b * p.y + l.c) == 0) {
        cout << "Point (" << p.x << ", " << p.y << ") lies on the line." << endl;
    } else {
        cout << "Point (" << p.x << ", " << p.y << ") does NOT lie on the line." << endl;
    }
}

int main() {
    Point p1(2, 3);
    Line l1(1, -1, 1); // Line: x - y + 1 = 0

    checkPointOnLine(p1, l1);

    Point p2(1, 0);
    checkPointOnLine(p2, l1);

    return 0;
}