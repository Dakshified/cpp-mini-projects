#include <iostream>

using namespace std;

int main() {

    int seats[10] = {0};

    int choice;
    int seatNo;

    do {

        cout << "\n===== RAILWAY RESERVATION SYSTEM =====\n";
        cout << "1. View Seats\n";
        cout << "2. Book Seat\n";
        cout << "3. Cancel Seat\n";
        cout << "4. Exit\n";

        cout << "Enter Choice: ";
        cin >> choice;

        switch(choice) {

            case 1:

                cout << "\nSeat Status\n";

                for(int i = 0; i < 10; i++) {

                    cout << "Seat "
                         << i + 1
                         << " : ";

                    if(seats[i] == 0)
                        cout << "Available";
                    else
                        cout << "Booked";

                    cout << endl;
                }

                break;

            case 2:

                cout << "Enter Seat Number (1-10): ";
                cin >> seatNo;

                if(seatNo < 1 || seatNo > 10) {

                    cout << "Invalid Seat!\n";
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

                cout << "Enter Seat Number (1-10): ";
                cin >> seatNo;

                if(seatNo < 1 || seatNo > 10) {

                    cout << "Invalid Seat!\n";
                }
                else if(seats[seatNo - 1] == 0) {

                    cout << "Seat Already Available!\n";
                }
                else {

                    seats[seatNo - 1] = 0;

                    cout << "Reservation Cancelled!\n";
                }

                break;

            case 4:

                cout << "Thank You!\n";
                break;

            default:

                cout << "Invalid Choice!\n";
        }

    } while(choice != 4);

    return 0;
}