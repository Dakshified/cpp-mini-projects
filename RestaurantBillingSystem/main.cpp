#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    int choice, quantity;
    double total = 0;

    do {

        cout << "\n===== RESTAURANT MENU =====\n";
        cout << "1. Burger      Rs.120\n";
        cout << "2. Pizza       Rs.250\n";
        cout << "3. Cold Drink  Rs.50\n";
        cout << "4. Generate Bill\n";

        cout << "Enter Choice: ";
        cin >> choice;

        switch(choice) {

            case 1:
                cout << "Quantity: ";
                cin >> quantity;
                total += quantity * 120;
                break;

            case 2:
                cout << "Quantity: ";
                cin >> quantity;
                total += quantity * 250;
                break;

            case 3:
                cout << "Quantity: ";
                cin >> quantity;
                total += quantity * 50;
                break;

            case 4:
                cout << fixed << setprecision(2);

                cout << "\n===== FINAL BILL =====\n";
                cout << "Total Amount: Rs. "
                     << total
                     << endl;
                break;

            default:
                cout << "Invalid Choice!\n";
        }

    } while(choice != 4);

    return 0;
}