// A class HotelRoom has room number, type (AC/Non-AC), and rent. Use a constructor to initialize and display all rooms available.
#include <iostream>
using namespace std;

class HotelRoom {
    int roomNo;
    string type;
    double rent;
public:
    HotelRoom(int r, string t, double re) {
        roomNo = r;
        type = t;
        rent = re;
    }
    void display() {
        cout << "Room No: " << roomNo 
             << " Type: " << type 
             << " Rent: " << rent << endl;
    }
};

int main() {
    HotelRoom h1(101, "AC", 2500), h2(102, "Non-AC", 1500), h3(103, "AC", 3000);

    cout << "Available Rooms:\n";
    h1.display();
    h2.display();
    h3.display();

    return 0;
}