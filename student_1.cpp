//Define a structure with name and roll number ad marks in 3 subject, calculate the average marks.
#include <iostream>
using namespace std;

struct Student {
    string name;
    int roll;
    int marks[3];
};

int main() {
    Student s;
    int total = 0;
    getline(cin, s.name);
    cin >> s.roll;

    cout << "Enter marks in 3 subjects: ";
    for (int i = 0; i < 3; i++) {
        cin >> s.marks[i];
        total += s.marks[i];
    }

    float avg = total / 3.0;
    cout << s.name << endl;
    cout<< s.roll << endl;
    cout << avg << endl;
    return 0;
}