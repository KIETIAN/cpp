// Create a class Flight with flight number, source, and destination. Use a default constructor for initialization and display details.
#include <iostream>
using namespace std;

class Flight {
    int flightNo;
    string source, destination;
public:
    Flight() {
        flightNo = 101;
        source = "Delhi";
        destination = "Mumbai";
    }
    void display() {
        cout << "Flight No: " << flightNo 
             << " Source: " << source 
             << " Destination: " << destination << endl;
    }
};

int main() {
    Flight f;
    f.display();
    return 0;
}