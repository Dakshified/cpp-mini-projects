#include <iostream>

using namespace std;

int main() {

    int totalSlots = 10;
    int occupied = 0;
    int choice;

    do {

        cout << "\n===== PARKING LOT MANAGER =====\n";
        cout << "1. Park Vehicle\n";
        cout << "2. Remove Vehicle\n";
        cout << "3. Show Status\n";
        cout << "4. Exit\n";

        cout << "Enter Choice: ";
        cin >> choice;

        switch(choice) {

            case 1:
                if(occupied < totalSlots) {
                    occupied++;
                    cout << "Vehicle Parked Successfully!\n";
                }
                else {
                    cout << "Parking Lot Full!\n";
                }
                break;

            case 2:
                if(occupied > 0) {
                    occupied--;
                    cout << "Vehicle Removed Successfully!\n";
                }
                else {
                    cout << "Parking Lot Empty!\n";
                }
                break;

            case 3:
                cout << "\nTotal Slots: " << totalSlots << endl;
                cout << "Occupied Slots: " << occupied << endl;
                cout << "Available Slots: "
                     << totalSlots - occupied
                     << endl;
                break;

            case 4:
                cout << "Exiting...\n";
                break;

            default:
                cout << "Invalid Choice!\n";
        }

    } while(choice != 4);

    return 0;
}