// Define a class Distance with feet and inches. Overload the + operator to add two distances.
#include <iostream>
using namespace std;

class Distance {
    int feet;
    float inches;

public:
    Distance(int f = 0, float i = 0) {
        feet = f;
        inches = i;
    }

    Distance operator+(const Distance &d) {
        Distance temp;
        temp.inches = inches + d.inches;
        temp.feet = feet + d.feet;

        if (temp.inches >= 12) {  // Convert 12 inches = 1 foot
            temp.feet += int(temp.inches / 12);
            temp.inches = fmod(temp.inches, 12);
        }

        return temp;
    }

    void display() const {
        cout << feet << " feet " << inches << " inches" << endl;
    }
};

int main() {
    Distance d1(5, 8.5);
    Distance d2(3, 9.75);

    Distance d3 = d1 + d2;

    cout << "First distance: ";
    d1.display();
    cout << "Second distance: ";
    d2.display();
    cout << "Sum of distances: ";
    d3.display();

    return 0;
}