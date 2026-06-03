#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {

    int choice;

    do {

        cout << "\n===== NOTES MANAGER =====\n";
        cout << "1. Add Note\n";
        cout << "2. View Notes\n";
        cout << "3. Exit\n";

        cout << "Enter Choice: ";
        cin >> choice;

        cin.ignore();

        switch(choice) {

            case 1: {
                string note;

                cout << "Enter Note: ";
                getline(cin, note);

                ofstream file("notes.txt", ios::app);
                file << note << endl;
                file.close();

                cout << "Note Saved!\n";
                break;
            }

            case 2: {
                ifstream file("notes.txt");

                string note;

                cout << "\n===== YOUR NOTES =====\n";

                while(getline(file, note)) {
                    cout << "- " << note << endl;
                }

                file.close();
                break;
            }

            case 3:
                cout << "Goodbye!\n";
                break;

            default:
                cout << "Invalid Choice!\n";
        }

    } while(choice != 3);

    return 0;
}