// weather app where user selects season number
#include<iostream>
using namespace std;

int main()
{
    int season;
    cout << "Enter your choice: ";
    cin >> season;

    switch(season)
    {
        case 1:
            cout << "Summer activities: Swimming, Ice-cream";
            break;

        case 2:
            cout << "Rainy activities: Rain walks";
            break;

        case 3:
            cout << "Winter activities:Bonfire";
            break;

        case 4:
            cout << "Spring activities: Gardening";
            break;

        default:
            cout << "Invalid choice!";
    }

    return 0;
}