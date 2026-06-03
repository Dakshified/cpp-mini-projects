#include <iostream>

using namespace std;

int main() {

    int choice, quantity;
    double totalBill = 0;

    do {

        cout << "\n===== FOOD ORDERING SYSTEM =====\n";
        cout << "1. Burger  - Rs. 120\n";
        cout << "2. Pizza   - Rs. 250\n";
        cout << "3. Fries   - Rs. 80\n";
        cout << "4. Show Bill & Exit\n";

        cout << "Enter Choice: ";
        cin >> choice;

        switch(choice) {

            case 1:
                cout << "Quantity: ";
                cin >> quantity;

                totalBill += quantity * 120;
                break;

            case 2:
                cout << "Quantity: ";
                cin >> quantity;

                totalBill += quantity * 250;
                break;

            case 3:
                cout << "Quantity: ";
                cin >> quantity;

                totalBill += quantity * 80;
                break;

            case 4:
                cout << "\n===== FINAL BILL =====\n";
                cout << "Total Amount: Rs. "
                     << totalBill
                     << endl;
                break;

            default:
                cout << "Invalid Choice!\n";
        }

    } while(choice != 4);

    return 0;
}