#include <iostream>

using namespace std;

int main() {

    int seats[10] = {0};
    int choice, seatNo;

    do {
        cout << "\n===== MOVIE TICKET BOOKING =====\n";
        cout << "1. View Seats\n";
        cout << "2. Book Seat\n";
        cout << "3. Exit\n";
        cout << "Enter Choice: ";
        cin >> choice;

        switch(choice) {

            case 1:
                cout << "\nSeat Status:\n";

                for(int i = 0; i < 10; i++) {
                    cout << "Seat " << i + 1 << ": ";

                    if(seats[i] == 0)
                        cout << "Available\n";
                    else
                        cout << "Booked\n";
                }

                break;

            case 2:
                cout << "Enter Seat Number (1-10): ";
                cin >> seatNo;

                if(seatNo < 1 || seatNo > 10) {
                    cout << "Invalid Seat Number!\n";
                }
                else if(seats[seatNo - 1] == 1) {
                    cout << "Seat Already Booked!\n";
                }
                else {
                    seats[seatNo - 1] = 1;
                    cout << "Seat Booked Successfully!\n";
                }

                break;

            case 3:
                cout << "Thank You!\n";
                break;

            default:
                cout << "Invalid Choice!\n";
        }

    } while(choice != 3);

    return 0;
}