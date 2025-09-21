//WAP tp simulate a basic music player where choice.
#include<iostream>
using namespace std;

int main()
{
    int choice;
    cout << "Enter your choice: ";
    cin >> choice;

    switch(choice)
    {
        case 1:
            cout << "Playing music";
            break;

        case 2:
            cout << "Music paused.";
            break;

        case 3:
            cout << "Skipping to next track";
            break;

        case 4:
            cout << "Going to previous track";
            break;

        case 5:
            cout << "Exiting music player.";
            break;

        default:
            cout << "Invalid choice! Please select 1-5.";
    }

    return 0;
}