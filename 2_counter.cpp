// A class Counter has a static member to keep track of the number of objects created. Demonstrate it by creating multiple objects.
#include <iostream>
using namespace std;

class Counter {
    static int count;

public:
    Counter() {
        count++;
    }

    static void displayCount() {
        cout << "Number of objects created: " << count << endl;
    }
};

// Initialize static member
int Counter::count = 0;

int main() {
    Counter c1, c2;
    Counter::displayCount();

    Counter c3, c4, c5;
    Counter::displayCount();

    return 0;
}