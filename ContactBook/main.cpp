#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct Contact {
    string name;
    string phone;
};

int main() {
    int choice;

    do {
        cout << "\n===== CONTACT BOOK =====\n";
        cout << "1. Add Contact\n";
        cout << "2. View Contacts\n";
        cout << "3. Search Contact\n";
        cout << "4. Exit\n";
        cout << "Enter Choice: ";
        cin >> choice;

        switch(choice) {

            case 1: {
                Contact c;

                cout << "Enter Name: ";
                cin.ignore();
                getline(cin, c.name);

                cout << "Enter Phone Number: ";
                getline(cin, c.phone);

                ofstream file("contacts.txt", ios::app);
                file << c.name << "," << c.phone << endl;
                file.close();

                cout << "Contact Saved Successfully!\n";
                break;
            }

            case 2: {
                ifstream file("contacts.txt");
                string line;

                cout << "\n--- Contact List ---\n";

                while(getline(file, line)) {
                    cout << line << endl;
                }

                file.close();
                break;
            }

            case 3: {
                string searchName;
                bool found = false;

                cout << "Enter Name to Search: ";
                cin.ignore();
                getline(cin, searchName);

                ifstream file("contacts.txt");
                string line;

                while(getline(file, line)) {
                    if(line.find(searchName) != string::npos) {
                        cout << "Found: " << line << endl;
                        found = true;
                    }
                }

                file.close();

                if(!found) {
                    cout << "Contact Not Found!\n";
                }

                break;
            }

            case 4:
                cout << "Goodbye!\n";
                break;

            default:
                cout << "Invalid Choice!\n";
        }

    } while(choice != 4);

    return 0;
}