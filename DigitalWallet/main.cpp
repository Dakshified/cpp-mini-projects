#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    double balance = 0;
    int choice;
    double amount;

    do {

        cout << "\n===== DIGITAL WALLET =====\n";
        cout << "1. Add Money\n";
        cout << "2. Spend Money\n";
        cout << "3. Check Balance\n";
        cout << "4. Exit\n";

        cout << "Enter Choice: ";
        cin >> choice;

        switch(choice) {

            case 1:
                cout << "Enter Amount to Add: Rs. ";
                cin >> amount;

                balance += amount;

                cout << "Money Added Successfully!\n";
                break;

            case 2:
                cout << "Enter Amount to Spend: Rs. ";
                cin >> amount;

                if(amount > balance) {
                    cout << "Insufficient Balance!\n";
                }
                else {
                    balance -= amount;
                    cout << "Payment Successful!\n";
                }
                break;

            case 3:
                cout << fixed << setprecision(2);
                cout << "Current Balance: Rs. "
                     << balance << endl;
                break;

            case 4:
                cout << "Thank You For Using Digital Wallet!\n";
                break;

            default:
                cout << "Invalid Choice!\n";
        }

    } while(choice != 4);

    return 0;
}