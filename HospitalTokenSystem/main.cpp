#include <iostream>

using namespace std;

int main() {

    int currentToken = 0;
    int servingToken = 1;
    int choice;

    do {

        cout << "\n===== HOSPITAL TOKEN SYSTEM =====\n";
        cout << "1. Generate Token\n";
        cout << "2. Serve Next Patient\n";
        cout << "3. Exit\n";

        cout << "Enter Choice: ";
        cin >> choice;

        switch(choice) {

            case 1:
                currentToken++;
                cout << "Your Token Number: "
                     << currentToken
                     << endl;
                break;

            case 2:
                if(servingToken <= currentToken) {

                    cout << "Now Serving Token: "
                         << servingToken
                         << endl;

                    servingToken++;
                }
                else {
                    cout << "No Patients Waiting!\n";
                }
                break;

            case 3:
                cout << "System Closed!\n";
                break;

            default:
                cout << "Invalid Choice!\n";
        }

    } while(choice != 3);

    return 0;
}