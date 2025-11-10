// Define a class Marks with subject scores. Overload the += operator to update total marks when new marks are added.
#include <iostream>
using namespace std;

class Marks {
    int total;

public:
    Marks(int t = 0) {
        total = t;
    }

    void display() const {
        cout << "Total marks: " << total << endl;
    }

    Marks& operator+=(int newMarks) {
        total += newMarks;
        return *this;
    }
};

int main() {
    Marks m1(75);

    cout << "Initial marks: ";
    m1.display();

    m1 += 15;  // Add new marks
    cout << "After adding 15 marks: ";
    m1.display();

    m1 += 20;  // Add more marks
    cout << "After adding 20 marks: ";
    m1.display();

    return 0;
}