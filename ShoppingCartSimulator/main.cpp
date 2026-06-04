#include <iostream>

using namespace std;

int main() {

    int choice, quantity;
    double total = 0;

    do {

        cout << "\n===== SHOPPING CART =====\n";
        cout << "1. Laptop   - Rs.50000\n";
        cout << "2. Mouse    - Rs.500\n";
        cout << "3. Keyboard - Rs.1500\n";
        cout << "4. Checkout\n";

        cout << "Enter Choice: ";
        cin >> choice;

        switch(choice) {

            case 1:
                cout << "Quantity: ";
                cin >> quantity;
                total += quantity * 50000;
                break;

            case 2:
                cout << "Quantity: ";
                cin >> quantity;
                total += quantity * 500;
                break;

            case 3:
                cout << "Quantity: ";
                cin >> quantity;
                total += quantity * 1500;
                break;

            case 4:
                cout << "\n===== BILL =====\n";
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