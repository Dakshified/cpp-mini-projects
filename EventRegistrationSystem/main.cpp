#include <iostream>
#include <vector>

using namespace std;

int main() {

    vector<string> participants;
    int choice;

    do {

        cout << "\n===== EVENT REGISTRATION SYSTEM =====\n";
        cout << "1. Register Participant\n";
        cout << "2. View Participants\n";
        cout << "3. Exit\n";

        cout << "Enter Choice: ";
        cin >> choice;

        cin.ignore();

        switch(choice) {

            case 1: {
                string name;

                cout << "Enter Participant Name: ";
                getline(cin, name);

                participants.push_back(name);

                cout << "Registration Successful!\n";
                break;
            }

            case 2: {

                if(participants.empty()) {
                    cout << "No Participants Registered!\n";
                }
                else {

                    cout << "\n===== PARTICIPANTS =====\n";

                    for(int i = 0; i < participants.size(); i++) {
                        cout << i + 1
                             << ". "
                             << participants[i]
                             << endl;
                    }
                }

                break;
            }

            case 3:
                cout << "Event Closed!\n";
                break;

            default:
                cout << "Invalid Choice!\n";
        }

    } while(choice != 3);

    return 0;
}