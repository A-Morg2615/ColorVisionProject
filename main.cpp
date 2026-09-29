#include <iostream>
using namespace std;

int main()
{
    const double colorBlindChance = 0.045;
    int roomSize;
    int estimatedPeople;
    char again = 'Y';

    cout << "Color Blindness Awareness Program\n";

    while (again == 'Y' || again == 'y') {

        cout << "\nHow many people are in the room? ";
        cin >> roomSize;

        if (roomSize < 0) {
            cout << "Please enter a positive number.\n";
        }

        estimatedPeople = roomSize * colorBlindChance;

        cout << "\nEstimated color blind people: "
             << estimatedPeople << endl;

        if (estimatedPeople == 0) {
            cout << "There may not be anyone with color blindness, "
                 << "but it is still important to be aware";
        }

        else if (estimatedPeople <= 2) {
            cout << "A few people in this room may have color blindness.\n";
        }

        else {
            cout << "In this room, color blindness might be a big issue"
                 << "\nit's important to be aware.\n";
        }

        do {
            cout << "\nWould you like to test another room? (Y/N): ";
            cin >> again;
        } while (again != 'Y' && again != 'y' && again != 'N' && again != 'n');
    }

    cout << "\nThank you for promoting color blindness awareness!\n";

    return 0;
}