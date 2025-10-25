// Design a class Car with speed and mileage. Demonstrate the use of a const object to only view details.
#include <iostream>
using namespace std;

class Car {
    int speed;
    float mileage;
public:
    Car(int s, float m) {
        speed = s;
        mileage = m;
    }
    int getSpeed() const {
        return speed;
    }
    float getMileage() const {
        return mileage;
    }
    void display() const {
        cout << "Speed: " << speed << " km/h, Mileage: " << mileage << " km/l" << endl;
    }
};

int main() {
    const Car c1(120, 18.5);

    cout << "Speed: " << c1.getSpeed() << endl;
    cout << "Mileage: " << c1.getMileage() << endl;
    c1.display();

    return 0;
}